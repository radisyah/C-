#include <iostream>

using namespace std;


int main()
{
	int n;
	int hasil;
	cout << "Program Segitiga" << endl;
	cout << "Masukkan pola ke-n: ";
	cin >> n;

	for (int i = 1; i <= n; i++){//awal
		for ( int y = 1; y <= i; y++){
			hasil = (i+1)-1;
			cout << hasil;
		}
		cout << endl;
	}//akhir

	cout << "Program Segitiga" << endl;
	cout << "terimakasih" << endl;
 	system("Pause");
		
}