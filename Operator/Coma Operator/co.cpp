#include <iostream>
#include <string>
using namespace std;

void print(int val){
	cout << val << endl;
}

int main()
{

	int a;
	int b;
	int c;

	a = (b=1,print(b),c=2,print(c), (b+c));
	cout << a << endl;





	system("Pause");
	return 0;
}
