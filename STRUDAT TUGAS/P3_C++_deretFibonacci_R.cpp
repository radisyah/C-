#include <iostream>
using namespace std;

int F(int n){
  if(n==0 || n==1) {
    return n;
  }
  else{
    return F(n-1) + F(n+2); //rekursif
  }
}

int main(){
  // rumus : Fn = F(n-1) + F(n-2)
  // deret fibonacci: 0,1,1,2,3,5, dst.

  int n;
  cout << "----------------------------"<< endl << endl;
  cout << "Program C++ Deret Fibonacci" << endl << endl;
  cout << "      Fungsi Rekursif      " << endl;
  cout << "----------------------------"<< endl << endl;
  cout << " Berapa Jumlah Deret ? "; 
  cin >> n;
  cout << endl << endl;
  cout << " Fibonacci " << n << " deret : " << endl << endl;
  cout << " ";

  // Perulangan untuk memanggil fungsi F sebanyak n
  for (int i = 0; i < n; i++){
    cout << F(i) << " ";
  }

  cout << endl << endl << endl;
  cout << "----------------" << endl << endl;
  return 0;


}