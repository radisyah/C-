
#include <stdio.h>
#include <stdlib.h>
#include "stdbool.h"

int main()
{
	int i,j,x,y,n,t, A[100];
	int angka,temp;
	bool unique;
	int angka_random;
   
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
    

    for(i=1;i<=99;i++)
    {
        for(j=i+1;j<=99;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[j];
                A[j]=A[i];
                A[i]=temp;
            }
        }
    }
    
    printf("\n\nData setelah diurut : ");
    for(i=1;i<=99;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    
	
    
    return 0;
}
