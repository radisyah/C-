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

int main()
{
	int input,a,b;

	cout << "nilai kuadrat dari: ";
	cin >> input;
	cout << "adalah " << kuadrat(input) << endl;

	cout << "Masukkan nilai-1: ";
	cin >> a;
	cout << "Masukkan nilai-2: ";
	cin >> b;

	cout << "jumlah daari nilai tersebut adalah: " << jumlah(a,b) << endl;

	
	system("Pause");
	return 0;
}
