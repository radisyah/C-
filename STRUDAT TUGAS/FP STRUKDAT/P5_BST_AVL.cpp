#include <iostream>
using namespace std;

// Inisialisasi Struct NODE
struct node{
  int key;
  int height;
  struct node *left, *right;
};

// variabel pointer global
node *root, *curr;


// Inisiliasi tinggi tree untuk mengetahui 
// Balance Faktor pada AVL TREE
int getHeight(struct node *root){
  if(root==NULL) return 0;
  return root->height;
}

// Fungsi untuk mendapatkan balance faktor dari tinggi tree
int getBF(struct node *root){
  if(root==NULL)
    return 0;
  return getHeight(root->left)-getHeight(root->right);
  
}

// Inisiliasi node baru
struct node *newNode(int x){
  curr = new node();
  curr->key=x;
  curr->height=1;
  curr->left=curr->right= NULL;

  return curr;
}

// Rotasi ke kanan (untuk diseimbangkan)
// Contoh kasus (10->11->12)
struct node *rightRotate(struct node *y){
  struct node *x = y->left;
  struct node *B = x->right;

  // rotate
  x->right = y;
  y->left = B;

  y->height = max(getHeight(y->left), getHeight(y->right))+1;
  x->height = max(getHeight(x->left), getHeight(x->right))+1;

  return x;
}

// Rotasi ke kiri (untuk diseimbangkan)
// Contoh kasus (10->9->8)
struct node *leftRotate(struct node *x){
  struct node *y = x->right;
  struct node *B = y->left;

  // rotate
  y->left = x;
  x->right = B;

  y->height = max(getHeight(y->left), getHeight(y->right))+1;
  x->height = max(getHeight(x->left), getHeight(x->right))+1;

  return y;
}

// Insert TREE untuk BST dan AVL(dengan ditunjukkan nilai tinggi)
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
  
  

  root->height = max(getHeight(root->left), getHeight(root->right))+1;
  int bfactor = getBF(root);

  if(bfactor > 1 && value<root->left->key){
    return rightRotate(root);
  }

  if(bfactor< -1 && value>root->right->key){
    return leftRotate(root);
  }

  if(bfactor>1 && value>root->left->key){
    root->left = leftRotate(root->left);
    return rightRotate(root);
  }

   if(bfactor<-1 && value<root->right->key){
    root->right = rightRotate(root->right);
    return leftRotate(root);
  }
 


  return root;
}

// Fungsi untuk mencetak seluruh nilai pada node
void printAll(struct node *root){
  if(root==NULL) return;
  printAll(root->left);
  cout << root->key << " ";
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

  // JIKA DELETE AVL TREE
  if(root==NULL) return root;
  root->height = max(getHeight(root->left), getHeight(root->right))+1;
  int bfactor = getBF(root);

  if(bfactor>1 && getBF(root->left)>=0){
    return rightRotate(root);
  }
  if(bfactor<-1 && getBF(root->left)<0){
    root->left = leftRotate(root->left);
    return rightRotate(root);
  }
  if(bfactor<-1 && getBF(root->right)<=0){
    return leftRotate(root);
  }
  if(bfactor<-1 && getBF(root->left)>0){
    root->right = rightRotate(root->right);
    return leftRotate(root);
  }
  return root;
}



int main(){
  //Deklarasi 
  struct node *root = NULL;
  string platMotor[10];
	string merkMotor[10];
  int x;
  int count = 0;

  int pilihan, value;
  bool found;
    do {
      cout << endl;
      cout << "Pilih menu: " << endl;
      cout << "1. Insert BST" << endl;
      cout << "2. Delete AVL" << endl;
      cout << "3. Search" << endl;
      cout << "4. View" << endl;
      cout << "5. Exit" << endl;
      cout << "Masukkan pilihan: ";
      cin >> pilihan;

      switch (pilihan) {
          case 1:
          cout << "Masukkan Nomor Antrian yang akan ditambahkan: ";
          cin >> value;
          root = insert(root, value);       
          break;
      case 2:
          cout << "Masukkan Nomor Antrian yang akan dihapus: ";
          cin >> value;
          root = deleteValue(root, value);
          break;
      case 3:
          cout << "Masukkan Nomor Antrian yang dicari: ";
          cin >> value;
          found = search(root, value);
          if (found) {
              cout << "Nomor Antrian ditemukan" << endl;
          } else {
              cout << "Nomor Antrian tidak ditemukan" << endl;
          }
          break;
      case 4:
          cout << "Tampil Nomor Antrian : ";
          printAll(root);
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
