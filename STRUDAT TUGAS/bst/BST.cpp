#include <iostream>
#include <cstdlib>

#include "BST.h"

using namespace std;

BST::BST(){
  root = NULL;
}

BST::node* BST::CreateLeaf(int key){
  node* newNode = new node;
  newNode->key = key;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

void BST::AddLeaf(int key){
  AddLeafPrivate(key, root);
}

void BST::AddLeafPrivate(int key, node* Ptr){
  if(root == NULL){
    root = CreateLeaf(key);
  }
  
  else if(key < Ptr->key){
    if(Ptr->left != NULL){
      AddLeafPrivate(key, Ptr->left);
    }else{
      Ptr->left = CreateLeaf(key);
    }
  }
  
  else if(key > Ptr->key){
    if(Ptr->right != NULL){
      AddLeafPrivate(key, Ptr->right);
    }else{
      Ptr->right = CreateLeaf(key);
    }
  }

  else{
    cout << "Key" << key << "has already been added to the tree" << endl;
  }
}

void BST::PrintInOrder(){
  PrintInOrderPrivate(root);
}

void BST::PrintInOrderPrivate(node* Ptr){
  if(root != NULL){
    if(Ptr->left != NULL){
      PrintInOrderPrivate(Ptr->left);
    }
    cout << Ptr->key << " ";
    if(Ptr->right != NULL){
      PrintInOrderPrivate(Ptr->right);
    }
  }
  
  else{
    cout << "The tree is empty\n";
  }
}






