#include <iostream>
using namespace std;

long int faktorial (int A);

int main(){
  int r, hasil;

  cout << "Menghitung nilai faktorial dengan rekursif" << endl;
  cout << endl;
  cout << "Masukkan nilai: ";
  cin >> r;

  hasil = faktorial(r);
  cout << "Faktorial" << r << "!= " << hasil << endl;
  return 0;

}

long int faktorial (int A){
    if ( A == 1 )
      return(A);
    else
      return (A*faktorial(A-1));
  }