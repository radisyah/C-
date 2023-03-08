#include <iostream>

using namespace std;

int main()
{
	
	/* Menghitung Luas Lingkaran */
	
	int r;
	float pi = 3.14;
	float luas;

	cout << "Luas Lingkaran\n";
	cout << "Masukkan jari-jari: ";
	cin >> r;
	luas = pi*r*r;
	cout << "Luas lingkaran adalah " << pi << "x" << r << "x" << r << "=" << luas << endl;
	
	cin.get();
	return 0;
}