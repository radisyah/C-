#include <iostream>
#include <stack>
#include <conio.h>
using namespace std;
int main(){
  stack<int> S;
  
  for (int i=0; i<5; i++){
    S.push(i);
    cout << "Contents:";
    do
    {
      cout << ' ' << S.top();
      S.pop();
    } while (!S.empty());
      cout << '\n';
  }

  getch();
  return 0;
}