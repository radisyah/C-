#include <iostream>
using namespace std;

double volume_balok( double p = 1,double l = 1,double t =1);

int main()
{
	cout << "volume_balok: " << volume_balok(3,4,5) << endl;
	cout << "volume_balok: " << volume_balok(3,4) << endl;
	cout << "volume_balok: " << volume_balok(3) << endl;
		cout << "volume_balok: " << volume_balok() << endl;
	system("Pause");
	return 0;
}

double volume_balok( double p,double l,double t){
	return p*l*t;
}
