#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float ton,xp,yp,xs,ys,hasil;
	cout << "=============================================" << endl;
	cout << "     Program Mencari Datalokasi Pabrik" 		<< endl;
	cout << "=============================================" << endl;
	cout << endl;
	cout << "masukkan berapa Kapasitas ton pada barang : ";
	cin  >> ton;
	cout << "masukkan koordinat x lokasi pabrik : ";
	cin  >> xp;
	cout << "masukkan koordinat y lokasi pabrik : ";
	cin  >> yp;
	cout << "masukkan koordinat x sumber material pabrik : ";
	cin  >> xs;
	cout << "masukkan koordinat y sumber material pabrik : ";
	cin  >> ys;
	

	hasil = ton * ( ( ( xp - xs ) * ( xp - xs ) )   +  ( ( yp - ys ) * ( yp - ys ) ) );
	cout << endl;
	cout << "Hasil Adalah: " << sqrt(hasil) << endl;
	system("Pause");
}

