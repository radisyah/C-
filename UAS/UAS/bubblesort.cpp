#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// BubbleShort
void bubbleSort(int arr[]){
  int i, j, tmp;
  for (i = 0; i < 5000; i++){
    for (j = 0; j < 5000 - i - 1; j++){
      if (arr[j] > arr[j + 1]){
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}


int main() {
  // Inisialisasi generator acak
  srand(time(NULL));

  // Menampilkan 100 data acak
  int angka[5000];

  for (int i = 0; i < 5000; i++) {
   angka[i] = rand() % 5001 + 1;
   cout<< angka[i] <<endl;
  }


  cout << "BubbleShort" << endl;
  bubbleSort(angka);
  cout << "Hasil pengurutan sebagai berikut:\n";
  for (int i = 0; i < 5000; i++){
    cout << angka[i] << " ";
  }
  cout << "\n";

  return 0;
}
