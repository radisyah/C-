#include <iostream>
#include <string>
using namespace std;

int main()
{
	string kata("Mobil");

	//menampilkan data string
	cout << kata << endl;

	//mengambil karakter berdasarkan index
	cout << "index ke 0: " << kata[0] << endl;
	cout << "index ke 1: " << kata[1] << endl;
	cout << "index ke 2: " << kata[2] << endl;
	cout << "index ke 3: " << kata[3] << endl;
	cout << "index ke 4: " << kata[4] << endl;

	// menyambung, concatenation
	string kata2(kata + " Avanza");
	cout << kata2 << endl;

	string kata3("Murah-Murah");
	kata2.append(" " + kata3 );
	cout << kata2 << endl;

	string kata4("ihiyy");
	kata2 += " " + kata4;
	cout << kata2 << endl;

	system("Pause");
	return 0;
}
