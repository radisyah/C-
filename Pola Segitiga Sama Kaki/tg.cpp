#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int n;
	int hasil;
	cout << "Membuat Pola Segitiga Sama Kaki" << endl;
	cout << "\nMasukkan Pola ke-n: ";
	cin >> n;

	cout << "Pola ke-1\n" << endl;

	for (int i = 1; i <= n ; i++){//loopawal
		for (int y = 1; y <= i; y++){
			hasil = (i+1)-1;
			cout << hasil;
		}
		cout << endl;
	}//loopakhir

	system("Pause");
}
