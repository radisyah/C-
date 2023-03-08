#include <iostream>
#include <string>
#include <fstream>
#include <limits>



using namespace std;

struct mahasiswa{

	int pk;
	string nim;
	string nama;
	string jurusan;
	
};

int menuopsi();
void cekDatabase(fstream &data);

void writeData(fstream &data, int posisi, mahasiswa &inputMahasiswa){
	data.seekp((posisi-1)*sizeof(mahasiswa), ios::beg);
	data.write(reinterpret_cast<char*>(&inputMahasiswa), sizeof(mahasiswa));
}

int getDataSize(fstream &data){
	int start, end;
	data.seekg(0,ios::beg);  
	start = data.tellg();
	data.seekg(0,ios::end);
	end = data.tellg();
	return (end-start)/sizeof(mahasiswa);
}

mahasiswa readData(fstream &data, int posisi){
	mahasiswa readMahasiswa;
	data.seekg((posisi - 1)*sizeof(mahasiswa),ios::beg);
	data.read(reinterpret_cast<char*>(&readMahasiswa),sizeof(mahasiswa));
	return readMahasiswa;
}

void addDataMahasiswa(fstream &data){
	mahasiswa inputMahasiswa,lastMahasiswa;

	int size = getDataSize(data);
	cout << "ukuran data: " << size << endl;

	if(size==0){
		inputMahasiswa.pk=1;
	}else{
		lastMahasiswa = readData(data,size);
		cout << "pk = " << lastMahasiswa.pk << endl;
		inputMahasiswa.pk = lastMahasiswa.pk + 1;
	}

	cout << "Nama: ";
	getline(cin,inputMahasiswa.nama);
	cout << "Jurusan: ";
	getline(cin,inputMahasiswa.jurusan);
	cout << "NIM: ";
	getline(cin,inputMahasiswa.nim);
	
	writeData(data,size+1,inputMahasiswa);
	
}

void displayDataMahasiswa(fstream &data){
	int size = getDataSize(data);
	mahasiswa showMahasiswa;
	cout << "no.\tpk.\tNIM.\tNama.\tJurusan." << endl;
	for(int i = 1; i <= size; i++){
		showMahasiswa = readData(data,i);
		cout << i << "\t";
		cout << showMahasiswa.pk << "\t";
		cout << showMahasiswa.nim << "\t";
		cout << showMahasiswa.nama << "\t";
		cout << showMahasiswa.jurusan << endl;
	}
}



int main()
{

	fstream data;

	cekDatabase(data);
	int pilihan = menuopsi();
	char opsi_lanjut;
	enum opsi {CREATE = 1, READ, UPDATE, DELETE, FINISH};

	while(pilihan != FINISH){
		switch(pilihan){
			case CREATE:
				cout << "Menambah Data Mahasiswa" << endl;
				addDataMahasiswa(data);
				break;
			case READ:
				cout << "Tampilkan Data Mahasiswa" << endl;
				displayDataMahasiswa(data);
				break;
			case UPDATE:
				cout << "Ubah Data Mahasiswa" << endl;
				break;
			case DELETE:
				cout << "Hapus Data Mahasiswa" << endl;
				break;
			default:
				cout << "Pilihan tidak ditemukan" << endl;
				break;

		}

		label_continue:

		cout << "Lanjutkan (y/n)? : ";
		cin  >> opsi_lanjut;

		if ( opsi_lanjut == 'y' | opsi_lanjut =='Y'){
			pilihan = menuopsi();
		}else
		if (opsi_lanjut =='n' |opsi_lanjut =='N'){
			break;
		}else{
			goto label_continue;
		}
	}

	cout << "Akhir Program" << endl;

	system("Pause");
	return 0;
}

int menuopsi(){
	int input;
	system("cls");

	cout << "\n Program CRUD Data Mahasiswa" << endl;
	cout << "==============================" <<  endl;
	cout << "1. Tambah Data Mahasiswa" << endl;
	cout << "2. Tampilkan Data Mahasiswa" << endl;
	cout << "3. Ubah Data Mahasiswa" << endl;
	cout << "4. Hapus Data Mahasiswa" << endl;
	cout << "5. Selesai" << endl;
	cout << "==============================" << endl;
	cout << "Pilih(1-5)? : ";
	cin >> input;
	cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
	return input;
}

void cekDatabase(fstream &data){
	data.open("data.bin", ios::out | ios::in | ios::binary);
	if(data.is_open()){
		cout << "database ditemukan" << endl;
	}else{
		cout << "database kosong, buat database baru" << endl;
		data.close();
		data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
	}

}
