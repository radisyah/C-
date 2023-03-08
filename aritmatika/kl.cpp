#include <iostream>

using namespace std;

int main()
{
	
	/* Menghitung Keliling LIngkaran */
	
	int r;
	float pi = 3.14;
	float keliling;

	cout << "Keliling Lingkaran\n";
	cout << "Masukkan jari-jari: ";
	cin >> r;
	keliling = 2*pi*r;
	cout << "Keliling lingkaran adalah " << 2 << "x" << pi << "x" << r << "=" << keliling << endl;

	cin.get();
	return 0;
}