#include <iostream>

using namespace std;

int main()
{
	int n;
	int hasil;
	
	cout << "Nama : " << "Rahmat Dimas Syah Putra" << endl;
	cout << "Kelas: " << "C" << endl;
	cout << "NPM  : " << "20081010113" << endl;

	cout << "\nTugas UTS" << endl;
	cout << "\nFor Looping" << endl;
	cout << "Masukkan baris ke-n: ";
 	cin >> n;

 	for ( int i = 1; i <= n; i++){//Loopawal
 		for ( int y = 1; y <= i; y++ ){
 			hasil = (i+1)-1;
 			cout << hasil;
 		}
 		cout << endl;
 	}//Loopakhir


	system("Pause");
}
