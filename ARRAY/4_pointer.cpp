#include <iostream>
using namespace std;

void printArray( int *ptrArray, int baris, int kolom){
	int index = 0;
	for (int i = 0; i < baris; i++){
		for (int j = 0; j < kolom; j++){
			cout << *(ptrArray + index) << " ";
			index++;
		}
			cout << endl << endl;;
	}
}



int main()
{

	//Multidimensi Array//
	//  array[baris][kolom]
	const int baris = 3;
	const int kolom = 3;
	int arrayMD[3][3] = {1,2,3,4,5,6,7,8,9};

	printArray(*arrayMD, baris, kolom);



	system("Pause");
	return 0;
}
