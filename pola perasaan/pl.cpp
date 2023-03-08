#include <iostream>

using namespace std;


int main()
{
	int n;

	cout <<"Masukkan pola ke-n: ";
	cin >> n;

	cout << endl;
	cout << endl;

	// I
	for ( int i = 1; i <= n; i++ ){
		for (int y = n; y > (i*0)+3; y--){
			cout << " ";
		} 
		for ( int j = 1; j <= (i*0)+1; j++){
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;
	
	//L
	for ( int i = 1; i <= n; i++ ){
		for (int y = n; y > (i*0)+3; y--){
			cout << " ";
		} 
		for ( int j = 1; j <= (i*0)+1; j++){
			cout << "*";
		}
		for ( int z = n; z > (i*0)+3; z-- ){
			if ( i < n ){
				break;
			}
			cout << "*";
		}
		cout << endl;

	}

	cout << endl;



	//O	
	for ( int i = 1; i <= n; i++ ){
		for (int y = n; y > (i*0)+3; y--){
			cout << " ";
		} 
		for ( int j = 1; j <= (i*0)+(n-1); j++){
			if ( i > 1){
				break;
			}
			cout << "*";
		}
		for ( int j = 1; j <= (i*0)+1; j++){
			if ( i == 1 ){
				continue;
			}
			cout << "*";
		}
		for (int y = n; y > (i*0)+3; y--){
			if ( i == 1 ){
				continue;
			}
			if ( i < n ){
				break;
			}
			cout << "*";
		} 

		for (int y = n; y > (i*0)+3; y--){
			if ( i == 1 ){
				continue;
			}
			if ( i == n ){
				break;
			}
			cout << " ";
		} 

		for ( int j = 1; j <= (i*0)+1; j++){
			if ( i == 1 ){
				continue;
			}
			cout << "*";
		}
		
		cout << endl;
		
	}

	cout << endl;

	//V
	for (int i = 1; i <= n ; i++){//loopawal
		for (int y = 1; y < i; y++){
			cout << " ";
		}
		for ( int j = 1; j >= (0*i)+1; j--){
			if ( i == 1 ){
				continue;
			}
			cout << "*";
		}
		for ( int j = n-1; j >= i; j--){
			cout << " ";
		}
		for ( int j = n-2; j >= i; j--){
			cout << " ";
		}
		for ( int j = 1; j >= (0*i)+1; j--){
			if ( i == n ){
				break;
			}
			if ( i == 1 ){
				continue;
			}
			cout << "*";
		}

		cout << endl;
	}//loopakhir

	cout << endl;

	//E
	for ( int i = 1; i <= n; i++ ){
		for (int y = n; y > (i*0)+3; y--){
			cout << " ";
		} 
		for ( int j = 1; j <= (i*0)+1; j++){
			cout << "*";
		}
		for ( int z = n; z > (i*0)+3; z-- ){
			if ( i == 2 ){
				break;
			}
			if ( i == n-1 ){
				break;
			}
			cout << "*";
		}
		cout << endl;

	}

	cout << endl;
	cout << endl;

	//Y	
	for (int i = 1; i <= n ; i++){
		for (int y = 1; y < i; y++){
			cout << " ";
		}
		for ( int j = 1; j >= (0*i)+1; j--){
			if ( i == 1 ){
				continue;
			}
			cout << "*";
		}
		for ( int j = n-1; j >= i; j--){
			cout << " ";
		}
		for ( int j = n-2; j >= i; j--){
			cout << " ";
		}
		for ( int j = 1; j >= (0*i)+1; j--){
			if ( i == n ){
				break;
			}
			if ( i == 1 ){
				continue;
			}
			cout << "*";
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
		cout << endl;
	}

	//O
	for ( int i = 1; i <= n; i++ ){
		for (int y = n; y > (i*0)+3; y--){
			cout << " ";
		} 
		for ( int j = 1; j <= (i*0)+(n-1); j++){
			if ( i > 1){
				break;
			}
			cout << "*";
		}
		for ( int j = 1; j <= (i*0)+1; j++){
			if ( i == 1 ){
				continue;
			}
			cout << "*";
		}
		for (int y = n; y > (i*0)+3; y--){
			if ( i == 1 ){
				continue;
			}
			if ( i < n ){
				break;
			}
			cout << "*";
		} 

		for (int y = n; y > (i*0)+3; y--){
			if ( i == 1 ){
				continue;
			}
			if ( i == n ){
				break;
			}
			cout << " ";
		} 

		for ( int j = 1; j <= (i*0)+1; j++){
			if ( i == 1 ){
				continue;
			}
			cout << "*";
		}
		
		cout << endl;
		
	}

	cout << endl;

	//U
	for ( int i = 1; i <= n; i++ ){
		for (int y = n; y > (i*0)+3; y--){
			cout << " ";
		} 
		for ( int j = 1; j <= (i*0)+1; j++){
			cout << "*";
		}
		for ( int z = n; z > (i*0)+2; z-- ){
			if ( i < n ){
				break;
			}
			cout << "*";
		}
		for (int y = n; y > (i*0)+2; y--){
			if ( i == n ){
				break;
			}
			cout << " ";
		} 
		for ( int j = 1; j <= (i*0)+1; j++){
			cout << "*";
		}
		cout << endl;

	}



	
	

	

	

	 




	system ("Pause");
}