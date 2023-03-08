#include <iostream>
using namespace std;

//overloading = menimpa

int luas( int p, int l ){
	int luas = p * l;
	return luas;
}

int luas ( int s ){
	int sisi = s * s;
	return sisi;
}

double luas ( double s ){
	double sisi = s * s;
	return sisi;
}

double luas( double p, double l ){
	double luas = p * l;
	return luas;
}


int main()
{
	cout << "luas 2x3: " << luas(2,3) << endl;
	cout << "luas 2x2: " << luas(2) << endl;
	cout << "luas desimal: " << luas(2.5) << endl;
	cout << "luas desimal: " << luas(2.5,2.3) << endl;



	system("Pause");
	return 0;
}
