#include <iostream>
#include <string>
using namespace std;

int main()
{

	string kalimat_1("Aku Suka kamu tapi kamu suka dia");
	string kalimat_2("Dia suka aku tapi aku suka dia");

	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl;

	cout << endl;

	//swap kalimat

	kalimat_1.swap(kalimat_2);
	cout << "Swap String" << endl;
	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl;

	cout << endl;

	//replace string

	kalimat_2.replace(0,3,"Dimas");
	kalimat_2.replace(kalimat_2.find("kamu"),4,"Tyas");
	kalimat_2.replace(21,4,"Tyas");
	kalimat_2.replace(kalimat_2.find("dia"),3,"Putu");

	cout << "Replace String" << endl;
	cout << kalimat_2 << endl;

	cout << endl;

	//insert string

	kalimat_1.insert(3," (tyas)");
	cout << "Insert String" << endl;
	cout << kalimat_1 << endl;

	system("Pause");
	return 0;
}

