#include <iostream>
using namespace std;

int main(){

  // rumus: Fn = F(n-1) + F(n-2)
  // deret fibonacci : 0,1,1,2,3,5,8, dst.
  int n, Fn, Fn_min_1, Fn_min_2;

  cout << "---------------------------" << endl;
  cout << "Program C++ Deret Fibonacci" << endl;
  cout << "---------------------------" << endl << endl;

  cout << "Berapa jumlah deret ? ";
  cin >> n;
  cout << endl << endl;
  cout << " Fibonacci " << n << " deret : " << endl << endl;

  // devinisi value dari variabel
  Fn_min_1 = 1;
  Fn_min_2 = 0;

  // perulangan sebanyak jumlah deret
  for (int i = 1; i<n; i++){
    if (i == 1 ) cout << Fn_min_2 << " ";
    if (i == 2 ) cout << Fn_min_1 << " ";
    else {
      Fn = Fn_min_1 + Fn_min_2;
      Fn_min_2 = Fn_min_1;
      Fn_min_1 = Fn;
      cout << Fn << " ";
    }
  }

  cout << endl << endl;
  return 0;
  system("pause");
}
