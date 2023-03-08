#include <iostream>

using namespace std;

int perkalian(int angka, int var_pengali){
	if(var_pengali==0){
		return 0;
	}
	else {
		return angka + perkalian(angka, var_pengali-1);
	}
}

int pembagian(int angka, int var_pembagi){
	if(angka<var_pembagi){
		return 0;
	}
	else {
		return 1 + pembagian(angka-var_pembagi, var_pembagi);
	}
}

int main()
{
	
	int angka, var_pengali, var_pembagi, menu;

	cout<< "---------------------------" << endl;
	cout <<  "PROGRAM FUNGSI REKURSIF" << endl;
	cout<< "---------------------------" << endl;
	cout << "Masukkan Angka: ";
	cin >> angka;
	cout << endl;
	cout<< "----------------" << endl;
	cout << "1. Perkalian" << endl;
	cout << "2. Pembagian" << endl;
	cout<< "----------------" << endl;
	cout <<   "Pilih Menu: ";
	cin >> menu;
	if(menu == 1){
	cout<< "----------------" << endl;
	cout <<   "PERKALIAN" << endl;
	cout<< "----------------" << endl;
	cout << "Masukkan variabel Pengali: ";
	cin >> var_pengali;
	cout << "hasil perkalian: " << perkalian(angka, var_pengali);
	cout << endl;
	}else if (menu == 2){
	cout<< "----------------" << endl;
	cout <<   "PEMBAGIAN" << endl;
	cout<< "----------------" << endl;
	cout << "Masukkan variabel Pembagi: ";
	cin >> var_pembagi;
	cout << "hasil pembagian: " << pembagian(angka, var_pembagi);
	cout << endl;
	}





	system("Pause");
}
