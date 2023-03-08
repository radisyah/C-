#include <iostream>
#include <array>
using namespace std;

int main()
{

	//Mutltidimensi Array dengan standar library//

	const int baris = 3;
	const int kolom = 3;
	array < array < int,kolom > , baris > nilaiMD = {1,2,3,4,5,6,7,8,9};

	cout << nilaiMD[0][0] << " " << nilaiMD[0][1] << " " << nilaiMD[0][2] << endl;
	cout << endl;
	cout << nilaiMD[1][0] << " " << nilaiMD[1][1] << " " << nilaiMD[1][2] << endl;
	cout << endl;
	cout << nilaiMD[2][0] << " " << nilaiMD[2][1] << " " << nilaiMD[2][2] << endl;

	system("Pause");
	return 0;
}
