#include <iostream>
#include <array>
using namespace std;

const int baris = 3;
const int kolom = 3;

void matriksA( array < array < int,kolom > , baris > &MatriksA){
	for ( array  < int,kolom > vektorBaris : nilaiArray ){
		for ( int nilaiKolom : vektorBaris){
			cout << nilaiKolom << " ";
		}
		cout << endl << endl;
	}
}

void matriksB( array < array < int,kolom > , baris > &MatriksB){
	for ( array  < int,kolom > vektorBaris : nilaiArray ){
		for ( int nilaiKolom : vektorBaris){
			cout << nilaiKolom << " ";
		}
		cout << endl << endl;
	}
}

int main()
{


	int a11,a12,a13,a21,a22,a23,a31,a32,a33;
	int b11,b12,b13,b21,b22,b23,b31,b32,b33;
	int s,m;
	int c11,c12,c13,c21,c22,c23,c31,c32,c33;
	int ke1,ke2,jumlah;

	
	array < array < int,kolom > , baris > nilaiM1;
	array < array < int,kolom > , baris > nilaiM2;

	cout << endl;
	cout << "-------------------------------"<< endl;
	cout << "    Program Operasi Matriks   " << endl;
	cout << "-------------------------------"<< endl;
	cout << "1. Matriks ordo 2x2"			 << endl;
	cout << "2. Matriks ordo 3x3"			 << endl;
	cout << endl;
	cout << "Masukkan Agka: ";
	cin  >> m;
	cout << endl;

	if (m==2){
	cout << "-------------------------------"<< endl;
	cout << "      Operasi Matriks 3x3 "     << endl;
	cout << "-------------------------------"<< endl;
	cout << endl;
	cout << "Masukkan elemen matriks ke-1 "  << endl;
	cout << endl;
	cout << "Masukkan a11: ";
	cin  >> nilaiM1[0][0];
	cout << "Masukkan a12: ";
	cin  >> nilaiM1[0][1];
	cout << "Masukkan a13: ";
	cin  >> nilaiM1[0][2];
	cout << "Masukkan a21: ";
	cin  >> nilaiM1[1][0];
	cout << "Masukkan a22: ";
	cin  >> nilaiM1[1][1];
	cout << "Masukkan a23: ";
	cin  >> nilaiM1[1][2];
	cout << "Masukkan a31: ";
	cin  >> nilaiM1[2][0];
	cout << "Masukkan a32: ";
	cin  >> nilaiM1[2][1];
	cout << "Masukkan a33: ";
	cin  >> nilaiM1[2][2];
	cout << endl;
	matriksA(nilaiM1);

	cout << "-------------------------------"<< endl;
	cout << endl;
	cout << "Masukkan elemen matriks ke-2 "  << endl;
	cout << endl;
	cout << "Masukkan b11: ";
	cin  >> nilaiM2[0][0];
	cout << "Masukkan b12: ";
	cin  >> nilaiM2[0][1];
	cout << "Masukkan b13: ";
	cin  >> nilaiM2[0][2];
	cout << "Masukkan b21: ";
	cin  >> nilaiM2[1][0];
	cout << "Masukkan b22: ";
	cin  >> nilaiM2[1][1];
	cout << "Masukkan b23: ";
	cin  >> nilaiM2[1][2];
	cout << "Masukkan b31: ";
	cin  >> nilaiM2[2][0];
	cout << "Masukkan b32: ";
	cin  >> nilaiM2[2][1];
	cout << "Masukkan b33: ";
	cin  >> nilaiM2[2][2];
	cout << endl;
	MatriksB(nilaiM2);
}

	
	system("Pause");
	return 0;
}
