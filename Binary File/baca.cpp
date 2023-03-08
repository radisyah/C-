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

mahasiswa ambildata(int &posisi, fstream &myFile){
	mahasiswa bufferData;
	myFile.seekp((posisi-1)*sizeof(mahasiswa));
	myFile.read(reinterpret_cast<char*>(&bufferData),sizeof(mahasiswa));
	
	return bufferData;
}

int main()
{

	fstream myFile;
	mahasiswa dataBaca;
	myFile.open("data.bin", ios::in | ios:: binary);
	int posisi =1;
	dataBaca = ambildata(posisi, myFile);

	cout << dataBaca.nim << endl;
	cout << dataBaca.nama << endl;
	cout << dataBaca.jurusan << endl;
	myFile.close();
	
	system("Pause");
	return 0;
}
