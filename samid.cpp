#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a,b,persen1,persen2,persen3,c,hasil;
	cout << "=============================================" << endl;
	cout << "       Program Mencari Ekspansi Pabrik" 		<< endl;
	cout << "=============================================" << endl;
	cout << endl;
	cout << "masukkan berapa persen Ketersedian Bahan Baku   : ";
	cin  >> persen1;
	cout << "masukkan skor nilai pertama : ";
	cin  >> a;
	cout << "masukkan berapa persen Ketersedian Tenaga Kerja : ";
	cin  >> persen2;
	cout << "masukkan skor nilai Kedua   : ";
	cin  >> b;
	cout << "masukkan berapa persen Ketersedian Transportasi : ";
	cin  >> persen3;
	cout << "masukkan skor nilai Ketiga   : ";
	cin  >> c;

	hasil = ( ( (persen1 / 100) * a ) + ( (persen2/ 100) * b ) + ( (persen3 / 100 ) *c) );
	cout << endl;
	cout << "Hasil Adalah: " << hasil << endl;
	system("Pause");
}

