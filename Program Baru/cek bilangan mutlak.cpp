#include <iostream>

using namespace std;

int main()
{
	/* Cek Bilangan Mutlak */

	float a;
	float hasil;

	cout << "Cek nilai mutlak suatu angka" << endl;
	cout << "Masukkan Angka : ";
	cin >> a;

	if ( a < 1 ){
		hasil = a*-1;
		cout << "Nilai Mutlaknya = " << hasil << endl;
	} else {	
		cout << "Nilai Mutlaknya = " << a << endl;
	}

	


	cin.get();
	return 0;
}
