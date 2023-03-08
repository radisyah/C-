#include <iostream>
#include <array>
using namespace std;

const int baris = 3;
const int kolom = 3;

void printArray( array < array < int,kolom > , baris > &nilaiArray){
	for ( array  < int,kolom > vektorBaris : nilaiArray ){
		for ( int nilaiKolom : vektorBaris){
			cout << nilaiKolom << " ";
		}
		cout << endl << endl;
	}
}

int main()
{

	//Mutltidimensi Array dengan standar library//

	
	array < array < int,kolom > , baris > nilaiMD;

	printArray(nilaiMD);
	system("Pause");
	return 0;
}
