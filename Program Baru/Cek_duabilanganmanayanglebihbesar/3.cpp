#include <iostream>

using namespace std;

int main()
{
	
	float x;
	float y;

	//Cek bilangan mana yang lebih besar
	cout << "Cek bilangan mana yang lebih besar" << endl;
	cout << "Masukkan Angka Pertama: ";
	cin >> x;
	cout << "Masukkan Angka Kedua: ";
	cin >> y;
	   if ( x > y ) {
		cout << "Angka Pertama Lebih Besar dari Angka Kedua " << "( " <<  x << " > " << y << " )" << endl;
	}  else if ( x < y ) {
		cout << "Angka Kedua Lebih Besar dari Angka Pertama " << "( " <<  y << " > " << x << " )" << endl;
	} 
	   else if ( x == y ) {
		cout << "Angka Pertama samadengan Angka Kedua " << "( " <<  x << " = " << y << " )" << endl;
	}

		cout << "SELESAI" << endl;

	cin.get();
	return 0;
}
