#include<stdio.h>
#include<stdlib.h>


struct node{
  int key;
  struct node *left;
  struct node *right;
};

struct node *newNode(int x){
  struct node *curr = 
    (struct node*)malloc(sizeof(struct node *));
  curr->key = x;
  curr->left = NULL;
  curr->right = NULL;

  return curr;
}

struct node *insert(struct node *root, int value){
  if(root==NULL) return newNode(value);
  else if(value < root->key)
    root->left = insert(root->left, value);
  else if(value > root->key)
    root->right = insert(root->right, value);
}

void printAll(struct node *root){
  if(root == NULL) return;
  printAll(root->left);
  printf("%d", root->key);
  printAll(root->right);
}

struct node *freeAll(struct node *root){
  if(root==NULL) return NULL;
  root->left = freeAll(root->left);
  root->right = freeAll(root->right);
  free(root);
  return NULL;
}


int main(){
  struct node *root = NULL;

  root = insert(root,10);
  root = insert(root,5);
  root = insert(root,15);
  root = insert(root,25);
  root = insert(root,9);
  root = insert(root,10);
  
  printAll(root);
  root = freeAll(root);

  return 0;
}

