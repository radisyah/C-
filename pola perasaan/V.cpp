#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	cout <<"Masukkan pola ke-n: ";
	cin >> n;

	cout << endl;
	cout << endl;




	//Y	
	for (int i = 1; i <= n ; i++){
		for (int y = 1; y < i; y++){
			cout << "+";
		}
		for ( int j = 1; j >= (0*i)+1; j--){
			cout << "*";
		}
		for ( int j = n-1; j >= i; j--){
			cout << "+";
		}
		for ( int j = n-2; j >= i; j--){
			cout << "+";
		}
		for ( int j = 1; j >= (0*i)+1; j--){
			if ( i == n ){
				break;
			}
			cout << "*";
		}
		for (int y = 1; y < i; y++){
			cout << "+";
		}

		cout << endl;
		}

		// Y
	for ( int i = 1; i <= n; i++ ){
		for (int y = n; y >= (i*0)+2; y--){
			if ( i > 3 ){
				break;
			}
			cout << " ";
		} 
		for ( int j = 1; j <= (i*0)+1; j++){
			if ( i > 3 ){
				break;
			}
			cout << "*";
		}
		for (int y = n; y >= (i*0)+2; y--){
			if ( i > 3 ){
				break;
			}
			cout << "+";
		} 
		cout << endl;
	}
	system("Pause");
}
