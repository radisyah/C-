#include <iostream>
#include <string>
using namespace std;

int main()
{
	string kalimat_input;

	//getline(cin, nama variabel)
	cout << "Masukkan Kalimat: ";
	getline(cin, kalimat_input);

	cout << "Kalimat Anda    : " << kalimat_input << endl;

	//mencari jumlah kata
	int jumlah = 0;
	int posisi = 0;

	while(true){
	posisi = kalimat_input.find(" ", posisi + 1 );
	jumlah++;
		if (posisi < 0){
			break;
		}
	}

	cout << "Jumlah Kata     : " << jumlah << endl;


	system("Pause");
	return 0;
}
