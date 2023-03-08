#include <iostream>

using namespace std;

//PrototypeFungsi
void tampilkan_kuadrat ( int x );
void tampilkan_jumlah ( int a, int b );



int main()
{
	int input,a,b;

	cout << "nilai kuadrat dari: ";
	cin >> input;
	tampilkan_kuadrat(input);
	
	cout << "Masukkan nilai-1: ";
	cin >> a;
	cout << "Masukkan nilai-2: ";
	cin >> b;
	tampilkan_jumlah( a,b );

	system("Pause");
	return 0;
}

int kuadrat( int x ){
	return x*x;
}

int jumlah( int a, int b){
	return a+b;	
}

void tampilkan_kuadrat ( int x ){
	cout << kuadrat( x ) << endl;
}

void tampilkan_jumlah ( int a, int b ){
	cout << "jumlah dari kedua nilai tersebut adalah: ";
	cout << jumlah( a,b ) << endl;
}
