#include <iostream>
using namespace std;

union nama{
	int int_value;
	char char_value[4];
};

int main()
{
	nama contoh;
	contoh.int_value = 1234567;

	cout << "data int : " << contoh.int_value << endl;
	cout << "data char: " << contoh.char_value << endl;

	cout << endl;

	contoh.char_value[0] = 't';
	contoh.char_value[1] = 'y';
	contoh.char_value[2] = 'a';
	contoh.char_value[3] = 's';

	cout << "data int : " << contoh.int_value << endl;
	cout << "data char: " << contoh.char_value << endl;


	system("Pause");
	return 0;
}
