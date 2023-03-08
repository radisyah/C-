#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){
	
	for(int i=0;i<size;i++)
{
    bool unique;
    do
    {
      unique=true;
      newitem=rand()%100;
      for(int i1=0;i1<i;i1++)
      {
         if(array[i1]==newitem)
         {
           unique=false;     
            break
         }
      }
    }while(!unique);
    array[i]=newitem;

}
	




	system("Pause");
	return 0;
}
