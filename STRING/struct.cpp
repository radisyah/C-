#include <iostream>
#include <string>
using namespace std;

struct data{
	string nama;
	int nim;
	int umur;
	string hobi;
	};


int main()
{
	data mahasiswa;
	
	cout << "-----------------" << endl;
	cout << "Biodata Mahasiswa" << endl;
	cout << "-----------------" << endl;
	cout << "Nama: ";
	cin  >> mahasiswa.nama;
	cout << "Nim : ";
	cin  >> mahasiswa.nim;
	cout << "Umur: ";
	cin  >> mahasiswa.umur;
	cout << "Hobi: ";
	cin  >> mahasiswa.hobi;

	cout << endl;

	cout << "-----HASIL------" << endl;
	cout << "Nama: " << mahasiswa.nama << endl;
	cout << "Nim : " << mahasiswa.nim << endl;
	cout << "Umur: " << mahasiswa.umur << endl;
	cout << "Hobi: " << mahasiswa.hobi << endl;




	

	system("Pause");
	return 0;
}
