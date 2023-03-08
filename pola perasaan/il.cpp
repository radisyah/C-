#include <iostream>

using namespace std;


int main()
{
	long n = 5;
	long x;
	string list;


	cout << "Masukkan sandi: ";
	cin >> x;
	cout << endl;
	cout << endl;
	
	if ( x == 342002 ){//Awal If
	for ( int i = 1; i <= 5; i++ ){
		for (int y = n; y > (i*0)+3; y--){//I
			cout << " ";
		} 
		for ( int j = 1; j <= (i*0)+1; j++){
			cout << "*";
		}//I
		
		for (int y = n; y > (i*0)+3; y--){//Pembatas1
			cout << " ";
		} 

		for ( int j = 1; j <= (i*0)+1; j++){//L
			cout << "*";
		}
		for ( int z = n; z > (i*0)+1; z-- ){
			if ( i < n ){
				break;
			}
			cout << "*";
		}//L

		for (int y = n; y > (i*0)+1; y--){//Pembatas2
			if ( i == n ){
				break;
			}
			cout << " ";
		} 

		for (int y = n; y > (i*0)+3; y--){//Pembatas3
			cout << " ";
		} 

		for ( int j = 1; j <= (i*0)+(n-1); j++){//O
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
		}//O

		for (int y = n; y > (i*0)+3; y--){//Pembatas4
			cout << " ";
		} 

		for (int y = 1; y < i; y++){
			cout << " ";
		}
		for ( int j = 1; j >= (0*i)+1; j--){
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
			cout << "*";
		}
		for (int y = 1; y < i; y++){
			cout << " ";
		}

		for (int y = n; y > (i*0)+3; y--){//Pembatas5
			cout << " ";
		} 

		for ( int j = 1; j <= (i*0)+1; j++){//E
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
			cout << " ";
		} 
		for (int y = n; y > (i*0)+3; y--){
			if ( i % 2 ){
				break;
			}
			cout << " ";
		} //E


		

		for (int y = 1; y < i; y++){//Y
			cout << " ";
		}
		for ( int j = 1; j >= (0*i)+1; j--){
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
			cout << "*";
		}
		for (int y = 1; y < i; y++){
			cout << " ";
		}//Y

	for (int y = n; y > (i*0)+3; y--){//Pembatas5
			cout << " ";
		} 

		for ( int j = 1; j <= (i*0)+(n-1); j++){//O
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
		}//O

		for (int y = n; y > (i*0)+3; y--){//Pembatas6
			cout << " ";
		} 

	for ( int j = 1; j <= (i*0)+1; j++){//U
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
		}//U
		cout << endl;
	}//akhir

	for ( int i = 1; i <= 5; i++ ){
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
			cout << " ";
		}
		for (int y = n; y >= (i*0)+2; y--){
			if ( i > 3 ){
				break;
			}
			cout << " ";
		} 
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
			cout << " ";
		}
		for (int y = n; y >= (i*0)+2; y--){
			if ( i > 3 ){
				break;
			}
			cout << " ";
		} 
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
			cout << " ";
		}
		for (int y = n; y >= (i*0)+2; y--){
			if ( i > 3 ){
				break;
			}
			cout << " ";
		} 
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
			cout << " ";
		}
		for (int y = n; y >= (i*0)+2; y--){
			if ( i > 3 ){
				break;
			}
			cout << " ";
		} 

		for (int y = n; y >= (i*0)+4; y--){//Jangan 
			if ( i > 3 ){
				break;
			}
			cout << " ";
		} //Jangan
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
			cout << " ";
		} 
		cout << endl;
	}
		do{
			cout << "terima Kaga: y/n";
			cin >> list;
			if (list == "y"){
			cout << "CONGRATSS!!!!!" << endl;
		}
		} while(list == "n");
	
	}//AkhirIF
	else {
		cout << "Maaf sandi salah!!" << endl;
	}

	system ("Pause");
}
