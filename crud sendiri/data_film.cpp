#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

struct Mahasiswa {
	int pk;
	string NIM;
	string nama;
	string jurusan;
};

int getOption();
void checkDatabase(fstream &data);
void writeData(fstream &data, int posisi, Mahasiswa &inputMahasiswa);
int getDataSize(fstream &data);
Mahasiswa readData(fstream &data, int posisi);
void addDataMahasiswa(fstream &data);
void displayDataMahasiswa(fstream &data);
int menuopsi();

int main()
{
	fstream data;

	checkDatabase(data);

	int pilihan = menuopsi();
	char opsi_lanjut;
	enum opsi {CREATE =1, READ, UPDATE, DELETE, FINISH};

	while(pilihan!=FINISH){

		switch(pilihan){
			case CREATE:
				cout << "Menambah Data Film" << endl;
				addDataMahasiswa(data);
				break;
			case READ:
				cout << "Tampilkan Data Film" << endl;
				displayDataMahasiswa(data);
				break;
			case UPDATE:
				cout << "Ubah Data Film" << endl;
				break;
			case DELETE:
				cout << "Hapus Data Film" << endl;
				break;
			default:
				cout << "Pilihan Tidak Ditemukan" << endl;
				break;
		}

		label_continue:

		cout << "lanjutkan (y/n)? : ";
		cin >> opsi_lanjut;

		if ((opsi_lanjut=='y')|(opsi_lanjut=='Y')){
			pilihan = menuopsi();
		}else
		if((opsi_lanjut=='n')|(opsi_lanjut=='N')){
			break;
		}else{
			goto label_continue;
		}

	}

	cout << "akhir program" << endl;




	system("Pause");
	return 0;
}

int menuopsi(){
	int input;
	system("cls");
	cout << "\n Program CRUD Data Film" << endl;
	cout << "==============================" <<  endl;
	cout << "1. Tambah Data Film" << endl;
	cout << "2. Tampilkan Data Film" << endl;
	cout << "3. Ubah Data Film" << endl;
	cout << "4. Hapus Data Film" << endl;
	cout << "5. Selesai" << endl;
	cout << "==============================" << endl;
	cout << "Pilih(1-5)? : ";
	cin  >> input;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	return input;

}

void checkDatabase(fstream &data){
	data.open("data.bin", ios::out | ios::in | ios::binary);

	// check file ada atau tidak
	if (data.is_open()){
		cout << "database ditemukan" << endl;
	} else {
		cout << "database tidak ditemukan, buat database baru" << endl;
		data.close();
		data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
	}
}

int getOption(){
	int input;
	system("clear");
	// system("cls");
	cout << "\nProgram CRUD data mahasiswa" << endl;
	cout << "=============================" << endl;
	cout << "1. Tambah data mahasiswa" << endl;
	cout << "2. Tampilkan data mahasiswa" << endl;
	cout << "3. Ubah data mahasiswa" << endl;
	cout << "4. Hapus data mahasiswa" << endl;
	cout << "5. Selesai" << endl;
	cout << "=============================" << endl;
	cout << "pilih [1-5]? : ";
	cin >> input;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	return input;
}

void writeData(fstream &data, int posisi, Mahasiswa &inputMahasiswa){
	data.seekp((posisi - 1)*sizeof(Mahasiswa), ios::beg);
	data.write(reinterpret_cast<char*>(&inputMahasiswa),sizeof(Mahasiswa));
}

int getDataSize(fstream &data){
	int start, end;
	data.seekg(0,ios::beg);
	start = data.tellg();
	data.seekg(0,ios::end);
	end = data.tellg();
	return (end-start)/sizeof(Mahasiswa);
}

Mahasiswa readData(fstream &data, int posisi){
	Mahasiswa readMahasiswa;
	data.seekg((posisi - 1)*sizeof(Mahasiswa),ios::beg);
	data.read(reinterpret_cast<char*>(&readMahasiswa),sizeof(Mahasiswa));
	return readMahasiswa;
}

void addDataMahasiswa(fstream &data){
	
	Mahasiswa inputMahasiswa, lastMahasiswa;

	int size = getDataSize(data);
	
	cout << "ukuran data : " << size << endl;

	if(size == 0){
		inputMahasiswa.pk = 1;
	} else {
		lastMahasiswa = readData(data,size);
		cout << "pk = " << lastMahasiswa.pk << endl;
		inputMahasiswa.pk = lastMahasiswa.pk + 1;
	}

	cout << "Nama: ";
	getline(cin, inputMahasiswa.nama);
	cout << "Jurusan: ";
	getline(cin, inputMahasiswa.jurusan);
	cout << "NIM: ";
	getline(cin, inputMahasiswa.NIM);

	writeData(data,size+1,inputMahasiswa);
}

void displayDataMahasiswa(fstream &data){
	int size = getDataSize(data);
	Mahasiswa showMahasiswa;
	cout << "no.\tpk.\tNIM.\tNama.\tJurusan." << endl;
	for(int i = 1; i <= size; i++){
		showMahasiswa = readData(data,i);
		cout << i << "\t";
		cout << showMahasiswa.pk << "\t";
		cout << showMahasiswa.NIM << "\t";
		cout << showMahasiswa.nama << "\t";
		cout << showMahasiswa.jurusan << endl;
	}
}
