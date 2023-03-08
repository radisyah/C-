// C++ program for insertion sort

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int angka[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = angka[i];
		j = i - 1;

		while (j >= 0 && angka[j] > key)
		{
			angka[j + 1] = angka[j];
			j = j - 1;
		}
		angka[j + 1] = key;
	}
}

void printArray(int angka[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << angka[i] << " ";
	cout << endl;
}

int main()
{
  srand(time(NULL));

  // Menampilkan 100 data acak
  int angka[5000];
  for (int i = 0; i < 5000; i++) {
   angka[i] = rand() % 5001 + 1;
   cout<< angka[i] <<endl;
  }
	int N = sizeof(angka) / sizeof(angka[0]);

	insertionSort(angka, N);
	printArray(angka, N);

	return 0;
}
