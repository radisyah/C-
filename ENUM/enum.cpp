#include <iostream>
#include <string>
using namespace std;

enum warna {merah,kuning,hijau,jingga,biru,nila,ungu};

int main()
{
	warna pelangi;

	pelangi = merah;

	if (pelangi == kuning){
		cout << "Warna pertama adalah merah" << endl;
	}

	cout << pelangi << endl;
	system("Pause");
	return 0;
}
