#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

const size_t arraySize = 10;

void printArray( array < int, arraySize > &angka ){
	cout << "Angka: ";
		for (int &a : angka){
			cout << a << " ";
		}
		cout << endl;
}

int main()
{

	//search dan sort data array//
	array < int, arraySize > angka = {9,4,2,5,8,0,1,7,6,3};
	

	int angkaCari = 5;

	//sort dulu
	//searchangka
	sort ( angka.begin(), angka.end() );
	printArray(angka);
	
	system("Pause");
	return 0;
}
