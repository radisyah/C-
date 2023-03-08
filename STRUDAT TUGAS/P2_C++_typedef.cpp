#include <iostream>
using namespace std;

int main(){

  typedef int angka;
  typedef float pecahan;
  typedef char huruf;

  angka umur;
  pecahan pecah;
  huruf h;
  huruf nama[10];

  cout << "masukkan umur anda: ";
  cin >> umur;
  cout << "umur anda adalah " << umur << endl;

  cout << "masukkan bilangan pecahan: "; 
  cin >> pecah;
  cout << "Bilangan pecahan " << pecah << endl;

  cout << "masukkan huruf: "; 
  h = getchar();
  cin >> h;
  cout << "Huruf anda: " << h << endl;

  cout << "masukkan nama: ";
  cin >> nama;
  cout << "Nama anda " << nama << endl;


	return 0;
}
