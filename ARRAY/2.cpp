#include <iostream>
#include <array.c>

using namespace std;

int main()
{
	/*Membuat array dengan standar library
	 array < tipedata, nilai array > nama array */

	array < int, 5 > nilai;

	for ( int i = 0; i <= 4; i++ ){
		nilai[i] = i;
		cout << "nilai ke [ " << i << " ] adalah " << nilai[i] << " addres: " << &nilai[i] << endl;
	}

	cout << "ukuran " << nilai.size() << endl;
	cout << "address awal " << nilai.begin() << endl;
	cout << "address akhir " << nilai.end() << endl;
	cout << "nilai ke 4: " << nilai.at(4) << endl;
	system("Pause");
	return 0;
}
