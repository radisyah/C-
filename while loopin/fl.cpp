#include <iostream>

using namespace std;

int main()
{
	cout << "Cek bilangan ganjil dan genap" << endl;
	for( int i = 1;  i == 1; i++ ){//awalloop
		int x; 
		int hasil;
		cout << "\nMasukkan angka : ";
		cin >> x;
		hasil = x % 2;
		if(hasil == 0 ){
			cout << x <<  " adalah genap\n";
			cout << "Ulangi lagi untuk memastikan\n";
		} 
		else {
			cout << x << " adalah ganjil\n";
			cout << "Ulangi lagi untuk memastikan\n";
		}
	}//akhirloop

	cout << "\nSekian dan terimakasih" << endl;
	
	system("Pause");
}
