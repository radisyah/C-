#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

	//Identitas diri
	cout << "Nama  : Rahmat Dimas Syahputra"  << endl;
	cout << "Kelas : C"  << endl;
	cout << "NPM   : 20081010113"  << endl;

	//Menu Program
	int x;
	cout << "\nTugas Nested For" << endl;
	cout << "\nMenu Program" << endl;
	cout << "Ketik 1 untuk mengecek tugas pertama" << endl;
	cout << "Ketik 2 untuk mengecek tugas kedua" << endl;
	cout << "Ketik 3 untuk mengecek tugas ketiga" << endl;
	cout << "\nMasukkan angka: ";
	cin >> x;

	//no1
	
	if( x > 0 and x < 5 ){//awalif
	if ( x == 1 ){//awaltugas1
		int n;
	cout << "\nTugas Pertama " << endl;
	cout << "Masukkan baris ke-n: ";
	cin >> n;
	for( int i = 1;  i <= n; i++ ){//awalloop
		cout << "*" << "" << "*" << endl;
	}//akhirloop;
	}//akhirtugas1
	
	//no2
	if ( x == 2 ){//awaltugas2
	int n;
	cout << "\nTugas Kedua" << endl;
	cout << "Masukkan pola ke: ";
	cin>> n;

	for (int x=1; x <= n; x++) {//awalloop
		for (int y=1; y<=x; y++) {
			cout << "*";
		}
		cout << endl;
	}//akhirloop
	}//akhirtugas2

	//no3
	if ( x == 3 ){//awaltugas3
		cout << "Cek bilangan ganjil dan genap" << endl;
	for( int i = 1;  i <= 4; i++ ){//awalloop
		int x; 
		int hasil;
		cout << "\nMasukkan angka : ";
		cin >> x;
		hasil = x % 2;
		if(hasil == 0 ){
			cout << x <<  " adalah genap\n";
		} 
		else {
			cout << x << " adalah ganjil\n";
		}
	}//akhirloop
	}//akhirtugas3

	if( x > 3 ){
		cout << "Tidak tersedia" << endl;
	}

	if( x < 1 ){
		cout << "Tidak tersedia" << endl;
	}

	}//akhirif

	cout << "\nSekian dan terimakasih" << endl;

	system("Pause");
}
