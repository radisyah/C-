#include <iostream>
using namespace std;

// deklarasi single linked list
struct Buku{
  // komponen
  string judul, pengarang, kdBuku;
  int tahunTerbit;
  

  Buku *next;

};

Buku *head, *tail, *cur, *newNode, *del, *before;

void createSingleLinkedList(string kdB, string judul, string pengarang, int tB ){
  head = new Buku();

  // Pengisian node1
  head->kdBuku = kdB;
  head->judul= judul;
  head->pengarang= pengarang;
  head->tahunTerbit= tB;
 
  head->next = NULL;
  tail = head;
}

int countSingleLinkedList(){
  cur = head;
  int jumlah=0;
  while( cur != NULL ){
    jumlah++;
    cur = cur->next;
  }
  return jumlah;
}

// tambah awal single linked list
void addFirst(string kdB, string judul, string pengarang, int tB){
  newNode = new Buku();
  // Pengisian node1
  newNode->kdBuku= kdB;
  newNode->judul= judul;
  newNode->pengarang= pengarang;
  newNode->tahunTerbit= tB;
  newNode->next = head;
  head = newNode;

}

// tambah tengah single linked list
void addMiddle(string kdB, string judul, string pengarang, int tB, int posisi){
  if(posisi<1 || posisi > countSingleLinkedList()){
    cout << "Posisi diluar jangkauan" << endl;
  }else if(posisi==1){
    cout << "Posisi bukan posisi tengah" << endl;
  }else{
    newNode = new Buku();
    // Pengisian node1
    newNode->kdBuku= kdB;
    newNode->judul= judul;
    newNode->pengarang= pengarang;
    newNode->tahunTerbit= tB;
    
    // melakukan tranfersing
    cur = head;
    int nomor = 1;
    while(nomor < posisi -1){
      cur = cur->next;
      nomor++;
    }

    newNode->next = cur->next;
    cur->next = newNode;
  }
}



// tambah awal single linked list
void addLast(string kdB, string judul, string pengarang, int tB){
  newNode = new Buku();
  // Pengisian node1
  newNode->kdBuku= kdB;
  newNode->judul= judul;
  newNode->pengarang= pengarang;
  newNode->tahunTerbit= tB;
  newNode->next = NULL;

  tail->next = newNode;
  tail = newNode;

}

// Ubah FIrst
void changeFirst(string kdB, string judul, string pengarang, int tB){
  head->kdBuku = kdB;
  head->judul = judul;
  head->pengarang = pengarang;
  head->tahunTerbit = tB;
}

// Ubah Last
void changeLast(string kdB, string judul, string pengarang, int tB){
  tail->kdBuku = kdB;
  tail->judul = judul;
  tail->pengarang = pengarang;
  tail->tahunTerbit = tB;
}

// Ubah  Mid
void changeMiddle(string kdB, string judul, string pengarang, int tB, int posisi){
  if(posisi<1 || posisi > countSingleLinkedList()){
    cout << "Posisi diluar jangkauan" << endl;
  }else if(posisi==1||posisi==countSingleLinkedList()){
    cout << "Posisi bukan posisi tengah" << endl;
  }else{
    cur =head;
    int nomor = 1;
    while(nomor < posisi-1 ){
      cur = cur->next;
      nomor++;
    }
    cur->kdBuku = kdB;
    cur->judul = judul;
    cur->pengarang = pengarang;
    cur->tahunTerbit=tB;
  }
}

// remove First
void removeFirst(){ 
  del = head;
  head = head -> next;
  delete del;
}

// removelasat
void removeLast(){
  del = tail;
  cur = head;
  while ((cur->next != tail))
  {
    cur = cur->next;
  }
  tail= cur;
  tail->next = NULL;
  delete del;
}

// remove middle
void removeMiddle(int posisi){
  if(posisi<1 || posisi > countSingleLinkedList()){
    cout << "Posisi diluar jangkauan" << endl;
  }else if(posisi==1||posisi==countSingleLinkedList()){
    cout << "Posisi bukan posisi tengah" << endl;
  }else{
    int nomor = 1;
  cur =head;
  while(nomor <= posisi){
    if(nomor<posisi){
      before = cur;
    }
    if(nomor==posisi){
      del=cur;
    }
    cur = cur->next;
    nomor++;
  }
  before->next = cur;
  delete del;
  }
}

void printSingleLinkedList(){
  cout << "Jumlah data: " << countSingleLinkedList() << endl;
  cur = head;
  while( cur != NULL ){
    cout << "Kode Buku: " << cur->kdBuku << endl;
    cout << "Judul Buku: " << cur->judul << endl;
    cout << "Pengarang Buku: " << cur->pengarang << endl;
    cout << "Tahun terbit buku: " << cur->tahunTerbit << endl;
    cur=cur->next;
    cout << endl;
    cout << "-------------";
  }

}

void  searchSingleLinkedList(string kdB){
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
      createSingleLinkedList("kdB01","Kata", "Budi", 2018);
      addFirst("kdB02","Tuhan", "Anto", 2018);
      cout << "Berhasil |INSERT|" << endl;
    }else if(i==2){
      printSingleLinkedList();
    }else if(i==3){
      removeFirst();
    }else if(i==4){
      searchSingleLinkedList("kdB02");
    }else{
        cout << endl;
        cout << "Input Tidak Tersedia|Terimakasih|" << endl;
        break;
      }
  }

 
 
  


 

}