#include <iostream>
using namespace std;

  int fPangkat(int *angka, int *pangkat){
    if (*pangkat == 0){
      return 1;
    }else{
      return fPangkat(angka, pangkat - 1)**angka;
    }
  }

int main(){

  int angka;
  int pangkat;
  int nilai;

  cout << "Masukkan angka = ";
  cin >> angka;
  cout << "Masukkan pangkat = ";
  cin >> pangkat;

  nilai = fPangkat(&angka, &pangkat);

  cout << "hasil = " << nilai << endl;
  return 0;
}
