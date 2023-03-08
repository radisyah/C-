#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{

	fstream myFile;
	int hasil;
	myFile.open("dataku.bin", ios::in | ios::binary);
	myFile.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));


	cout << "Besar int: " << sizeof(hasil) << endl;
	cout << hasil << endl;

	
	

	system("Pause");
	return 0;
}

	/*
	
	fstream myFile;
	int number = 123456;
	
	myFile.open("dataku.bin", ios::out | ios::binary);
	myFile.write(reinterpret_cast<char*>(&number), sizeof(number));
	myFile.close(); 

	

	
*/

	