#include <iostream>

using namespace std;

int main()
{
	//menghitung luas persegi
	int a;
	int hasil;

	cout << "menghitung luas persegi\n"; 
	cout << "Masukkan sisi persegi ";
	cin >> a;
	hasil = a*a;
	cout << "luas persegi adalah " << a << "x" << a << "=" << hasil << endl;
	cin.get();
	return 0;
}
