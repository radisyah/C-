#include <iostream>
#include <string>
using namespace std;

// kondisi ? hasil1 : hasil2

int main()
{
	int x,y,z;
	string hasil1,hasil2,hasil3,hasil;


	cout << "---------------------------------" << endl;
	cout << "Program Tiga Bilangan Lebih Besar" << endl;
	cout << "---------------------------------" << endl;
	cout << "Masukkan Bilangan 1: ";
	cin  >> x;
	cout << "Masukkan Bilangan 2: ";
	cin  >> y;

	

	hasil1 = "X > Y ";
	hasil2 = "Y > X ";
	

	hasil = (x>y) ? hasil1 : hasil2;
	cout << endl;
	cout << hasil << endl;


	





	system("Pause");
	return 0;
}
