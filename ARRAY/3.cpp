#include <iostream>
using namespace std;

int main()
{
	//Looping array//
	/*
		for (deklarasi variabel : array{
			statement
		}
	*/

	int arrayNilai[10] = {0,1,2,3,4,5,6,7,8,9};

	for ( int nilai : arrayNilai ){
		cout << "address " << &nilai << " nilainya " << nilai << endl;
	}

	cout << endl << endl;

	for ( int &nilaiRef : arrayNilai ){
		nilaiRef *= 3;
	}

	for ( int &nilaiRef : arrayNilai ){
		cout << "address " << &nilaiRef << " nilainya " << nilaiRef << endl;
	}

	system("Pause");
	return 0;
}
