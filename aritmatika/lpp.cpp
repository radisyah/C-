#include <iostream>

using namespace std;

int main()
{

/* Menghitung Luas Persegi Panjang */

	float p;
	float l;
	float luas;

	cout << "Luas Persegi Panjang\n";
	cout << "Masukkan Panjang: ";
	cin >> p;
	cout << "Masukkan Lebar: ";
	cin >> l;
	luas = p*l;
	cout << "Luas persegi panjang adalah " << p << "x" << l << "=" << luas << endl;

	cin.get();
	return 0;

}