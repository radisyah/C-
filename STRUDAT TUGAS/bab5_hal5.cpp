#include <iostream>

using namespace std;

// Deklarasi MAX_STACK
#define MAX_STACK 5;
typedef struct STACK {
  int top;
  int data[5];
}


void inisialisasi(){
  tumpuk.top = -1;
}



int main()
{

  STACK tumpuk;

 
  // ISEMPTY
  int IsEmpty(){
    if(tumpuk.top == -1)
     return 1;
    else 
      return 0;
  }


  // ISFULL
  // int IsFull (){
  //   if (tumpuk.top == MAX_STACK-1)
  //     return 1;  
  //   else
  //     return 0;
  // }

  // PUSH
  // void push (char d(5)){
  //   tumpuk.top++;
  //   strcopy(tumpuk.data[tumpuk.top],d)
  // }

  // POP
  // void pop(){
  //   cout << "Data yang di POP = %s\n", tumpuk.data[tumpuk.top] << endl;
  //   tumpuk.top--;
  // }

  // CLEAR
  // void clear(){
  //   tumpuk.data=tumpuk.top=-1;
  //   cout << "Data clear" << endl;
  // }


	system("Pause");
}
