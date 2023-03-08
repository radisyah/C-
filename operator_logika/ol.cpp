#include <iostream>

using namespace std;

int main()
{

	int a = 3;
	int b = 2;

	bool hasil1;

	// Operator Logika; Not,and, dan or//
	// and //
	cout << "untuk and" << endl;
	hasil1 = ( a == 3 ) and ( a == 2 ); //true and true
	cout << hasil1 << endl;
	

	// Not //
	cout << "Untuk nor" << endl;
	hasil1 = !( a == b);
	cout << hasil1 << endl;

	// and //
	cout << "untuk or" << endl;
	hasil1 = ( a == 3 ) or ( a == 2 ); //true and true
	cout << hasil1 << endl;
	hasil1 = ( a == 3 ) or ( a == 4 ); //true and false
	cout << hasil1 << endl;
	hasil1 = ( a == 4 ) or ( a == 2 ); //false and true
	cout << hasil1 << endl;
	hasil1 = ( a == 2 ) or ( a == 3 ); //false and false
	cout << hasil1 << endl;

	cin.get();
	return 0;
}
