#include <iostream>
using namespace std;

//Fungsi Rekursif

long pangkatLiterasi(long a, long b){
	long hasil = a;
		for ( long i = 1 ; i < b; i++ ){
			hasil = hasil * a;
		}
		return hasil;
}

long pangkatRekursif(long a, long b){
	if ( b <= 1 ){
		return a;
	}
	return a * pangkatRekursif( a,( b - 1 ));
}


int main()
{

	long a,b;

	cout << "angka: ";
	cin >> a;
	cout << "pangkat: ";
	cin >> b;
	cout << "hasil dari literasi: " << pangkatLiterasi(a,b) << endl;
	cout << "hasil dari Rekursif: " << pangkatRekursif(a,b) << endl;




	system("Pause");
	return 0;
}
