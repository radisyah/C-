#include <iostream>

using namespace std;

int main()
{
	
	float n;
	float jumlah = 0;
	float bilangan;
	float rerata;

	cout << "Mencari rata-rata bilangan" << endl;
	cout << "\nMasukkan berapa bilangan yang ingin anda cari" << endl;
	cout << "Masukkan angka: "; cin >> n;

	for ( int i = 1; i <= n; i++){
		cout << "\nMasukkan bilangan: "; 
		cin >> bilangan;
		jumlah =  jumlah + bilangan; 
	}

	cout << "\nJumlah bilangan anda: "; 
	cout << jumlah; 
	rerata = jumlah/n;
	cout << "\nRata-rata bilangan anda: "; 
	cout << rerata; 
	cout << endl << endl;

	system("Pause");
}
