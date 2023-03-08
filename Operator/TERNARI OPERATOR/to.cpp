#include <iostream>
#include <string>
using namespace std;

// kondisi ? hasil1 : hasil2

int main()
{
	int x;
	string hasil1,hasil2,hasil;


	cout << "-----------------------" << endl;
	cout << "Program Positif Negatif" << endl;
	cout << "-----------------------" << endl;
	cout << "Masukkan Bilangan: ";
	cin  >> x;

	hasil1 = "Positif";
	hasil2 = "Negatif";

	hasil = (x>0) ? hasil1 : hasil2;
	cout << endl;
	cout << "Bilangan " << x << " adalah " << hasil << endl;
	cout << "-----------------------" << endl;





	system("Pause");
	return 0;
}
