#include <iostream>

using namespace std;

int main()
{
	int x;
	int sisa;
	int bagi;
	
	cout << "A=10, B=11, C=12, D=13, E=14, F=15" << endl;
	cout << "Desimal ke Heksadesimal" << endl;
	cout << "Lihat Bilangan Heksadesimal dari bawah ke atas" << endl;
	cout << "Jika Bilangan desimal sudah sampai nol " << endl;
	cout << "maka bilangan Oktalnya sudah boleh diambil" << endl;
	cout << "Hati-Hati jangan sampai salah inputkan angka" << endl;
	cout << "\nMasukkan Bilangan Desimal: ";
	for( int i = 1;  i <= 1; i-- ){
		cin >> x;
		bagi = x / 16;
		sisa = x % 16;
		cout << "Bilangan Desimal anda: " << bagi << " sisa: " << sisa  << endl;
	}
	cout << "Lihat Bilangan binernya dari bawah ke atas" << endl;
	
	


	

	system("Pause");
}
 