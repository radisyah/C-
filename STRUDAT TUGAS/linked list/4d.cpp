#include <iostream>
using namespace std;

// struktur linked list
struct dataBarang{
  string namaBarang;
  int jumlahBarang, hargaBarang;

  // pointer
  dataBarang *prev;
  dataBarang *next;
};

  dataBarang *head, *tail, *cur, *del, *newNode, *afterNode;

// fungsi membuat circular double linked list
void createDataBarang(string namaBarang, int jmlBarang, int hargaBarang){
  head = new dataBarang();
  head->namaBarang = namaBarang;
  head->jumlahBarang = jmlBarang;
  head->hargaBarang = hargaBarang;
  head->prev = head;
  head->next = head;
  tail = head;
}

void addFirst(string namaBarang, int jmlBarang, int hargaBarang){
  if(head == NULL){
    cout << "Belum ada Linked List" << endl;
  }else{
    head = new dataBarang();
    head->namaBarang = namaBarang;
    head->jumlahBarang = jmlBarang;
    head->hargaBarang = hargaBarang;
    newNode->prev = tail;
    newNode->next = head;
    head -> prev = newNode;
    tail -> next = newNode;
    head = newNode;
  }
}

void addMiddle(string namaBarang, int jmlBarang, int hargaBarang, int posisi){
  if(head == NULL){
    cout << "Belum ada Linked List" << endl;
  }else{
    if(posisi == 1){
      cout << "Posisi 1 bukan posisi tengah" << endl;
    }else if(Posisi < 1){
      cout << "Posisi diluar jangkauan" << endl;
    }else{
      newNode = new dataBarang();
      newNode->namaBarang = namaBarang;
      newNode->jumlahBarang = jmlBarang;
      newNode->hargaBarang = hargaBarang;

      cur = head; 
      int nomor =1;
      while(nomor < posisi -1){
        cur = cur->next;
        nomor++;
      }
      afterNode = cur->next;
      cur->next = newNode;
      afterNode->prev = newNode;
      newNode->prev = cur;
      newNode->next = afterNode;
    }
  }
}

void addLast(string namaBarang, int jmlBarang, int hargaBarang){
  if(head == NULL){
    cout << "Belum ada Linked List" << endl;
  }else{
    head = new dataBarang();
    head->namaBarang = namaBarang;
    head->jumlahBarang = jmlBarang;
    head->hargaBarang = hargaBarang;
    newNode->prev = tail;
    newNode->next = head;
    head -> prev = newNode;
    tail -> next = newNode;
    tail = newNode;
  }
} 

void removeFirst(){
  if(head == NULL){
    cout << "Belum ada Linked List" << endl;
  }else{
    del = head;
    head = head -> next;
    tail->next = head;
    head -> prev = tail;
    delete del; 
  }
}

void removeMiddle(){
  if(head == NULL){
    cout << "Belum ada Linked List" << endl;
  }else{
    if(posisi == 1){
      cout << "Posisi 1 bukan posisi tengah" << endl;
    }else if(Posisi < 1){
      cout << "Posisi diluar jangkauan" << endl;
    }else{
      newNode = new dataBarang();
      newNode->namaBarang = namaBarang;
      newNode->jumlahBarang = jmlBarang;
      newNode->hargaBarang = hargaBarang;

      cur = head; 
      int nomor =1;
      while(nomor < posisi -1){
        cur = cur->next;
        nomor++;
      }
      del = cur -> next;
      afterNode = del -> next;
      cur -> next = afterNode;
      afterNode -> prev = cur;
      delete del;    }
  }
}

void removeLast(){
  if(head == NULL){
    cout << "Belum ada Linked List" << endl;
  }else{
    del = tail;
    tail = tail -> prev;
    tail->next = head;
    head -> prev = tail;
    delete del; 
  }
}

// fungsi print
void printDataBarang(){
  if(head == NULL){
    cout << "Belum ada Linked List" << endl;
  }else{
    cout << "Data Barang: " << endl;
    cur = head;
    while(cur->next != head){
      cout << "Nama Barang: " << cur->namaBarang << endl;
      cout << "Jumlah Barang: " << cur->jumlahBarang << endl;
      cout << "harga Barang: " << cur->hargaBarang << endl;
      cur = cur->next;
    }
      cout << "Nama Barang: " << cur->namaBarang << endl;
      cout << "Jumlah Barang: " << cur->jumlahBarang << endl;
      cout << "harga Barang: " << cur->hargaBarang << endl;
  }
}
 
int main(){
  createDataBarang("Shampoo", 15 , 12000);
  printDataBarang();
}