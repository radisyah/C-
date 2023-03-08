#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	float a,b,c,hasil;
	/*
	cout << "masukkan angka pertama: ";
	cin  >> a;
	cout << "masukkan angka kedua: ";
	cin  >> b;
	cout  << "masukkan angka ketiga: ";
	cin  >> c;

	hasil = ( 0.35 * a ) + ( 0.35 * b ) + ( 0.30 * c );
	cout << "Hasilnya adalah : " << hasil << endl;
	*/

	cout << "masukkan angka pertama: ";
	cin  >> a;
	cout << "masukkan angka kedua: ";
	cin  >> b;
	cout  << "masukkan angka ketiga: ";
	cin  >> c;

	hasil = ( sqrt(a*210) + sqrt(b*190) + sqrt(c*220) );
	cout << "Hasilnya adalah : " << hasil << endl;

	system("Pause");
}