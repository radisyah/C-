#include <iostream>
#include <string.h>
using namespace std;

int main(){
 
 char kata[100];
 cout<<"Masukan kata :"; 
 cin.getline (kata , sizeof (kata) );

 int x = strlen(kata);
 
 cout << "kata anda: " << kata << x << endl;

 system("Pause");
 return 0;
}