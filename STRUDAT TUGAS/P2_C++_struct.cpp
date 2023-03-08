#include <iostream>
using namespace std;

int main(){

  struct mahasiswa{
    char nim[10];
    char nama[10];
    int nilai;
  }mhs[10];
 
  int n = 0;

  cout << "masukkan jumlah data: ";
  cin >> n;

  cout << endl;
  cout << "-----------------------" << endl;

  for (i=1; i<=n; i++){
    cout << "nim: ";
    cin >> mhs[i].nim;
    cout << "nama: ";
    cin >> mhs[i].nama;
    cout << "nilai: ";
    cin >> mhs[i].nilai;
    cout << endl;
  }

  cout << endl;
  cout << "-----------------------" << endl;

  for (i=1; i<=n; i++){
    cout << "Hasil nim: " << mhs[i].nim << endl;
    cout << "Hasil nama: " << mhs[i].nama << endl;
    cout << "Hasil nilai: " << mhs[i].nilai << endl;
  }

  return 0;
}
