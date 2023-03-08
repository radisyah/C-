#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	string nama_rahasia("tyas");

	while(true){
		cout << "tebak nama yang saya cintai: ";
		cin  >> input;

		if (input == nama_rahasia){
		cout << "tebakan anda benar!!!" << endl;
		break;
		}
		cout << "tebakan anda salah!!!" << endl;
	}


	system("Pause");
	return 0;
}
