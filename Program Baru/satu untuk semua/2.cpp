#include <iostream>
using namespace std;

int main ()
{
	cout << "Nama  = Kuncoro Ariadi" << endl;
	cout << "NPM   = 20081010096" << endl;
	cout << "Kelas = Informatika C081" << endl;
	
	cout << "\nTugas Algoritma Nested For" << endl;
	cout << "Contoh penggunaan 1" << endl;
	int x;
	for (int x=0; x<3; x++) {
		cout << "**" << endl;
	}
	
	cout << "\nContoh penggunaan 2" << endl;
	
	for (int x=1; x<=3; x++) {
		for (int y=1; y<=x; y++) {
			cout << "*";
		}
		cout << endl;
	}
		
	cout << "\nMenentukan bilangan ganjil atau genap" << endl;
	int z;
	int hasil;
	for (int a=1; a<=4; a++){
		cout << "Masukkan Angka =";
		cin >> z;
		hasil = z % 2;
		if ( hasil == 0 ){
			cout << "Bilangan " << z << " adalah Genap" << endl;
		} else {
			cout << "Bilangan " << z << " adalah Ganjil" << endl;
		}
	}
	system("Pause");
		
}
