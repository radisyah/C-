#include <iostream>
#include <array>
using namespace std;

int main()
{

	array < int, 10 > nilai = {0,1,2,3,4,5,6,7,8,9};
	array < int, 10 > nilai2 = {0,1,2,3,4,5,6,7,8,9};

	cout << "Program Menampilkan Grafik Nilai" << endl << endl;

	for ( int i : nilai ){
		cout << "Jumlah mahasiswa dengan nilai ";
		if ( i == 0 ){
			cout << "0-9  : ";
		}
		else
		if ( i == 9 ){
			cout << "100  : ";
		}
		else {
			cout << i * 10 << "-" << (i*10) + 9 << ": ";
		}
		cin >> nilai[i];
	}

	cout << endl << endl;

	cout << "Grafik Nilai" << endl << endl;


	for ( int i : nilai2 ){
		cout << "Jumlah mahasiswa dengan nilai ";
		if ( i == 0 ){
			cout << "0-9  : ";
		}
		else
		if ( i == 9 ){
			cout << "100  : ";
		}
		else {
			cout << i * 10 << "-" << (i*10) + 9 << ": ";
		}
		for ( int bintang = 0; bintang < nilai[i]; bintang++){
		cout << "*";
		}
		cout << endl;
	}


	
	system("Pause");
	return 0;
}
