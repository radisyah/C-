#include <iostream>
#include <cstdlib>

using namespace std;

struct Node {
  int key;
  Node *left;
  Node *right;
};

// variabel pointer global
Node *root, *newNode;

Node *CreateLeaf(int key){   
  newNode = new Node();
  newNode->key = key;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

void AddLeaf

int main(){


  


  return 0;
}
