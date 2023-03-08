#include <iostream>
using namespace std;

//Belajar scoping
int x_localjauh(){
	int x = 99;
	return x;
}

int x = 10; // variabel global

int ambil_global(){
	return x;
}

int x_local(){
	int x = 5;
	return x;
}

int main()
{
	cout << "1. Variabel global: " << x << endl;
	int x = 8;
	cout << "2.Variabel local main: " << x << endl;
	cout << "3.Variabel ambil_global: " << ambil_global() << endl;
	cout << "4. Variabel x_local: " << x_local() << endl;
	cout << "5. Variabel local main: " << x << endl;
	{
		//block scope
		cout << "6.Variabel local main: " << x << endl;
		int x = 9;
		cout << "7. Variabel local block: " << x << endl;
		cout << "8.Variabel ambil_global: " << ambil_global() << endl;
		cout << "9. Variabel x_local: " << x_local() << endl;
	}
	cout << "10.Variabel local main: " << x << endl;
	cout << "11.Variabel local jauh: " << ::x << endl;




	system("Pause");
	return 0;
}
