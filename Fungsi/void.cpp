#include <iostream>

using namespace std;

int kuadrat( int x ){
	int y;
	y = x * x;
	return y;
}

int jumlah( int a, int b){
	int c;
	c = a + b;
	return c;	
}

void tampilkan_kuadrat ( int x ){
	cout << kuadrat( x ) << endl;
}

void tampilkan_jumlah ( int a, int b ){
	cout << "jumlah dari kedua nilai tersebut adalah: ";
	cout << jumlah( a,b ) << endl;
}



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
