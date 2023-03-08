#include <iostream>
#include <string>
using namespace std;

int main()
{

	string kalimat_1("Doni suka melihat pelangi");
	string kalimat_2("Dino tidak sengaja menjatuhkan risa");

	cout << kalimat_1 << endl;
	cout << kalimat_2 << endl;

	//substring mengambil kata dari tengah-tengah
	//substring index,panjang

	cout << endl;

	cout << "Kata di tengah-tengah: " << kalimat_1.sizeof << endl;
	cout << "Kata di tengah-tengah: " << kalimat_2.substr(19,11) << endl;

	//mencari posisi di substring

	cout << endl;

	cout << "Posisi melihat    : ";
	cout << kalimat_1.find("melihat") << endl;

	cout << "Posisi menjatuhkan: ";
	cout << kalimat_2.find("menjatuhkan") << endl;

	cout << endl;

	int a = kalimat_1.find("a");
	cout << "Posisi pertama: "  << a << endl;
	cout << "Posisi kedua  :  " << kalimat_1.find("a", a + 1)  << endl;
	cout << "Posisi ketiga :  " << kalimat_1.find("a", a + a)  << endl;
	

	cout << endl;

	//mencari posisi di substring dari belakang

	int b = kalimat_2.find("a");
	cout << "Posisi pertama: "   << b << endl;
	cout << "Posisi kedua  :  "  << kalimat_2.find("a", b + 1)  << endl;
	cout << "Posisi ketiga :  "  << kalimat_2.find("a", b + b)  << endl;
	cout << "Posisi keempat:  "  << kalimat_2.find("a", b + 2 + b)  << endl;
	
	

	
	

	system("Pause");
	return 0;
}
