#include <iostream>
#define ID 1

#if ID == 3
	#define LANG "Indonesian"
#else
	#define LANG "English"
#endif

using namespace std;

int main()
{

	cout << "Bahasa Anda = " << LANG << endl;
	

	system("Pause");
	return 0;
}
