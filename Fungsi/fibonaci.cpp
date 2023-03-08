#include <iostream>
using namespace std;

int fib ( int n );

int main()
{
	int angka,hasil;

	cout << "Menghitung fibonacci ke-n: ";
	cin >> angka;

	hasil = fib(angka);

	cout << endl;
	cout << "adalah: " << hasil << endl;
	
	system("Pause");
}


int fib( int n ){
	if ( n == 0 || n == 1 ){
		return n;
	}
	else {
		return fib( n - 1 ) + fib ( n - 2 );
	}
}