#include <iostream>

using namespace std;

int main()
{

	//while loop

	int a = 1 ;
	int x;
	int hasil;

	cout << "Cek bilangan ganjil dan genap" << endl;
	while( a <= 4){//awal
		
		cout << "\nMasukkan angka : ";
		cin >> x;
		hasil = x % 2;
		if(hasil == 0 ){
			cout << x <<  " adalah genap" << endl;
			cout << "Ulangi lagi untuk memastikan" << endl;
		}
		else {
			cout << x << " adalah ganjil" << endl;
			cout << "Ulangi lagi untuk memastikan" << endl;
		}
		a++;
	
	}//akhhir

	cout << "\nSekian dan terimakasih" << endl;

	system("Pause");
}
