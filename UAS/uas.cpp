#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	/*	n = durasi pemakaian komputer
		a = orang pertama
		b = orang kedua
		c = orang ketiga
	*/

	int n,a,b,c;
	int hasil,hasil2;
	
	

	cout << "Masukkan berapa durasi/jam untuk pemakaian komputer: ";
	cin  >> n;
	cout << "Masukkan durasi/jam orang pertama: ";
	
	cin  >> a;
	cout << "Masukkan durasi/jam orang kedua: ";
	cin  >> b;
	cout << "Masukkan durasi/jam orang ketiga: ";
	cin  >> c;
	
	for (int i=1; i<=n; i++){
		hasil = hasil2;
		hasil = a + b + c;
		hasil2 = hasil + a + b + c;
		cout << hasil2 << endl;
	}

	
	
	
	
	
		
	
	system("Pause");
	return 0;
	}

