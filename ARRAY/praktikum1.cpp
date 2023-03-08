#include <iostream>
#include <algorithm>
#include <array>
#include <map>

using namespace std;

// Deklarasi Array
const size_t arraySize = 10;

// Awal (Kumpulan)Fungsi || Menu 1 Array(Median, Modus, Mean)
void printArray( array < int, arraySize > &angka ){
	cout << "Angka: ";
		for (int &a : angka){
			cout << a << " ";
		}
		cout << endl;
}

double mean(array < int, arraySize > &angka){
	double total = 0;
	for(int &a : angka){
		total += a;
	}
	return total/angka.size();
}

double median(array < int, arraySize > &angka){
	sort ( angka.begin(), angka.end() );
	if(angka.size() % 2 == 0){
		return(angka[angka.size()/2-1]+angka[angka.size()/2])/2.0;
	}else{
		return angka[angka.size()/2];
	}
}

int modus(array < int, arraySize > &angka){
	map<int, int>freq;

	for(int &a : angka){
		freq[a]++;
	}

	int max_freq = 0;
	int modus = 0;
	
	for(auto it : freq){
	if(it.second>max_freq){
		max_freq = it.second;
		modus = it.first;
		}
	}
	return modus;
}
// Akhir (Kumpulan)Fungsi || Menu 1 Array(Median, Modus, Mean)




void v_menu (){
	cout << "-------------------------------" << endl;
	cout << "        Praktikum 1"         << endl;
	cout << "-------------------------------" << endl;
	cout << "1. Array(Median, Mean, Modus)" << endl;
	cout << "2. Invers Matriks "  << endl;
	cout << endl;
	cout << "Masukkan Angka: ";
	
}



int main()
{

	//Inisialisasi Array
	array < int, arraySize > angka = {9,4,2,5,8,0,1,7,6,7};

	// Inisialisasi Matriks
	int a[4][4], b, c;  
	float det, inv[4][4], kov[4][4], adj[4][4];

	int input;

	while(1){
		cout << endl;
		v_menu();
		cin  >> input;
		
		if(input==1){
			cout << endl;
			printArray(angka);
			cout << "Mean: " << mean(angka) << endl;
			sort ( angka.begin(), angka.end() );
			cout << endl;
			printArray(angka);
			cout << "Median: " << median(angka) << endl;
			cout << endl;
			printArray(angka);
			cout << "Modus: " << modus(angka) << endl;
		}else if(input==2){

			cout << "Mencari Determinan Dan Ivers Dari Matriks Berordo 3X3\n";  
			for (b = 1; b <= 3; b++) {  
				for (c = 1; c <= 3; c++) {  
						cout << "Masukkan Angka dari Baris ke " << b << " Kolom ke " << c << " = ";  
						cin >> a[b][c];  
				}  
			}  

			cout << "Matriks A = \n";  
			for (b = 1; b <= 3; b++) {  
				for (c = 1; c <= 3; c++) {  
						cout << a[b][c] << "\t";  
				}  
			cout << endl;  
			} 

			/*Mencari Determinan Dengan Sarrus*/  

			det = ((a[1][1] * a[2][2] * a[3][3]) + (a[1][2] * a[2][3] * a[3][1]) + (a[1][3] * a[2][1] * a[3][2])) - ((a[3][1] * a[2][2] * a[1][3]) + (a[3][2] * a[2][3] * a[1][1]) + (a[3][3] * a[2][1] * a[1][2]));  
			cout << "Determinan Matriks Tersebut = " << det << endl; /*Mencari kofaktor*/  
			kov[1][1] = (a[2][2] * a[3][3]) - (a[3][2] * a[2][3]);  
			kov[1][2] = ((a[2][1] * a[3][3]) - (a[3][1] * a[2][3])) * -1; 
			kov[1][3] = (a[2][1] * a[3][2]) - (a[3][1] * a[2][2]);  
			kov[2][1] = ((a[1][2] * a[3][3]) - (a[3][2] * a[1][3])) * -1;  
			kov[2][2] = (a[1][1] * a[3][3]) - (a[3][1] * a[1][3]);  
			kov[2][3] = ((a[1][1] * a[3][2]) - (a[3][1] * a[1][2])) * -1;  
			kov[3][1] = (a[1][2] * a[2][3]) - (a[2][2] * a[1][3]);  
			kov[3][2] = ((a[1][1] * a[2][3]) - (a[2][1] * a[1][3])) * -1;  
			kov[3][3] = (a[1][1] * a[2][2]) - (a[2][1] * a[1][2]);  
			cout << "Kofaktor A = \n";  
			for (b = 1; b <= 3; b++) {  
				for (c = 1; c <= 3; c++) {  
						cout << kov[b][c] << "\t";  
				}  
			cout << endl;  
			}

			/*Mencari Adjoin*/

			cout << "Adjoin Dari Kofaktor A = \n";  
			for (b = 1; b <= 3; b++) {  
				for (c = 1; c <= 3; c++) {  
							adj[b][c] = kov[c][b];  
							cout << adj[b][c] << "\t";  
					}  
				cout << endl;  
			} 
			
			/*Mencari Invers*/  
			cout << "Invers Dari Matriks A = \n";  
			for (b = 1; b <= 3; b++) {  
				for (c = 1; c <= 3; c++) {  
						inv[b][c] = (1 / det) * adj[b][c];  
						cout << inv[b][c] << "\t";  
				}  
				cout << endl;  
			}  

		}else{
			cout << endl;
			cout << "Input Tidak Tersedia|Terimakasih|" << endl;
			break;
		}
	}

	
	system("Pause");
	return 0;
}
