#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char kalimat[100];
	cout << "Masukkan Kalimat: ";
	cin.getline(kalimat,sizeof(kalimat));

	int x = strlen(kalimat);

	cout << "Kalimat yang dibalik: ";
	for (int i = x - 1; i>=0; i--){
	cout << kalimat[i];
	}

	cout << endl;

	
	
	system("Pause");
	return 0;
}

