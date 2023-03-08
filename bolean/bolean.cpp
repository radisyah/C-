#include <iostream>

using namespace std;

int main()
{
	/* Belajra Komparasi */
	
	int a = 5;
	int b = 6;

	bool hasil1, hasil2;

	// sebanding
	hasil1 = (a == b);
	// tidak sebanding
	hasil2 = ( a != b);
	// Kuranf dari
	hasil1 = ( a < b);
	// lebih dari 
	hasil2 = ( a > b);
	// Kuranf dari sama dengan
	hasil1 = ( a <= b);
	// lebih dari sama dengan
	hasil2 = ( a >= b); 
	cout << hasil1 << endl;
	cout << hasil2 << endl;
 	cin.get();
	return 0;
}
		