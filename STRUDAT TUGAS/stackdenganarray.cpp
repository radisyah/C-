#include <iostream>
using namespace std;

int maks = 5;
string arrayBuku[5];
int top = 0;

bool isFull(){
  if(top==maks){
    return true;
  }else{
    return false;
  }
}

bool isEmpty(){
  if(top==0){
    return true;
  }else{
    return false;
  }
}

void pushArray(string data){
  if(isFull()){
    cout << "Data penuh" << endl;
  }else{
    arrayBuku[top]=data;
    top++;
  }
}

void popArray(){
  if(isEmpty()){
    cout << "Data Kososng" << endl;
  }else{
    arrayBuku[top-1] = "";
    top--;
  }
}

void peekArray(int posisi){
  if(isEmpty()){
    cout << "Data Kosong!!" << endl;
  }else{
    int index=top;
    for(int i = 0; i<posisi; i++){
      index--;
    }
    cout << "Data posisi ke: " << posisi << " " << arrayBuku[index] << endl;
  }
}

void destroyArray(){
  for(int i = 0; i<top; i++){
    arrayBuku[i]="";
  }
  top=0; 
}

void changeArray(string data, int posisi ){
  if(isEmpty()){
    cout << "Data Kosong!!" << endl;
  }else{
    int index=top;
    for(int i = 0; i<posisi; i++){
      index--;
    }
    arrayBuku[index] = data;
  }
}

int countArray(){
  if(isEmpty()){
    return 0;
  }else{
    return top;
  }
}

void displayArray(){
  cout << "Data stack array: " << endl;
  for(int i = maks; i>=0; i--){
    if(arrayBuku[i] != ""){
      cout << "Data: " << arrayBuku[i] << endl;
    }
  }
  cout << "\n";
}

int main(){
  pushArray("Matematika");
  displayArray();
  pushArray("IPA");
  pushArray("IPA2");
  pushArray("IPA3");
  displayArray();

  peekArray(3);
  displayArray();

}