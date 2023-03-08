#include <iostream>
using namespace std;

void matriks3x3 (int &);

int main()
{
	int x,ordo;
	cout << "-------------------------------" << endl;
	cout << "    Program Operasi Matriks "    << endl;
	cout << "-------------------------------" << endl;
	cout << " Masukkan jumlah matriks yang "  << endl;
	cout << " ingin dihitung: ";
	cin  >> x;

	for ( int s = 1; s <= x; s++){
	int ordo,jumlah;
	char nama;
	cout << endl;
	cout << " Masukkan nama dari matriks ke- " << s << ": ";
	cin  >> nama;
		
	cout << endl;
	cout << " Masukkan elemen matriks" << " " << nama;
	cout << " yang berordo : ";
	cin  >> ordo;
		
		if (ordo == 33){
		matriks3x3(ordo);
		}
	
	}

	matriks3x3(ordo);

	cout << endl;
	system("Pause");
}

void matriks3x3 (int &matriks3x3){
	int a11,a12,a13,a21,a22,a23,a31,a32,a33;
	cout << "-------------------------------" << endl;
	cout << "       Matriks ordo 3x3"         << endl;
	cout << "-------------------------------" << endl;
	cout << endl;
	cout << "Masukkan a11: ";
	cin  >> a11;
	cout << "Masukkan a21: ";
	cin  >> a21;
	cout << "Masukkan a31: ";
	cin  >> a31;
	cout << "Masukkan a12: ";
	cin  >> a12;
	cout << "Masukkan a22: ";
	cin  >> a22;
	cout << "Masukkan a32: ";
	cin  >> a32;
	cout << "Masukkan a13: ";
	cin  >> a13;
	cout << "Masukkan a23: ";
	cin  >> a23;
	cout << "Masukkan a33: ";
	cin  >> a33;
	
	cout << endl;
	
	for ( int i = 1; i <= 3; i++){
		
		for (int y = 5; y > (i*0)+4; y--){
			if ( i == 1){
				cout << a11;
			}
			if ( i == 2){
				cout << a21;
			}
			if ( i == 3){
				cout << a31;
			}
		} 

		for (int a = 5; a > (i*0)+4; a--){
			if ( i == 1){
				cout << " " << a12;
			}
			if ( i == 2){
				cout << " " << a22;
			}
			if ( i == 3){
				cout << " " <<a32;
			}
		}

		for (int b = 5; b > (i*0)+4; b--){
			if ( i == 1){
				cout << " " << a13;
			}
			if ( i == 2){
				cout << " " << a23;
			}
			if ( i == 3){
				cout << " " << a33;
			}
		}		
		cout << endl << endl;		
	}
}
