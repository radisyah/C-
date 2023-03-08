#include <iostream>
using namespace std;

//Protototype
void fungsi_b  ( int & );
void kuadrat_b ( int & );
void kuadrat_a ( int & );


int main()
{
	int a = 5;

	//statement
	cout << "nilai  a: " << a  << endl;
	cout << "alamat a: " << &a << endl;
	kuadrat_a(a);
	cout << "kuadrat dari a: " << a << endl;
	fungsi_b(a);
	kuadrat_b(a);
	cout << "kuadrat dari b: " << a << endl;

	cin.get();
	return 0;
}

//Fungsi
void fungsi_b ( int &b ){
	b = 10;
	cout << "nilai  b: " << b  << endl;
	cout << "alamat b: " << &b << endl;
}

void kuadrat_b ( int &b ){
	b = b * b;
}

void kuadrat_a ( int &value ){
	value = value * value;
}
