#include <iostream>

using namespace std;


int main()
{
	//deklarasi
	int a = 6;
	float b = 4;
	
	float hasil;

	//operator aritmatika : +,-,*,/,%

	//penjumlahan
	hasil = a+b;
	cout << a << "+" << b << "=" << hasil << endl;
	
	//pengurangan
	hasil = a-b;
	cout << a << "-" << b << "=" << hasil << endl;

	//perkalian
	hasil = a*b;
	cout << a << "*" << b << "=" << hasil << endl;

	//pembagian
	hasil = a/b;
	cout << a << "/" << b << "=" << hasil << endl;

	//modulu
	//hasil = a%b;
	//cout << a << "%" << b << "=" << hasil << endl;

	//operasi kurung
	hasil = (a+b)*b;
	cout << a << "+" << b << "*" << b << "=" << hasil << endl;
	cin.get();
	return 0;
}