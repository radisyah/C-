#include <iostream>
#include <fstream>
#include <vcl.h>
#include <stdio.h>
#include <conio.h>
#include <list>
#pragma argsused
#pragma hdrstop

using namespace std;

int main(int argc, char* argv[]){
  int n;
  int i;
  list <int> naik, turun;

  cout << "Jumlah Data: ";
  cin >> n;

  int data[200];
  for (i=0; i<n; i++){
    cout << "Data ke " << i << " = " << i+1;
    cin >> data[i];
  }
  cout << "\n\n";

  // output data awal
  for (i=0; i<n; i++){
    cout << data[i];
    naik.push_front(data[i]);
  }
  cout << "\n\n";
  naik.sort();

  // output data naik
  for(i=0; i<n; i++){
    cout << naik.front(); turun.push_back(data[i]);
    naik.pop_front();
  }

  cout << ("\n\n");
  turun.sort();

  // output data turun
  for (i=0; i<n; i++){
    cout << turun.back();
    turun.pop_back();
  }

  getch();
  return 0;
}