#include <iostream>

using namespace std;


int main()
{

	//Luas Trapesium
	int a;
	int b;
	int t;
	int luas;

	cout << "Menghitung Luas Trapesium\n";
	cout << "Masukkan sisi alas: ";
	cin >> a;
	cout << "Masukkan sisi atas: "; 
	cin >> b;
	cout << "Masukkan Tinggi: ";
	cin >> t;
	luas = (a+b)*t;
	cout << "Luas Persegi adalah " << "(" << a << "+" << b << ")" << "x" << t << "=" << luas << endl;




	cin.get();
	return 0;
}
