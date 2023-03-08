#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	ofstream myFile;

	//ios::out = default, operasi output;
	//ios::app = menuliskan pada akhir baris;
	//ios::trunc = default, membuat file jika tidak ada dan kalau ada akan dihapus;

	myFile.open("data1.txt", ios::out);
	myFile << "penulisan pada data1";
	myFile.close();

	myFile.open("data2.txt", ios::app);
	myFile << "\npindah baris baru";
	myFile.close();

	myFile.open("data3.txt", ios::trunc);
	myFile << "pindah baris baru";
	myFile.close();




	system("Pause");
	return 0;
}
