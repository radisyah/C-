#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int n;
	cout << "Membuat Pola Segitiga Sama Kaki" << endl;
	cout << "\nMasukkan Pola ke-n: ";
	cin >> n;

	cout << "Pola ke-1\n" << endl;

	for (int i = 1; i <= n ; i++){//loopawal
		for (int y = 1; y <= i; y++){
			cout << "*";
		}
		cout << endl;
	}//loopakhir

		cout << "Pola ke-2\n" << endl;

	for (int i = 1; i <= n ; i++){//loopawal
		for (int y = n; y >= i; y--){
			cout << "*";
		}
		cout << endl;
	}//loopakhir

cout << "Pola ke-3\n" << endl;

	for (int i = 1; i <= n ; i++){//loopawal
		for (int y = 1; y < i; y++){
			cout << "*";
		}
		for ( int j = n; j >= i; j--){
			cout << "#";
		}
		cout << endl;
	}//loopakhir

	cout << "Pola ke-4\n" << endl;

	for (int i = 1; i <= n ; i++){//loopawal
		for (int y = n; y > i; y--){
			cout << "*";
		} 
		for ( int j = 1; j <= i; j++){
			cout << "#";
		}
		cout << endl;
	}//loopakhir

	cout << "Pola ke-5\n" << endl;

	for (int i = 1; i <= n ; i++){//loopawal
		for (int y = n; y > i; y--){
			cout << " ";
		} 
		for ( int j = 1; j <= (2*i-1); j++){
			cout << "*";
		}
		cout << endl;
	}//loopakhir

	cout << "Pola ke-6\n" << endl;

	for (int i = 1; i <= n ; i++){//loopawal
		for (int y = 1; y < i; y++){
			cout << " ";
		}
		for ( int j = n; j >= (2*i-n); j--){
			cout << "*";
		}
		cout << endl;
	}//loopakhir

	cout << "Pola ke-7\n" << endl;

	for (int i = 1; i <= n ; i++){//loopawal
		for (int y = n; y > i; y--){
			cout << " ";
		} 
		for ( int j = 1; j <= (2*i-1); j++){
			cout << "*";
		}
		cout << endl;
	}//loopakhir
	

	for (int i = 2; i <= n ; i++){//loopawal
		for (int y = 1; y < i; y++){
			cout << " ";
		}
		for ( int j = n; j >= (2*i-n); j--){
			cout << "*";
		}
		cout << endl;
	}//loopakhir

	


	


	system("Pause");
}
