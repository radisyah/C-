#include <iostream>
#include <conio.h>
using namespace std;

float tambah(float x, float y); /* deklarasi fungsi tambah */
int main(){

    float a, b, c;
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;
  
    c = tambah(a, b); /* pemanggilan fungsi tambah() */
    cout << "A + B = " << c;
    getch();
}

float tambah(float x, float y) { /* Lokasi eksekusi fungsi */
    return (x + y); /* Nilai balik fungsi berupa statement */
}