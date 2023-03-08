#include <iostream>

using namespace std;


int main(){
	
	//Luas Segitiga

	int a;
	int t;
	int luas;

	cout << "Menghitung Luas Segitiga\n"; 
	cout << "Masukkan alas: ";
	cin >> a;
	cout << "Masukan tinggi: " ;
	cin >> t;
	luas = (a*t)/2;
	cout << "Luas Segitiga Adalah:" << "(" << a << "x" << t << ")" << ":" << 2 << "=" << luas << endl;

	cin.get();
	return 0;
}