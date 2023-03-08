#include <iostream>
using namespace std;

int main()
{

	int a = 5;

	//pointer
	cout << "nilai  dari a: " << a <<  endl;
	cout << "alamat dari a: " << &a << endl << endl ;

	//reference
	int &b = a;
	cout << "nilai  dari b: " << b <<  endl;
	cout << "alamat dari b: " << &b << endl << endl ;

	b = 20;
	cout << "nilai  dari a: " << a <<  endl;
	cout << "nilai  dari b: " << b <<  endl << endl ;

	a = 11;
	cout << "nilai  dari a: " << a <<  endl;
	cout << "nilai  dari b: " << b <<  endl << endl ;





	cin.get();
	return 0;
}
