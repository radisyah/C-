#include <iostream>
using namespace std;

struct Node {
  char label;
  Node *left, *right, *parent;
};

// variabel pointer global
Node *root, *newNode;

void createNewTree(char label){
  if(root!=NULL){
    cout << "\nTree sudah dibuat" << endl;
  }else{
    root= new Node();
    root->label = label;
    root->left = NULL;
    root->right = NULL;
    root->parent = NULL;
    cout << "\n" << label << " berhasil dibuat menjadi root" << endl;
  }
}

// insert left
Node *insertLeft(char label, Node *node){
  if(root==NULL){
    cout << "\nBuat tree terlebih dahulu" << endl;
    return NULL;
  }else{
    if(node->left !=NULL){
      // kalau ada
      cout << node->label << "\nSudah ada anak kiri" << endl;
      return NULL;

    }else{
      newNode= new Node();
      newNode->label = label;
      newNode->left = NULL;
      newNode->right = NULL;
      newNode->parent = node;
      node->left = newNode;
      cout << "\n" << label << " berhasil ditambahkan ke anak kiri " << newNode->parent->label <<  endl;
      return newNode;
    }
  }
}

// insert right
Node *insertRight(char label, Node *node){
  if(root==NULL){
    cout << "\nBuat tree terlebih dahulu" << endl;
    return NULL;
  }else{
    // cek apakah anak kiri ada atau tidak
    if(node->right !=NULL){
      // kalau ada
      cout << node->label << "\nSudah ada anak kanan" << endl;
      return NULL;
     
    }else{
      newNode= new Node();
      newNode->label = label;
      newNode->left = NULL;
      newNode->right = NULL;
      newNode->parent = node;
      node->right = newNode;
      cout << "\n" << label << " berhasil ditambahkan ke anak kanan " << newNode->parent->label <<  endl;
      return newNode;
    }
  }
}

// Empty
bool empty(){
  if(root==NULL){
    return true;
  }else{
    return false;
  }
}

// update
void update(char label, Node *node){
   if(!root){
    cout << "\nBuat tree terlebih dahulu" << endl;
  }else{
    if(!node){
      cout << "\n Node yang ingin diganti tidak ada" << endl;
    }else{
      char temp = node->label;
      node->label= label;
      cout << "\nLabel node " << temp << " berhasil diubah menjadi " << label << endl;
    }
  }
}

// retrieve
void retrieve( Node *node){
   if(!root){
    cout << "\nBuat tree terlebih dahulu" << endl;
  }else{
    if(!node){
      cout << "\n Node yang ditunjuk tidak ada" << endl;
    }else{
      cout << "\nLabel node " << node->label << endl;
    }
  }
}

// find
void find(Node *node){
  if(!root){
    cout << "\nBuat tree terlebih dahulu" << endl;
  }else{
    if(!node){
      cout << "\nNode yang ditunjuk tidak ada" << endl;
    }else{
      cout << "Label Node: " << node->label << endl;
      cout << "Root Node : " << root -> label << endl;
      
      if(!node->parent){
        cout << "Parent Node : Tidak punya orang tua" << endl;
      }else{
        cout << "Parent Node : " << node->parent->label << endl;
      }

      if(node->parent != NULL && node->parent->left != node && node->parent->right == node){
        cout << "Saudara: " << node->parent->left->label << endl;
      }else if(node->parent != NULL && node->parent->right != node && node->parent->left == node){
        cout << "Saudara: " << node->right->label << endl;
      }else{
        cout << "Saudara : Tidak punya Saudara" << endl;
      }

      if(!node->left){
        cout << "Anak kiri Node : Tidak punya orang tua" << endl;
      }else{
        cout << "Anak kiri Node : " << node->left->label << endl;
      }

      if(!node->right){
        cout << "Anak kanan Node : Tidak punya orang tua" << endl;
      }else{
        cout << "Anak kanan Node : " << node->right ->label << endl;
      }

    }
  }
}

// tranversal
// preOrder
void preOrder(Node *node = root){
  if(!root){
    cout << "\nBuat tree terlebih dahulu" << endl;
  }else{
    if(node != NULL){
      cout << node->label<< ", ";
      preOrder(node->left);
      preOrder(node->right);
    }
  }
}

// inOrder
void inOrder(Node *node = root){
  if(!root){
    cout << "\nBuat tree terlebih dahulu" << endl;
  }else{
    if(node != NULL){
      inOrder(node->left);
      cout << node->label<< ", ";
      inOrder(node->right);
    }
  }
}

// delete tree
void deleteTree(Node *node){
  if(!root){
    cout << "\nBuat tree terlebih dahulu" << endl;
  }else{
    if(node!=NULL){
      node->parent->left = NULL;
      node->parent->right = NULL;
      deleteTree(node->left);
      deleteTree(node->right);
      delete node;
    }
  }
}

// delete sub
void deleteSub(Node *node){
  if(!root){
    cout << "\n Buat tree terlebih dahulu" << endl;
  }else{
    deleteTree(node->left);
    deleteTree(node->right);
    cout << "\nSubtree node " << node->label << " berhasil dihapus" << endl;
  }
}

// clear
void clear(){
  if(!root){
    cout << "\n Buat tree terlebih dahulu" << endl;
  }else{
    deleteTree(root);
    cout << "\nTree berhasil dibuat" << endl;
  }
}

// postOrder
void postOrder(Node *node = root){
  if(!root){
    cout << "\nBuat tree terlebih dahulu" << endl;
  }else{
    if(node != NULL){
      postOrder(node->left);
      postOrder(node->right);
      cout << node->label<< ", ";
    }
  }
}

// size
int size(Node *node = root){
  if(!root){
    cout << "\nBuat tree terlebih dahulu" << endl;
    return 0;
  }else{
    if(!node){
      return 0;
    }else{
      return 1 + size(node->left) + size(node->right);
    }
  }
}

// height
int height(Node *node = root){
  if(!root){
    cout << "\nBuat tree terlebih dahulu" << endl;
    return 0;
  }else{
    if(!node){
      return 0;
    }else{
      int heightKiri = height(node->left);
      int heightKanan = height(node->right);
      
      if(heightKiri >= heightKanan){
        return heightKiri + 1;
      }else{
        return heightKanan + 1;
      }
    }  
  }
}

// characteristic
void karakteristik(){
  cout << "\nSize Tree           : " << size() << endl;
  cout << "\nHeight Tree         : " << height() << endl;
  cout << "\nAverage Node of Tree: " << size() / height() << endl;
}

int main(){
  createNewTree('A');
  Node *nodeB, *nodeC, *nodeD, *nodeE, *nodeF, *nodeG, *nodeH, *nodeI, *nodeJ;
  nodeB = insertLeft('B', root);
  nodeC = insertRight('C', root);
  nodeD = insertLeft('D', nodeB);
  nodeE = insertRight('E', nodeB);
  nodeF = insertLeft('F', nodeC);
  nodeG = insertLeft('G', nodeE);
  nodeH = insertRight('H', nodeE);
  nodeI = insertLeft('I', nodeG);
  nodeJ = insertRight('J', nodeG);
  cout << "\nTree empty?: " << empty() << endl;
  
  retrieve(nodeC);
  find(nodeE);

  cout << "preOrder:" << endl;
  preOrder();
  cout << "inOrder:" << endl;
  inOrder();
  cout << "postOrder:" << endl;
  postOrder();
  karakteristik();
  // deleteSub(nodeE);
  // cout << "preOrder:" << endl;
  // preOrder();
  // cout << "\n" << endl;
  // cout << "Height: " << height() << endl;


  

}