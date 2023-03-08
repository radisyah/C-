#include <iostream>
using namespace std;

struct node{
  int key;
  char platNomor[255];
  char noNota[255];
  char KodePintuParkir[255];
  char Tanggal[255];
  struct node *left;
  struct node *right;
}krcs[255];

// variabel pointer global
node *root, *curr;

struct node *newNode(int x){
  if(root!=NULL){
    cout << "\nTree sudah dibuat" << endl;
  }else{
  curr= new node();
  curr->key = x;
  curr->left = NULL;
  curr->right = NULL;
  }
  return curr;
}

struct node *insert(struct node *root, int value){

  if(root==NULL){
    return newNode(value);
  }
  
  else if(value < root->key){
    root->left = insert(root->left, value);
    
  }
  
  else if(value > root->key){
    root->right = insert(root->right, value); 
  
  }

  return root;
}

void printAll(struct node *root){

  if(root == NULL) return;
  printAll(root->left);
  cout << "Nomor Antrian      : "  << root->key << endl;
  cout << "Plat Nomor         : " << krcs[root->key].platNomor << endl;
  cout << "Nomor Nota         : " << krcs[root->key].noNota << endl;
  cout << "Kode Pintu Parkir  : " << krcs[root->key].KodePintuParkir << endl;
  cout << "Tanggal            : " << krcs[root->key].Tanggal << endl;
  cout << endl;
  printAll(root->right);
  
}

// Fungsi untuk tree jikalau mempunyai dua anak [kiri dan kanan]
struct node *predecessor (struct node *root){
  struct node *curr = root->left;
  while(curr->right!=NULL){
    curr=curr->right;
  }
  return curr;
}

// Fungsi untuk mencari nilai pada node
bool search(struct node* root, int key){
  if(root == NULL){
    return false;
  }else if(root->key == key){
    return true;
  }else if(root->key > key){
    bool val = search(root->left,key);
    return val;
  }else{
    bool val = search(root->right, key);
    return val;
  }
}

// Fungsi untuk menghapus nilai pada node
struct node *deleteValue(struct node *root, int value){
  if(root==NULL){
    // Tidak ditemukan
    return NULL;
  }else if(value<root->key){
    root->left = deleteValue(root->left, value);
  }else if(value>root->key){
    root->right = deleteValue(root->right, value);
  }else{
    // Ketemu
    if((root->left==NULL) || (root->right==NULL)){
      struct node *temp = NULL;
     
      if(root->left!=NULL){
        temp = root->left;
      }else{
        temp = root->right;
      }
      
      if(temp==NULL){
        // Tidak punya anak
        temp = root;
        root = NULL;
      }else{
        // Jika anaknya 1
        *root=*temp;
      }

      free(temp);

    }else{
      // Jika anaknya 2
      struct node *temp = predecessor(root);
      root->key = temp->key;
      root->left = deleteValue(root->left, temp->key);
    }
  }
  return root;
}

int main(){
  struct node *root = NULL;
  int x;
  int count = 0;

  int pilihan, value;
  bool found;
    do {
      cout << endl;
      cout << "----------------------"<< endl;
      cout << "E-Arsip Karcis Parkir" << endl;
      cout << "----------------------"<< endl;
      cout << endl;
      cout << "Pilih menu: " << endl;
      cout << "1. Insert" << endl;
      cout << "2. Delete" << endl;
      cout << "3. Search" << endl;
      cout << "4. View" << endl;
      cout << "5. Exit" << endl;
      cout << "-----------------" << endl;
      cout << "Masukkan pilihan: ";
      cin >> pilihan;
      cout << endl;

      switch (pilihan) {
          case 1:
          cout << "----------------------"<< endl;
          cout << "   Input Data Karcis" << endl;
          cout << "----------------------"<< endl;
          cout << "Masukkan Nomor Antrian     : ";
          cin >> value;
          cout << "Masukkan Plat Nomor        : ";
          cin >>  krcs[value].platNomor;
          cout << "Masukkan No Nota           : ";
          cin >>  krcs[value].noNota;
          cout << "Masukkan Kode Pintu Parkir : ";
          cin >>  krcs[value].KodePintuParkir;
          cout << "Masukkan Tanggal           : ";
          cin >>  krcs[value].Tanggal;
          root = insert(root, value);       
        
       
          break;
      case 2:
          cout << "----------------------"<< endl;
          cout << "   Delete Data Karcis" << endl;
          cout << "----------------------"<< endl;
          cout << "Masukkan Nomor Antrian yang akan dihapus: ";
          cin >> value;
          root = deleteValue(root, value);
          break;
      case 3:
          cout << "----------------------"<< endl;
          cout << "   Cari Data Karcis" << endl;
          cout << "----------------------"<< endl;
          cout << "Masukkan Nomor Antrian: ";
          cin >> value;
          found = search(root, value);
          if (found) {
              cout << "Nomor Antrian ditemukan" << endl;
          } else {
              cout << "Nomor Antrian tidak ditemukan" << endl;
          }
          break;
      case 4:
           cout << "----------------------"<< endl;
          cout << "   Tampil Data Karcis" << endl;
          cout << "-----------------------"<< endl;
          cout << endl;
          printAll(root);
          cout << endl;
         
          break;
      case 5:
          break;
      default:
          cout << "Pilihan tidak valid" << endl;
          break;
		}
	}while(pilihan!=5);

  return 0; 
}
