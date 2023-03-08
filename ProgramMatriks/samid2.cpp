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
	cout << "  Program Operasi Matriks 3x3  "<< endl;
	cout << "-------------------------------"<< endl;
	cout << endl;
	cout << "Masukkan elemen matriks ke-1 "  << endl;
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
	cout << "-------------------------------"<< endl;
	cout << endl;
	cout << "Masukkan elemen matriks ke-2 "  << endl;
	cout << endl;
	cout << "Masukkan a11: ";
	cin  >> b11;
	cout << "Masukkan a21: ";
	cin  >> b21;
	cout << "Masukkan a31: ";
	cin  >> b31;
	cout << "Masukkan a12: ";
	cin  >> b12;
	cout << "Masukkan a22: ";
	cin  >> b22;
	cout << "Masukkan a32: ";
	cin  >> b32;
	cout << "Masukkan a13: ";
	cin  >> b13;
	cout << "Masukkan a23: ";
	cin  >> b23;
	cout << "Masukkan a33: ";
	cin  >> b33;
	cout << endl;

	for ( int i = 1; i <= 3; i++){
		for (int y = 5; y > (i*0)+4; y--){
			if ( i == 1){
				cout << b11;
			}
			if ( i == 2){
				cout << b21;
			}
			if ( i == 3){
				cout << b31;
			}
		} 
		for (int a = 5; a > (i*0)+4; a--){
			if ( i == 1){
				cout << " " << b12;
			}
			if ( i == 2){
				cout << " " << b22;
			}
			if ( i == 3){
				cout << " " <<b32;
			}
		}
		for (int b = 5; b > (i*0)+4; b--){
			if ( i == 1){
				cout << " " << b13;
			}
			if ( i == 2){
				cout << " " << b23;
			}
			if ( i == 3){
				cout << " " << b33;
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
	c13 = a13 + b13;
	c21 = a21 + b21;
	c22 = a22 + b22;
	c23 = a23 + b23;
	c31 = a31 + b31; 
	c32 = a32 + b32; 
	c33 = a33 + b33;  
	cout << endl;
	
	for ( int i = 1; i <= 3; i++){
		for (int y = 5; y > (i*0)+4; y--){
			if ( i == 1){
				cout << c11;
			}
			if ( i == 2){
				cout << c21;
			}
			if ( i == 3){
				cout << c31;
			}
		} 
		for (int a = 5; a > (i*0)+4; a--){
			if ( i == 1){
				cout << " " << c12;
			}
			if ( i == 2){
				cout << " " << c22;
			}
			if ( i == 3){
				cout << " " << c32;
			}
		}
		for (int b = 5; b > (i*0)+4; b--){
			if ( i == 1){
				cout << " " << c13;
			}
			if ( i == 2){
				cout << " " << c23;
			}
			if ( i == 3){
				cout << " " << c33;
			}
		}		
		cout << endl << endl;		
	  }
	cout << "-------------------------------"<< endl;
	}

	if (s==2){

	c11 = (a11*b11)+(a12*b21)+(a13*b31);
	c12 = (a11*b12)+(a12*b22)+(a13*b32);
	c13 = (a11*b13)+(a12*b23)+(a13*b33);
	c21 = (a21*b11)+(a22*b21)+(a23*b31);
	c22 = (a21*b12)+(a22*b22)+(a23*b32);
	c23 = (a21*b13)+(a22*b23)+(a23*b33);
	c31 = (a31*b11)+(a32*b21)+(a33*b31); 
	c32 = (a31*b12)+(a32*b22)+(a33*b32); 
	c33 = (a31*b13)+(a32*b23)+(a33*b33);  
	cout << endl;	

	for ( int i = 1; i <= 3; i++){
		for (int y = 5; y > (i*0)+4; y--){
			if ( i == 1){
				cout << c11;
			}
			if ( i == 2){
				cout << c21;
			}
			if ( i == 3){
				cout << c31;
			}
		} 
		for (int a = 5; a > (i*0)+4; a--){
			if ( i == 1){
				cout << " " << c12;
			}
			if ( i == 2){
				cout << " " << c22;
			}
			if ( i == 3){
				cout << " " << c32;
			}
		}
		for (int b = 5; b > (i*0)+4; b--){
			if ( i == 1){
				cout << " " << c13;
			}
			if ( i == 2){
				cout << " " << c23;
			}
			if ( i == 3){
				cout << " " << c33;
			}
		}		
		cout << endl << endl;		
	  }
	cout << "-------------------------------"<< endl;
	
	}


	
	system("Pause");
}



