#include <iostream>
using namespace std;

int main()
{

	int a = 5;

	//pointer

	int *aPtr = nullptr;
	aPtr = &a;


	// int a mempunyai nilai dan alamat

	cout << "nilai  dari a: " << a  << endl;
	cout << "alamat dari a: " << aPtr << endl;

	//dereferencing, mengambil data dari sebuah pointer
	a = 100;
	cout << "data dari aPtr: " << *aPtr << endl;


	system("Pause");
	return 0;
}
