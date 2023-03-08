#include <iostream>
using namespace std;

int main()
{
	/*
	int nilai[5] = {0,1,2,3,4};

	cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
	cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
	cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
	cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
	cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;

	cout << endl;
	cout << "ukuran array: " << sizeof(nilai) << endl;
	cout << "jumlah array: " << sizeof(nilai) / sizeof(int) << endl;*/

	int nilai[5];

	cout << "Masukkan nilai pertama: ";
	cin  >> nilai[0];
	cout << "Masukkan nilai kedua: ";
	cin  >> nilai[1];
	cout << "Masukkan nilai ketiga: ";
	cin  >> nilai[2];
	cout << "Masukkan nilai keempat: ";
	cin  >> nilai[3];
	cout << "Masukkan nilai kelima: ";
	cin  >> nilai[4];

	cout << endl;

	cout << nilai[0] << endl;
	cout << nilai[4] << endl;
	cout << nilai[2] << endl;
	cout << nilai[1] << endl;
	cout << nilai[3] << endl;


	system("Pause");
	return 0;
}
