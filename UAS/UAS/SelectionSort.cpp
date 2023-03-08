#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// SelectionSort
void selectionSort(int arr[]){
  int temp;
  int loc_min;

  for(int i = 0; i < 5000; i++){
    loc_min = i;
    for (int j = i; j < 5000; j++){
      if (arr[j] < arr[loc_min]){
       loc_min = j;
     }
   }
   temp = arr[i];
   arr[i] = arr[loc_min];
   arr[loc_min] = temp;
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


  cout << "SelectionSort" << endl;
  selectionSort(angka);
  for (int i= 0; i < 5000; i++){
  cout << angka[i] << " ";
  }
  cout << endl;

 

  return 0;
}
