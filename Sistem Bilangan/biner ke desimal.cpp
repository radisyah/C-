#include <iostream>

using namespace std;

int main()
{
	int x;
	cout << "Bilangan Biner ( 0 dan 1 ) ke Bilangan Desimal" << endl;
	cout << "Ketik 1 jika bilanganya satu angka" << endl;
	cout << "Ketik 2 jika bilanganya dua angka" << endl;
	cout << "Ketik 3 jika bilanganya tiga angka" << endl;
	cout << "Ketik 4 jika bilanganya empat angka" << endl;
	cout << "Ketik 5 jika bilanganya lima angka" << endl;
	cout << "Ketik 6 jika bilanganya enam angka" << endl;
	cout << "Ketik 7 jika bilanganya tujuh angka" << endl;
	cout << "Ketik 8 jika bilanganya delapan angka" << endl;
	cout << "Ketik 9 jika bilanganya sembilan angka" << endl;
	cout << "Ketik 10 jika bilanganya sepuluh angka" << endl;
	cout << "Masukkan angka: ";
	cin >> x;


	//satuangka
	if ( x == 1 ){//Binert
	int a,hasil;
	cout << "\nBilangan Biner ke Desimal" << endl;
	cout << "Masukkan Bilangan pertama: ";
	cin >> a;
	if (a < 2 and a > -1){
	cout << "Bilangan biner yang anda maksud: " << a << endl;
	hasil = 1 * a;
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//dua angka
	if ( x == 2 ){//Binert
	int a,b,hasil;
	cout << "\nBilangan Biner ke Desimal" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan: ";
	cin >> a;
	cout << "Masukkan Bilangan kedua: ";
	cin >> b;
	if (b < 2 and b > -1){
	cout << "Bilangan biner yang anda maksud: " << a << b << endl;
	hasil = (2 * a) + (1 * b);
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//tiga angka
	if ( x == 3 ){//Binert
	int a,b,c,hasil;
	cout << "\nBilangan Biner ke Desimal" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan: ";
	cin >> a;
	cout << "Masukkan Bilangan kedua: ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga: ";
	cin >> c;
	if (b < 2 and b > -1){
	cout << "Bilangan biner yang anda maksud: " << a << b << c << endl;
	hasil = (4 * a) + (2 * b) + (1 * c) ;
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//empat angka
	if ( x == 4 ){//Binert
	int a,b,c,d,hasil;
	cout << "\nBilangan Biner ke Desimal" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan: ";
	cin >> a;
	cout << "Masukkan Bilangan kedua: ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga: ";
	cin >> c;
	cout << "Masukkan Bilangan keempat: ";
	cin >> d;
	if (b < 2 and b > -1){
	cout << "Bilangan biner yang anda maksud: " << a << b << c << d << endl;
	hasil = (8 * a) + (4 * b) + (2 * c) + (1 * d) ;
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//lima angka
	if ( x == 5 ){//Binert
	int a,b,c,d,e,hasil;
	cout << "\nBilangan Biner ke Desimal" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan: ";
	cin >> a;
	cout << "Masukkan Bilangan kedua: ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga: ";
	cin >> c;
	cout << "Masukkan Bilangan keempat: ";
	cin >> d;
	cout << "Masukkan Bilangan kelima: ";
	cin >> e;
	if (b < 2 and b > -1){
	cout << "Bilangan biner yang anda maksud: " << a << b << c << d << e << endl;
	hasil = (16 * a) + (8 * b) + (4 * c) + (2 * d) + (1 * e) ;
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//enam angka
	if ( x == 6 ){//Binert
	int a,b,c,d,e,f,hasil;
	cout << "\nBilangan Biner ke Desimal" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan: ";
	cin >> a;
	cout << "Masukkan Bilangan kedua: ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga: ";
	cin >> c;
	cout << "Masukkan Bilangan keempat: ";
	cin >> d;
	cout << "Masukkan Bilangan kelima: ";
	cin >> e;
	cout << "Masukkan Bilangan keenam: ";
	cin >> f;
	if (b < 2 and b > -1){
	cout << "Bilangan biner yang anda maksud: " << a << b << c << d << e << f << endl;
	hasil = (32 * a) + (16 * b) + (8 * c) + (4 * d) + (2 * e) + (1 * f) ;
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//tujuh angka
	if ( x == 7 ){//Binert
	int a,b,c,d,e,f,g,hasil;
	cout << "\nBilangan Biner ke Desimal" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan: ";
	cin >> a;
	cout << "Masukkan Bilangan kedua: ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga: ";
	cin >> c;
	cout << "Masukkan Bilangan keempat: ";
	cin >> d;
	cout << "Masukkan Bilangan kelima: ";
	cin >> e;
	cout << "Masukkan Bilangan keenam: ";
	cin >> f;
	cout << "Masukkan Bilangan ketujuh: ";
	cin >> g;
	if (b < 2 and b > -1){
	cout << "Bilangan biner yang anda maksud: " << a << b << c << d << e << f << g << endl;
	hasil = (64 * a) + (32 * b) + (16 * c) + (8 * d) + (4 * e) + (2 * f) + (1 * g);
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//delapan angka
	if ( x == 8 ){//Binert
	int a,b,c,d,e,f,g,h,hasil;
	cout << "\nBilangan Biner ke Desimal" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan: ";
	cin >> a;
	cout << "Masukkan Bilangan kedua: ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga: ";
	cin >> c;
	cout << "Masukkan Bilangan keempat: ";
	cin >> d;
	cout << "Masukkan Bilangan kelima: ";
	cin >> e;
	cout << "Masukkan Bilangan keenam: ";
	cin >> f;
	cout << "Masukkan Bilangan ketujuh: ";
	cin >> g;
	cout << "Masukkan Bilangan kedelapan: ";
	cin >> h;
	if (b < 2 and b > -1){
	cout << "Bilangan biner yang anda maksud: " << a << b << c << d << e << f << g << h << endl;
	hasil = (128 * a) + (64 * b) + (32 * c) + (16 * d) + (8 * e) + (4 * f) + (2 * g) + (h * 1);
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//sembilan angka
	if ( x == 9 ){//Binert
	int a,b,c,d,e,f,g,h,i,hasil;
	cout << "\nBilangan Biner ke Desimal" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan: ";
	cin >> a;
	cout << "Masukkan Bilangan kedua: ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga: ";
	cin >> c;
	cout << "Masukkan Bilangan keempat: ";
	cin >> d;
	cout << "Masukkan Bilangan kelima: ";
	cin >> e;
	cout << "Masukkan Bilangan keenam: ";
	cin >> f;
	cout << "Masukkan Bilangan ketujuh: ";
	cin >> g;
	cout << "Masukkan Bilangan kedelapan: ";
	cin >> h;
	cout << "Masukkan Bilangan kesembilan: ";
	cin >> i;
	if (b < 2 and b > -1){
	cout << "Bilangan biner yang anda maksud: " << a << b << c << d << e << f << g << h  << i << endl;
	hasil = (256 * a) + (128 * b) + (64 * c) + (32 * d) + (16 * e) + (8 * f) + (4 * g) + (h * 2) + (i * 1);
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//sembilan angka
	if ( x == 10 ){//Binert
	int a,b,c,d,e,f,g,h,i,j,hasil;
	cout << "\nBilangan Biner ke Desimal" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan: ";
	cin >> a;
	cout << "Masukkan Bilangan kedua: ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga: ";
	cin >> c;
	cout << "Masukkan Bilangan keempat: ";
	cin >> d;
	cout << "Masukkan Bilangan kelima: ";
	cin >> e;
	cout << "Masukkan Bilangan keenam: ";
	cin >> f;
	cout << "Masukkan Bilangan ketujuh: ";
	cin >> g;
	cout << "Masukkan Bilangan kedelapan: ";
	cin >> h;
	cout << "Masukkan Bilangan kesembilan: ";
	cin >> i;
	cout << "Masukkan Bilangan kesepuluh: ";
	cin >> j;
	if (b < 2 and b > -1){
	cout << "Bilangan biner yang anda maksud: " << a << b << c << d << e << f << g << h  << i << j << endl;
	hasil = (512 * a) + (256 * b) + (128 * c) + (64 * d) + (32 * e) + (16 * f) + (8 * g) + (h * 4) + (i * 2) + (j * 1);
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner
	
	

	

	

		
	system("Pause");
}