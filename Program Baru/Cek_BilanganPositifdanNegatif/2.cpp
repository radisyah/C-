#include <iostream>

using namespace std;

int main()
{

	float a;

	// Cek Bilangan Positif dan Negatif
	cout << "Cek Bilangan Positif dan Negatif" << endl;
	cout << "Masukkan Angka ";
	cin >> a;
	if ( a < 0 ) {
		cout << "Angka yag dimasukkan Negatif" << endl;
	}
		else
	if ( a > 0 ) {
		cout << "Angka yang dimasukkan Positif" << endl;
	}
	

	

	system("Pause");
}
