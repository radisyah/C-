#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

struct node{
  int info;
  struct node *link;
}*top=NULL;

void push(int num){
  struct node *temp;
  temp = new node();
  if(temp==NULL){
    cout << "stack overflow" << endl;
    return;
  }
  temp -> info = num;
  temp -> link = top;
  top = temp;

  cout << num << " sudah masuk dalam STACK" << endl;
  cout << "Press any key to return to menu. \n\n";
  
  getch();
}


int pop(){
  struct node *temp;
  int num;
  if(top==NULL){
    cout << "\nError : Stack is empty. \n" << endl;
  }
  temp = top;
  num = top->info;
  top = top->link;
  delete temp;
  cout << "\n" << num << " Sudah diambil dari STACK" << endl;  
  cout << "\nPress any key to return to menu. \n\n";
  getch();
  return num;
}

void display(){
  struct node *p;
  if(top == NULL){
    cout << "\nTidak ada yang ditampilkan \n" << endl;
  }
  p=top;
  while(p!=NULL){
    cout << "\n";
    cout << "\t " << p->info << endl;
    p = p -> link;
  }
  cout << "\nPress any key to return to Menu. \n\n";
  getch();
 }

 void printlist(){
  int choice, num;
  while(1){
    cout << "--------------------------------------" << endl;
    cout << "Implementasi Linked List sebagai Stack" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Pilih salah satu menu: \n" << endl;
  
    cout << "- Press  '1' to Masukkan data" << endl;

    cout << "- Press  '2' to Mengambil data" << endl;

    cout << "- Press  '3' to Menampilkan data" << endl;

    cout << "- Press  '4' to  Exit" << endl;
    
    
    cout << "\nMasukkan Pilihan: ";
    cin >> choice;

    if(choice == 1){
      cout << "\nMasukkan Angka: ";
      cin >> num;
      push(num);
    }else if (choice == 2){
      num = pop();
    }else if (choice == 3){
      display();
    }else if (choice == 4){
      break;
    }else{
      break;
    }
  }
}

int main(){
  printlist();
}