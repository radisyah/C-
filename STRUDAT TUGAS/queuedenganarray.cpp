#include <iostream>
using namespace std;

int maksimalAntrianArray = 5, front = 0, back = 0;
string antrianAtm[5];

bool isFullArray(){
  if(back==maksimalAntrianArray){
    return true;
  }else{
    return false;
  }
}

bool isEmptyArray(){
  if(back==0){
    return true;
  }else{
    return false;
  }
}

void enqueArray(string data){
  if(isFullArray()){
    cout << "Antrian penuh!!" << endl;
  }else{
    if(isEmptyArray()==true){
      antrianAtm[0] = data;
      front++;
      back++;
    }else{
      antrianAtm[back] = data;
      back++;
    }
  }
}

void viewArray(){
  cout << "Data Antrian Atm: " << endl;
  for(int i=0; i< maksimalAntrianArray; i++){
    if(antrianAtm[i] != ""){
      cout << i+1 << ". " << antrianAtm[i] << endl;
    }else{
      cout << i+1 << ". (kosong)" << endl;
    }
  }
}

int main(){
  enqueArray("mamat");
  viewArray();
}