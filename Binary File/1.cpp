#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct mahasiswa
{
	int nim;
	string nama;
	string jurusan;
};

mahasiswa ambildata(int posisi, fstream &myFile){
	mahasiswa bufferData;
	myFile.seekp((posisi-1)*sizeof(mahasiswa));
	myFile.read(reinterpret_cast<char*>(&bufferData),sizeof(mahasiswa));
	
	return bufferData;
}

void menulisData(mahasiswa &data, fstream &myFile ){
	myFile.write(reinterpret_cast<char*>(&data),sizeof(mahasiswa));
}

void menulisDataByPos(int posisi, mahasiswa &bufferdata,fstream &myFile){
	myFile.seekg((posisi-1)*sizeof(mahasiswa));
	myFile.write(reinterpret_cast<char*>(&bufferdata),sizeof(mahasiswa));
}

int main()
{
	fstream myFile;
	myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

	mahasiswa mahasiswa1, mahasiswa2, mahasiswa3,output;

	mahasiswa1.nim = 123;
	mahasiswa1.nama = "ujang";
	mahasiswa1.jurusan = "teknik mesin";

	mahasiswa2.nim = 124;
	mahasiswa2.nama = "ijang";
	mahasiswa2.jurusan = "teknik elektro";

	mahasiswa3.nim = 125;
	mahasiswa3.nama = "ejang";
	mahasiswa3.jurusan = "teknik fisika";

	
	menulisData(mahasiswa1,myFile);
	menulisData(mahasiswa2,myFile);
	menulisData(mahasiswa3,myFile);

	mahasiswa2.nama = "tyas";
	menulisDataByPos(2,mahasiswa2,myFile);
	
	output = ambildata(2,myFile);

	cout << output.nim << endl;
	cout << output.nama << endl;
	cout << output.jurusan << endl;
	

	myFile.close();
	system("Pause");
	return 0;
}