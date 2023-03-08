#include <iostream>
using namespace std;

int main()
{
	
	
	for ( int i = 1; i <= 3; i++){
		for (int y = 5; y > (i*0)+3; y--){
			cout << " ";
		} 
		for (int y = 5; y > (i*0)+4;y--){
			cout << "*";
		} 
		for (int y = 5; y > (i*0)+3; y--){
			if (i > 3){
				break;
			}
			if (i == 2){
				break;
			}
			cout << "*";
		} 
		cout << endl;
		
	}
	

	cout << endl;
	system("Pause");
}
