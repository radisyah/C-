#include <iostream>

using namespace std;

int main()
{
	int x;
	int sisa;
	int bagi;
	
	cout << "Desimal ke Oktal" << endl;
	cout << "Lihat Bilangan Oktalnya dari bawah ke atas" << endl;
	cout << "Jika Bilangan desimal sudah sampai nol " << endl;
	cout << "maka bilangan Oktalnya sudah boleh diambil" << endl;
	cout << "Hati-Hati jangan sampai salah inputkan angka" << endl;
	cout << "\nMasukkan Bilangan Desimal: ";
	for( int i = 1;  i <= 1; i-- ){
		cin >> x;
		bagi = x / 8;
		sisa = x % 8;
		cout << "Bilangan Desimal anda: " << bagi << " sisa: " << sisa  << endl;
	}
	cout << "Lihat Bilangan binernya dari bawah ke atas" << endl;
	
	


	

	system("Pause");
}
 