#include <iostream>
using namespace std;

int main()
{
	int a11,a12,a13,a21,a22,a23,a31,a32,a33;
	int b11,b12,b13,b21,b22,b23,b31,b32,b33;
	int s;
	int c11,c12,c13,c21,c22,c23,c31,c32,c33;
	int ke1,ke2,jumlah;

	cout << "-------------------------------"<< endl;
	cout << "  Program Operasi Matriks 2x2  "<< endl;
	cout << "-------------------------------"<< endl;
	cout << endl;
	cout << "Masukkan elemen matriks ke-1 "  << endl;
	cout << endl;
	cout << "Masukkan a11: ";
	cin  >> a11;
	cout << "Masukkan a21: ";
	cin  >> a21;
	cout << "Masukkan a12: ";
	cin  >> a12;
	cout << "Masukkan a22: ";
	cin  >> a22;
	cout << endl;

	for ( int i = 1; i <= 2; i++){
		for (int y = 5; y > (i*0)+4; y--){
			if ( i == 1){
				cout << a11;
			}
			if ( i == 2){
				cout << a21;
			}
		}
		for (int a = 5; a > (i*0)+4; a--){
			if ( i == 1){
				cout << " " << a12;
			}
			if ( i == 2){
				cout << " " << a22;
			}
		}
	cout << endl << endl;	
	}

	cout << "-------------------------------"<< endl;
	cout << endl;
	cout << "Masukkan elemen matriks ke-2 "  << endl;
	cout << endl;
	cout << "Masukkan a11: ";
	cin  >> b11;
	cout << "Masukkan a21: ";
	cin  >> b21;
	cout << "Masukkan a12: ";
	cin  >> b12;
	cout << "Masukkan a22: ";
	cin  >> b22;
	cout << endl;

	for ( int i = 1; i <= 2; i++){
		for (int y = 5; y > (i*0)+4; y--){
			if ( i == 1){
				cout << b11;
			}
			if ( i == 2){
				cout << b21;
			}
		}
		for (int a = 5; a > (i*0)+4; a--){
			if ( i == 1){
				cout << " " << b12;
			}
			if ( i == 2){
				cout << " " << b22;
			}
		}
	cout << endl << endl;	
	}
	cout << "-------------------------------"<< endl;
	cout << endl;
	cout << "Ketik 1 untuk Menjumlahkan" << endl;
	cout << "Ketik 2 untuk Mengalikan"   << endl;
	cout << endl;
	cout << "Masukkan Angka : ";
	cin  >> s;

	if (s==1){
	c11 = a11 + b11;
	c12 = a12 + b12;
	c21 = a21 + b21;
	c22 = a22 + b22;
	cout << endl;

	for ( int i = 1; i <= 3; i++){
		for (int s = 5; s > (i*0)+3; s--){
			cout << " ";
		}
		for (int y = 5; y > (i*0)+4; y--){
			if ( i == 1){
				cout << a11;
			}
			if ( i == 2){
				cout << " ";
			}
			if ( i == 3){
				cout << a21;
			}
		}
		for (int s = 5; s > (i*0)+4; s--){
			cout << " ";
		}
		for (int a = 5; a > (i*0)+4; a--){
			if ( i == 1){
				cout << a12;
			}
			if ( i == 2){
				cout << " ";
			}
			if ( i == 3){
				cout << a22;
			}
		}
		for (int s = 5; s > (i*0)+4; s--){
			cout << " ";
		}
		for (int s = 5; s > (i*0)+4; s--){
			if ( i == 1){
				break;
			}
			if ( i == 2){
				cout << "+";
			}
			if ( i == 3){
				break;
			}
		}

//------------------------BATAS------------------------//
		for (int s = 5; s > (i*0)+4; s--){
			if ( i == 2){
				break;
			}
			cout << " ";
		}
		for (int s = 5; s > (i*0)+4; s--){
			cout << " ";
		}
		for (int y = 5; y > (i*0)+4; y--){
			if ( i == 1){
				cout << b11;
			}
			if ( i == 2){
				cout << " ";
			}
			if ( i == 3){
				cout << b21;
			}
		}
		for (int s = 5; s > (i*0)+4; s--){
			cout << " ";
		}
		for (int a = 5; a > (i*0)+4; a--){
			if ( i == 1){
				cout << b12;
			}
			if ( i == 2){
				cout << " ";
			}
			if ( i == 3){
				cout << b22;
			}
		}
		for (int s = 5; s > (i*0)+4; s--){
			cout << " ";
		}
		for (int s = 5; s > (i*0)+4; s--){
			if ( i == 1){
				break;
			}
			if ( i == 2){
				cout << "=";
			}
			if ( i == 3){
				break;
			}
		}
//-----------------------BATAS------------------------//
		for (int s = 5; s > (i*0)+4; s--){
			if ( i == 2){
				break;
			}
			cout << " ";
		}
		for (int s = 5; s > (i*0)+4; s--){
			cout << " ";
		}
		for (int y = 5; y > (i*0)+4; y--){
			if ( i == 1){
				cout << c11;
			}
			if ( i == 2){
				cout << " ";
			}
			if ( i == 3){
				cout << c21;
			}
		}
		for (int s = 5; s > (i*0)+4; s--){
			cout << " ";
		}
		for (int a = 5; a > (i*0)+4; a--){
			if ( i == 1){
				cout << c12;
			}
			if ( i == 2){
				cout << " ";
			}
			if ( i == 3){
				cout << c22;
			}
		}
	cout << endl;	
	}
	cout << "-------------------------------"<< endl;
}

	if (s==2){
	c11 = (a11*b11)+(a12*b21);
	c12 = (a11*b12)+(a12*b22);
	c21 = (a21*b11)+(a22*b21);
	c22 = (a21*b12)+(a22*b22);
	cout << endl;

	for ( int i = 1; i <= 3; i++){
		for (int s = 5; s > (i*0)+3; s--){
			cout << " ";
		}
		for (int y = 5; y > (i*0)+4; y--){
			if ( i == 1){
				cout << a11;
			}
			if ( i == 2){
				cout << " ";
			}
			if ( i == 3){
				cout << a21;
			}
		}
		for (int s = 5; s > (i*0)+4; s--){
			cout << " ";
		}
		for (int a = 5; a > (i*0)+4; a--){
			if ( i == 1){
				cout << a12;
			}
			if ( i == 2){
				cout << " ";
			}
			if ( i == 3){
				cout << a22;
			}
		}
		for (int s = 5; s > (i*0)+4; s--){
			cout << " ";
		}
		for (int s = 5; s > (i*0)+4; s--){
			if ( i == 1){
				break;
			}
			if ( i == 2){
				cout << "x";
			}
			if ( i == 3){
				break;
			}
		}

//------------------------BATAS------------------------//
		for (int s = 5; s > (i*0)+4; s--){
			if ( i == 2){
				break;
			}
			cout << " ";
		}
		for (int s = 5; s > (i*0)+4; s--){
			cout << " ";
		}
		for (int y = 5; y > (i*0)+4; y--){
			if ( i == 1){
				cout << b11;
			}
			if ( i == 2){
				cout << " ";
			}
			if ( i == 3){
				cout << b21;
			}
		}
		for (int s = 5; s > (i*0)+4; s--){
			cout << " ";
		}
		for (int a = 5; a > (i*0)+4; a--){
			if ( i == 1){
				cout << b12;
			}
			if ( i == 2){
				cout << " ";
			}
			if ( i == 3){
				cout << b22;
			}
		}
		for (int s = 5; s > (i*0)+4; s--){
			cout << " ";
		}
		for (int s = 5; s > (i*0)+4; s--){
			if ( i == 1){
				break;
			}
			if ( i == 2){
				cout << "=";
			}
			if ( i == 3){
				break;
			}
		}
//-----------------------BATAS------------------------//
		for (int s = 5; s > (i*0)+4; s--){
			if ( i == 2){
				break;
			}
			cout << " ";
		}
		for (int s = 5; s > (i*0)+4; s--){
			cout << " ";
		}
		for (int y = 5; y > (i*0)+4; y--){
			if ( i == 1){
				cout << c11;
			}
			if ( i == 2){
				cout << " ";
			}
			if ( i == 3){
				cout << c21;
			}
		}
		for (int s = 5; s > (i*0)+4; s--){
			cout << " ";
		}
		for (int a = 5; a > (i*0)+4; a--){
			if ( i == 1){
				cout << c12;
			}
			if ( i == 2){
				cout << " ";
			}
			if ( i == 3){
				cout << c22;
			}
		}
	cout << endl;	
	}
	cout << "-------------------------------"<< endl;
}

	system("Pause");
	return 0;
}
