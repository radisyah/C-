#include <iostream>
using namespace std;

int main()
{

	//Multidimensi Array tanpa standar library//
	//  array[baris][kolom]
	int arrayMD[3][3] = {1,2,3,4,5,6,7,8,9};

	cout << arrayMD[0][0] << " " << arrayMD[0][1] << " " << arrayMD[0][2] << endl;
	cout << endl;
	cout << arrayMD[1][0] << " " << arrayMD[1][1] << " " << arrayMD[1][2] << endl;
	cout << endl;
	cout << arrayMD[2][0] << " " << arrayMD[2][1] << " " << arrayMD[2][2] << endl;

	system("Pause");
	return 0;
}
