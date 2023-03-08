#include <iostream>
using namespace std;

// deklarasi double linked list
struct Buku
{
  string judul, pengarang, kdBuku;
  int tahunTerbit;
  
  Buku *prev;
  Buku *next;
};

Buku *head, *tail, *cur, *newNode, *del, *afterNode;

// Create Double linked list
void createDoubleLinkedList(string data[3], int tB){
  head = new Buku();
  head->judul = data[0];
  head->pengarang  = data[1];
  head->kdBuku =data[2];
  head->tahunTerbit= tB;

  head->prev=NULL;
  head->next=NULL;
  tail = head;
}

void addFirst(string data[3], int tB){
  if(head ==NULL){
    cout << "Double Linked List belum dibuat" << endl;
  } else{
    newNode = new Buku();
    newNode->judul = data[0];
    newNode->pengarang = data[1];
    newNode->kdBuku =data[2];
    newNode->tahunTerbit = tB;
    newNode->prev=NULL;
    newNode->next=head;
    head->prev=newNode;
    head = newNode;
  }
}


// count Double Linked List
int countDoubleLinkedList(){
  cur = head;
  int jumlah=0;
  while(cur!=NULL){
    jumlah++;
    cur = cur->next;
  }
  return jumlah;
}

void addLast(string data[3], int tB){
  if(head ==NULL){
    cout << "Double Linked List belum dibuat" << endl;
  } else{
    newNode = new Buku();
    newNode->judul = data[0];
    newNode->pengarang = data[1];
    newNode->kdBuku =data[2];
    newNode->tahunTerbit = tB;
    newNode->prev=tail;
    newNode->next=NULL;
    tail->next=newNode;
    tail = newNode;
  }
}

void removeFirst(){
   if(head ==NULL){
    cout << "Double Linked List belum dibuat" << endl;
  } else{
    del = head;
    head = head ->next;
    head->prev =NULL;
    delete del;
  }
}

void removeLast(){
   if(head ==NULL){
    cout << "Double Linked List belum dibuat" << endl;
  } else{
    del = tail;
    tail = tail ->prev; 
    tail->next =NULL;
    delete del;
  }
}

void removeMiddle(int posisi){
  if(head==NULL){
    cout << "Double linked lis belum dibuat" << endl;
  }else{
    if(posisi==1 || posisi == countDoubleLinkedList()){
      cout << "Posisi bukan posisi tengah" << endl;
    }else if(posisi <1 || posisi > countDoubleLinkedList()){
      cout << "Posisi diluar jangkauan" << endl;
    }else{
      int nomor =1 ;
      cur = head;
      while(nomor <posisi-1){
        cur = cur -> next;
        nomor++;
      }
      del = cur->next;
      afterNode = cur->next;
      cur->next=afterNode;
      afterNode->prev=cur;
      delete del; 
    }
  }

}

// Print Double Linked List
void printDoubleLinkedList(){

  if(head ==NULL){
    cout << "Double Linked List belum dibuat" << endl;
  } else{
    cout << "Jumlah Data: " << countDoubleLinkedList() << endl;
    cur = head;
  while(cur!=NULL){
    // print
    cout << "Kode Buku: " << cur->kdBuku << endl;
    cout << "Judul Buku: " << cur->judul << endl;
    cout << "Pengarang Buku: " << cur->pengarang << endl;
    cout << "Tahun terbit buku: " << cur->tahunTerbit << endl;

    cur = cur->next;
    }
  }
}

void  searchDoubleLinkedList(string kdB){
  if(cur = tail){
    while( cur != NULL ){
    if(cur->kdBuku==kdB){
      cout << "Data Found" << endl;
      cout << "Kode Buku: " << cur->kdBuku << endl;
      cout << "Judul Buku: " << cur->judul << endl;
      cout << "Pengarang Buku: " << cur->pengarang << endl;
      cout << "Tahun terbit buku: " << cur->tahunTerbit << endl;
      cur=cur->next;
      }
      tail->next = cur;
      cur = head;
      head = NULL;
    }
  }else{
    while( cur != NULL ){
    if(cur->kdBuku==kdB){
      cout << "Data Found" << endl;
      cout << "Kode Buku: " << cur->kdBuku << endl;
      cout << "Judul Buku: " << cur->judul << endl;
      cout << "Pengarang Buku: " << cur->pengarang << endl;
      cout << "Tahun terbit buku: " << cur->tahunTerbit << endl;
      cur=cur->next;
      }
    }
  }
}

int main(){
  string newData[3] = {"Budi","Kata", "kdB01"};
  string newData_Baru[3] = {"Anto","Tuhan", "kdB02"};
  

  

  int i;

  while(1){
  cout << "-------------------------------" << endl;
	cout << "Praktikum 2(Single Linked List)" << endl;
	cout << "-------------------------------" << endl;
	cout << "1. Insert" << endl;
	cout << "2. View "  << endl;
  cout << "3. Delete "  << endl;
  cout << "4. Search "  << endl;
	cout << endl;
	cout << "Masukkan Angka: ";
  cin  >> i;
    if(i==1){
      createDoubleLinkedList(newData,2018);
      addFirst(newData_Baru, 2019);
      cout << "Berhasil |INSERT|" << endl;
    }else if(i==2){
      printDoubleLinkedList();
    }else if(i==3){
      removeFirst();
    }else if(i==4){
      searchDoubleLinkedList("kdB02");
    }else{
        cout << endl;
        cout << "Input Tidak Tersedia|Terimakasih|" << endl;
        break;
      }
  }


}
