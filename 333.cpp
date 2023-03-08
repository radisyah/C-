#include <stdio.h>
#include <stdlib.h>
#include "stdbool.h"

void QuickSort(int A[], int left, int right)
       {
              int i = left;
              int j = right; 
              int temp = A[i];

       if( left < right)
              {
                     while(i < j)
                     {
                            while(A[j] >= temp && i < j)
                            {
                                   j--;
                            }
                            A[i] = A[j];

                     while(A[i] <= temp && i < j)
                            {
                                   i++;
                            }
                            A[j] = A[i];
                     }
                     A[i] = temp;

              QuickSort(A, left, i - 1);
                     QuickSort(A, j + 1, right);
              }
       }

int main (){
	int i,j,x,y,n,t;
	int angka,temp;
	bool unique;
	int angka_random;
    int A[100];
     for(i=1; i<=100; i++)
    {
       	do{
			unique = true;
			angka_random = (rand()%100);
			for (j=0; j<i && unique == 1; j++){
				if(	A[j]==angka_random){
					unique = false;
				}
			}
		}while(!unique);
		A[i]= angka_random;
    }
    QuickSort(A, 1,100);

	//Ascending
    printf("\nUrutan Ascending : ");
    for (i = 1; i <= 100; i++)
    printf("%d,",A[i]);
    printf("\n");
    
    //Descending
    printf("\nUrutan Descending : ");
    for (i = 100; i >= 1; i--)
    printf("%d,",A[i]);
    printf("\n");
     }
