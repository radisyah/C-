#include <iostream>

using namespace std;

int main()
{

	for( int i = 1; i <= 10; i++){
		if ( i == 2 )
			//break;
			continue;
		cout << i << endl;
	}

	cout << "\nAkhir" << endl;

	system("Pause");
}
