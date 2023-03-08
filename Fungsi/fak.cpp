#include <iostream>
using namespace std;

int faktorial( int a ){
	if ( a <= 1 ){
		return a;
	}
	return a * faktorial ( a - 1 );
}


int main()
{
	int a;

	cout << "Faktorial dari: ";
	cin >> a;
	cout << faktorial(a) << endl;

	system("Pause");
	return 0;
}
