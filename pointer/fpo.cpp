#include <iostream>
using namespace std;

void fungsi ( int * );
void kuadrat( int * );

int main()
{
	int a = 5;

	cout << "nilai  a: " << a << endl;
	cout << "alamat a: " << &a << endl;
	fungsi(&a);

	kuadrat(&a);
	cout << "kuadrat dari a: " << a << endl;
	



	cin.get();
	return 0;
}

void fungsi( int *b ){
	cout << "nilai  b: " << *b << endl; //deferening
	cout << "alamat b: " <<  b << endl;
}

void kuadrat( int *value ){
	*value = (*value) * (*value);
}
