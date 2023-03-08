#include <iostream>

using namespace std;

int main()
{
	int x;
	int sisa;
	int bagi;
	
	cout << "Desimal ke Biner" << endl;
	cout << "Lihat Bilangan binernya dari bawah ke atas" << endl;
	cout << "Jika Bilangan desimal sudah sampai nol "<< endl;
	cout << "maka bilangan binernya sudah boleh diambil" << endl;
	cout << "Hati-Hati jangan sampai salah inputkan angka" << endl;
	cout << "\nMasukkan Bilangan Desimal: ";
	for( int i = 1;  i <= x; i-- ){
		cin >> x;
		bagi = x / 2;
		sisa = x % 2;
		cout << "Bilangan Desimal anda: " << bagi << " sisa: " << sisa  << endl;
	}
	
	
	


	

	system("Pause");
}
 