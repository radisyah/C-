#include <iostream>
using namespace std;

//protototypr
int faktorial ( int n );


int main()
{
	int angka,hasil;

	cout << "faktorial dari: ";
	cin >> angka;

	hasil = faktorial(angka);

	cout << "\nhasil dari factorial: " << hasil << endl;


	system("Pause");
}

int faktorial ( int angka ){
	if ( angka <= 1 ){
		cout << angka;
		return angka;
	} else {
		cout << angka << " + ";
		return angka + faktorial( angka - 1 );
	}
}
