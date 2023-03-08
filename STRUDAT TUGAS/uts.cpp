#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

class Linked_list_Stack
{
  private:
  struct node
  {
  int data;
  node *next;
  };
  node *top;
  node *entry;
  node *print;
  node *bottom;
  node *last_entry;
  node *second_last_entry;

  public:
  Linked_list_Stack();

  void pop();
  void push();
  void print_list();
  void show_working();
};

Linked_list_Stack::Linked_list_Stack()
{
  top = NULL;
  bottom = NULL;
}

// ------------ push () -------------------------//
void Linked_list_Stack::push(){
  int num;

  cout << "\nMasukkan angka pada Stack: ";
  cin >> num;

  entry = new node;

  if(bottom==NULL)
  {
    entry -> data = num;
    entry -> next = NULL;
    bottom = entry;
    top = entry;
  }
  else 
  {
    entry -> data = num;
    entry -> next = NULL;
    top -> next = entry;
    top = entry;
  }

  cout << num << " sudah masuk dalam STACK" << endl;
  cout << "Press any key to return to menu. \n\n";
  
  getch();
}

// ------------ pop () -------------------------//
void Linked_list_Stack::pop()
{
  if(bottom==NULL){
    cout << "\nError : Stack is empty. \n" << endl;
  }else {
    for(last_entry=bottom; last_entry->next != NULL; last_entry=last_entry->next){
      second_last_entry=last_entry;
    }
      if (top == bottom){
        bottom = NULL;
        int poped_element = top -> data;
        delete top;
        top = second_last_entry;
        top -> next = NULL;
        cout << "\n" << poped_element << " Sudah diambil dari STACK" << endl;  
    }
  }
  cout << "Press any key to return to menu. \n\n";
  getch();
}

// ------------ print_list () -------------------------//
void Linked_list_Stack::print_list(){
  print = bottom;
  
    if(print != NULL)
  cout << "\nAngka-angka yang ada di Stack adalah" << endl;
    
    else
  cout << "\nTidak ada yang ditampilkan \n" << endl;

    while(print != NULL)
    {
      cout << "\t " << print->data << endl;

      print = print -> next;
    }
    cout << "Press any key to return to Menu. \n\n";

    getch();
}

// ------------ show_working() -------------------------//
void Linked_list_Stack::show_working()
{

  char Key;

  do
  {

    system("cls");

    cout << "--------------------------------------" << endl;
    cout << "Implementasi Linked List sebagai Stack" << endl;
    cout << "--------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "Pilih salah satu menu: \n" << endl;
  
    cout << "- Press  'P' to Masukkan data" << endl;

    cout << "- Press  'O' to Mengambil data" << endl;

    cout << "- Press  'S' to Menampilkan data" << endl;

    cout << "- Press  'E ' to  Exit" << endl;

    Input:
    
    cout << "\nMasukkan pilihan: ";
   

    Key=getche();

      if(Key == 'e' || Key == 'E')
    break;

      else if (Key=='p' || Key == 'P')
    push();

     else if (Key=='o' || Key == 'O')
    pop();

     else if (Key=='s' || Key == 'S')
    print_list();

      else
    goto Input;
  
  }
    while(1);
}

// ------------main() -------------------------//
int main(){
  Linked_list_Stack obj;
  obj.show_working();
  return 0;
}
 
