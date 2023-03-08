#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

	int n;

	cout <<"Masukkan pola ke-n: ";
	cin >> n;

	cout << endl;
	cout << endl;


	for ( int i = 1; i <= n; i++ ){
		for (int y = n; y > (i*0)+3; y--){
			cout << " ";
		} 
		for ( int j = 1; j <= (i*0)+1; j++){
			cout << "*";
		}
		for (int y = n; y > (i*0)+3; y--){
			if ( i == 2 ){
				break;
			}
			if ( i == n-1 ){
				break;
			}
			cout << "*";
		} 
		for (int y = n; y > (i*0)+3; y--){
			cout << "+";
		} 
		for (int y = n; y > (i*0)+3; y--){
			if ( i % 2 ){
				break;
			}
			cout << "+";
		} 
		cout << endl;
		}



	
	system ("Pause");
}