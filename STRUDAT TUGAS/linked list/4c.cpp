#include <iostream>
using namespace std;


// deklarasi circular single linked list
struct Mahasiswa{
  string npm, nama, jurusan;

  Mahasiswa *next;
};

Mahasiswa *head, *newNode, *cur, *del, *tail;

// create circular single linked list
void createCircularSingleLinkedList(string dataBaru[3]){
  head = new Mahasiswa();
  head -> npm = dataBaru[0];
  head -> nama = dataBaru[1];
  head -> jurusan = dataBaru[2];

  tail = head;
  tail -> next = head;
}

// addFIrst
void addFirst(string data[3]){
  if(head==NULL){
    cout << "Buat Linked List dulu!" << endl;
  }else{
    newNode = new Mahasiswa();
    newNode -> npm = data[0];
    newNode -> nama = data[1];
    newNode -> jurusan = data[2];
    newNode -> next = head;
    tail -> next = newNode;
    head = newNode;
  }
}

void addMiddle(string data[3], int posisi){
  if(head==NULL){
    cout << "Buat Linked List dulu!" << endl;
  }else{
    if(posisi==1){
      cout << "Posisi satu bukan posisi tengah" << endl;
    }else{
      newNode = new Mahasiswa();
      newNode -> npm = data[0];
      newNode -> nama = data[1];
      newNode -> jurusan = data[2];
      // tranfersing
      int nomor = 1;
      cur = head;
      while (nomor < posisi - 1){
        cur = cur-> next;
        nomor++;
      }
        newNode -> next =  cur -> next;
        cur -> next = newNode;
    }
  }
}

// addLast
void addLast(string data[3]){
   if(head==NULL){
    cout << "Buat Linked List dulu!" << endl;
  }else{
    newNode = new Mahasiswa();
    newNode -> npm = data[0];
    newNode -> nama = data[1];
    newNode -> jurusan = data[2];
    newNode -> next = head;
    tail -> next = newNode;
    tail = newNode;
  }
}

// removeFirst
void removeFirst(){
 if(head==NULL){
    cout << "Buat Linked List dulu!" << endl;
  }else{
    del = head;
    head = head -> next;
    tail->next = head;
    delete del;
  }
}

// removeMiddle
void removeMiddle(int posisi){
  if(head==NULL){
    cout << "Buat Linked List dulu!" << endl;
  }else{
    if(posisi==1){
      cout << "Posisi satu bukan posisi tengah" << endl;
    }else{
      int nomor = 1;
      cur = head;
      while(nomor<posisi-1){
        cur = cur->next;
        nomor++;
      }
      del = cur -> next;
      cur->next = del->next;
      delete del;
    }
  }
}

// removelast
void removeLast(){
 if(head==NULL){
    cout << "Buat Linked List dulu!" << endl;
  }else{
    del = tail;
    cur
    while(cur->next != tail){
      cur= cur-> next;
    }
    tail = cur;  
    tail = next->head;
    delete del;
  }
}

void printCircular(){
  cout << "Data Mahasiswa " << endl;
  cout << "NPM\t\t Nama\t\t| Jurusan\t\t" << endl;
  cur = head;
  while (cur->next !=head)
  {
    // print
    cout << "| " << cur->npm << "\t\t| " << cur->nama << "\t\t| " << cur->jurusan << "\t\t|" << endl;
    cur = cur->next;
  }
  cout << "| " << cur->npm << "\t\t| " << cur->nama << "\t\t| " << cur->jurusan << "\t\t|" << endl; 
}

int main(){
  string dataBaru[3] = ["200811","Yunus", "Informatika"];
  createCircularSingleLinkedList();
  printCircular();
}

