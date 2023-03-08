#include <iostream>
#include <conio.h>
#include <Queue>
using namespace std;

int main(){
  queue<int> Q;
  for(int i=0; i<5; i++){
    Q.push(i);
    cout << "Contents:";
    do{
      cout << ' ' << Q.front();
      Q.pop();
    }while(!Q.empty());
    cout << '\n';
  }
  getch();
  return 0;
}