#include <iostream>
using namespace std;


int main()
{
	int x,sisa,bagi,y;
	cout << "------------------------------------" << endl;
	cout << " PROGRAM KONVERSI SISTEM BILANGAN" << endl;
	cout << "------------------------------------" << endl;
	cout << " | 1. Desimal      ke Biner        |" << endl;
	cout << " | 2. Desimal      ke Oktal        |" << endl;
	cout << " | 3. Desimal      ke Heksadesimal |" << endl;
	cout << " | 4. Biner        ke Desimal      |" << endl;
	cout << " | 5. Oktal        ke Desimal      |" << endl;
	cout << " | 6. Heksadesimal ke Desimal      |" << endl;
	cout << "------------------------------------" << endl;
	cout << "Masukkan Angka: ";
	cin  >> y;

	//Desimal ke Biner 
	if ( y == 1 ){
	cout << "\n    ----------------" << endl;
	cout << "    Desimal ke Biner" << endl;
	cout << "    ----------------" << endl;
	cout << "Masukkan Bilangan Desimal: ";
	cin >> x;
	cout << endl;
	for( int i = 1;  i <= x; i--){
		sisa = x % 2;
		x = x / 2;
		cout << " | Bilangan Biner Anda: " << sisa << " |"  << endl;
		if ( x == 0 ){
			break;
		}
	}
	cout << endl;
	cout << "Ambil dari Bawah ke Atas" << endl;
}

	//desimal ke Oktal
	if ( y == 2 ){
	cout << "\n    ----------------" << endl;
	cout << "    Desimal ke Oktal" << endl;
	cout << "    ----------------" << endl;
	cout << "Masukkan Bilangan Desimal: ";
	cin >> x;
	cout << endl;
	for( int i = 1;  i <= x; i--){
		sisa = x % 8;
		x = x / 8;
		cout << " | Bilangan Oktal Anda: " << sisa << " |"  << endl;
		if ( x == 0 ){
			break;
		}
	}
	cout << endl;
	cout << "Ambil dari Bawah ke Atas" << endl;
}

//desimal ke Heksadesimal
	if ( y == 3 ){
	cout << "\n    -----------------------" << endl;
	cout << "    Desimal ke Heksadesimal" << endl;
	cout << "    -----------------------" << endl;
	cout << "Masukkan Bilangan Desimal: ";
	cin >> x;
	cout << endl;
	for( int i = 1;  i <= x; i--){
		sisa = x % 16;
		x = x / 16;
		if ( sisa < 10 ){
		cout << " | Bilangan Heksadesimal Anda: " << sisa << " |"  << endl;
		}
		if ( sisa == 10 ){
			cout << " | Bilangan Heksadesimal Anda: A |" << endl;
		}
		if ( sisa == 11 ){
			cout << " | Bilangan Heksadesimal Anda: B |" << endl;
		}
		if ( sisa == 12 ){
			cout << " | Bilangan Heksadesimal Anda: C |" << endl;
		}
		if ( sisa == 13 ){
			cout << " | Bilangan Heksadesimal Anda: D |" << endl;
		}
		if ( sisa == 14 ){
			cout << " | Bilangan Heksadesimal Anda: E |" << endl;
		}
		if ( sisa == 15 ){
			cout << " | Bilangan Heksadesimal Anda: F |" << endl;
		}
		if ( x == 0 ){
			break;
		}
	}
	cout << endl;
	cout << "Ambil dari Bawah ke Atas" << endl;
}

 	// Biner   ke Desimal
 	if ( y == 4 ){
	cout << "\n    ----------------" << endl;
	cout << "    Biner ke Desimal" << endl;
	cout << "    ----------------" << endl;
	cout << endl;
	cout << "Bilangan Biner ( 0 dan 1 ) ke Bilangan Desimal" << endl;
	cout << endl;
	cout << "Ketik 1  jika bilanganya satu     angka" << endl;
	cout << "Ketik 2  jika bilanganya dua      angka" << endl;
	cout << "Ketik 3  jika bilanganya tiga     angka" << endl;
	cout << "Ketik 4  jika bilanganya empat    angka" << endl;
	cout << "Ketik 5  jika bilanganya lima     angka" << endl;
	cout << "Ketik 6  jika bilanganya enam     angka" << endl;
	cout << "Ketik 7  jika bilanganya tujuh    angka" << endl;
	cout << "Ketik 8  jika bilanganya delapan  angka" << endl;
	cout << "Ketik 9  jika bilanganya sembilan angka" << endl;
	cout << "Ketik 10 jika bilanganya sepuluh  angka" << endl;
	cout << endl;
	cout << "Masukkan angka: ";
	cin >> x;
	//satuangka
	if ( x == 1 ){//Binert
	int a,hasil;
	cout << "---------------------------------" << endl;
	cout << "Masukkan Bilangan pertama       : ";
	cin >> a;
	if (a < 2 and a > -1){
	cout << "Bilangan Biner yang anda maksud : " << a << endl;
	hasil = 1 * a;
	cout << "Bilangan Desimalnya adalah      : " << hasil << endl;
	cout << "---------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}//biner

	//dua angka
	if ( x == 2 ){//Binert
	int a,b,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	if (b < 2 and b > -1){
	cout << "Bilangan Biner yang anda maksud              : " << a << b << endl;
	hasil = (2 * a) + (1 * b);
	cout << "Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}//biner

	//tiga angka
	if ( x == 3 ){//Binert
	int a,b,c,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga                     : ";
	cin >> c;
	if (b < 2 and b > -1){
	cout << "Bilangan Biner yang anda maksud              : " << a << b << c << endl;
	hasil = (4 * a) + (2 * b) + (1 * c) ;
	cout << "Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}//biner

	//empat angka
	if ( x == 4 ){//Binert
	int a,b,c,d,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "Masukkan Bilangan keempat                    : ";
	cin >> d;
	if (b < 2 and b > -1){
	cout << "Bilangan Biner yang anda maksud              : " << a << b << c << d << endl;
	hasil = (8 * a) + (4 * b) + (2 * c) + (1 * d) ;
	cout << "Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}//biner

	//lima angka
	if ( x == 5 ){//Binert
	int a,b,c,d,e,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "Masukkan Bilangan kelima                     : ";
	cin >> e;
	if (b < 2 and b > -1){
	cout << "Bilangan Biner yang anda maksud              : " << a << b << c << d << e << endl;
	hasil = (16 * a) + (8 * b) + (4 * c) + (2 * d) + (1 * e) ;
	cout << "Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}//biner

	//enam angka
	if ( x == 6 ){//Binert
	int a,b,c,d,e,f,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "Masukkan Bilangan keenam                     : ";
	cin >> f;
	if (b < 2 and b > -1){
	cout << "Bilangan Biner yang anda maksud              : " << a << b << c << d << e << f << endl;
	hasil = (32 * a) + (16 * b) + (8 * c) + (4 * d) + (2 * e) + (1 * f) ;
	cout << "Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}//biner

	//tujuh angka
	if ( x == 7 ){//Binert
	int a,b,c,d,e,f,g,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	if (b < 2 and b > -1){
	cout << "Bilangan biner yang anda maksud              : " << a << b << c << d << e << f << g << endl;
	hasil = (64 * a) + (32 * b) + (16 * c) + (8 * d) + (4 * e) + (2 * f) + (1 * g);
	cout << "Bilangan desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}//biner

	//delapan angka
	if ( x == 8 ){//Binert
	int a,b,c,d,e,f,g,h,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	if (b < 2 and b > -1){
	cout << "Bilangan biner yang anda maksud              : " << a << b << c << d << e << f << g << h << endl;
	hasil = (128 * a) + (64 * b) + (32 * c) + (16 * d) + (8 * e) + (4 * f) + (2 * g) + (h * 1);
	cout << "Bilangan desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}//biner

	//sembilan angka
	if ( x == 9 ){//Binert
	int a,b,c,d,e,f,g,h,i,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	cout << "Masukkan Bilangan kesembilan                 : ";
	cin >> i;
	if (b < 2 and b > -1){
	cout << "Bilangan biner yang anda maksud              : " << a << b << c << d << e << f << g << h  << i << endl;
	hasil = (256 * a) + (128 * b) + (64 * c) + (32 * d) + (16 * e) + (8 * f) + (4 * g) + (h * 2) + (i * 1);
	cout << "Bilangan desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}//biner

	//sembilan angka
	if ( x == 10 ){//Binert
	int a,b,c,d,e,f,g,h,i,j,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	cout << "Masukkan Bilangan kesembilan                 : ";
	cin >> i;
	cout << "Masukkan Bilangan kesepuluh                  : ";
	cin >> j;
	if (b < 2 and b > -1){
	cout << "Bilangan biner yang anda maksud              : " << a << b << c << d << e << f << g << h  << i << j << endl;
	hasil = (512 * a) + (256 * b) + (128 * c) + (64 * d) + (32 * e) + (16 * f) + (8 * g) + (h * 4) + (i * 2) + (j * 1);
	cout << "Bilangan desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}//biner
}

// Oktal   ke Desimal
 	if ( y == 5 ){//awalif
	cout << "\n    ----------------" << endl;
	cout << "    Oktal ke Desimal" << endl;
	cout << "    ----------------" << endl;
	cout << endl;
	cout << "Bilangan Oktal ( 1 - 7 ) ke Bilangan Desimal" << endl;
	cout << endl;
	cout << "Ketik 1 jika bilanganya  satu     angka" << endl;
	cout << "Ketik 2 jika bilanganya  dua      angka" << endl;
	cout << "Ketik 3 jika bilanganya  tiga     angka" << endl;
	cout << "Ketik 4 jika bilanganya  empat    angka" << endl;
	cout << "Ketik 5 jika bilanganya  lima     angka" << endl;
	cout << "Ketik 6 jika bilanganya  enam     angka" << endl;
	cout << "Ketik 7 jika bilanganya  tujuh    angka" << endl;
	cout << "Ketik 8 jika bilanganya  delapan  angka" << endl;
	cout << "Ketik 9 jika bilanganya  sembilan angka" << endl;
	cout << "Ketik 10 jika bilanganya sembilan angka" << endl;
	cout << endl;
	cout << "Masukkan angka: ";
	cin >> x;


	//satuangka
	if ( x == 1 ){
	long a,hasil;
	cout << "---------------------------------" << endl;
	cout << "Masukkan Bilangan pertama       : ";
	cin >> a;
	if (a < 8 and a > -1 ){
	cout << "Bilangan Oktal yang anda maksud : " << a << endl;
	hasil = 1 * a;
	cout << "Bilangan Desimalnya adalah      : " << hasil << endl;
	cout << "---------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

	//dua angka
	if ( x == 2 ){
	long a,b,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	if (b < 8 and a > -1 ){
	cout << "Bilangan Oktal yang anda maksud              : " << a << b << endl;
	hasil = (8 * a) + (1 * b);
	cout << "Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

	//tiga angka
	if ( x == 3 ){//Binert
	long a,b,c,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga                     : ";
	cin >> c;
	if (b < 8 and a > -1 ){
	cout << "Bilangan Oktal yang anda maksud              : " << a << b << c << endl;
	hasil = (64 * a) + (8 * b) + (1 * c) ;
	cout << "Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

	//empat angka
	if ( x == 4 ){//Binert
	long a,b,c,d,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "Masukkan Bilangan keempat                    : ";
	cin >> d;
	if (b < 8 and a > -1 ){
	cout << "Bilangan Oktal yang anda maksud              : " << a << b << c << d << endl;
	hasil = (512 * a) + (64 * b) + (8 * c) + (1 * d) ;
	cout << "Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

	//lima angka
	if ( x == 5 ){
	long a,b,c,d,e,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "Masukkan Bilangan kelima                     : ";
	cin >> e;
	if (b < 8 and a > -1 ){
	cout << "Bilangan Oktal yang anda maksud              : " << a << b << c << d << e << endl;
	hasil = (4096 * a) + (512 * b) + (64 * c) + (8 * d) + (1 * e) ;
	cout << "Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

	//enam angka
	if ( x == 6 ){//Binert
	long a,b,c,d,e,f,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "Masukkan Bilangan keenam                     : ";
	cin >> f;
	if (b < 8 and a > -1 ){
	cout << "Bilangan Oktal yang anda maksud              : " << a << b << c << d << e << f << endl;
	hasil = (32768 * a) + (4090 * b) + (512 * c) + (64 * d) + (8 * e) + (1 * f) ;
	cout << "Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

	//tujuh angka
	if ( x == 7 ){//Binert
	long a,b,c,d,e,f,g,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	if (b < 8 and a > -1 ){
	cout << "Bilangan Oktal yang anda maksud              : " << a << b << c << d << e << f << g << endl;
	hasil = (262144 * a) + (32768 * b) + (4096 * c) + (512 * d) + (64 * e) + (8 * f) + (1 * g);
	cout << "Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

	//delapan angka
	if ( x == 8 ){//Binert
	long a,b,c,d,e,f,g,h,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	if (b < 8 and a > -1 ){
	cout << "Bilangan Oktal yang anda maksud              : " << a << b << c << d << e << f << g << h << endl;
	hasil = (2097152 * a) + (262144 * b) + (32768 * c) + (4096 * d) + (512 * e) + (64 * f) + (8 * g) + (h * 1);
	cout << "Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

	//sembilan angka
	if ( x == 9 ){//Binert
	long a,b,c,d,e,f,g,h,i,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	cout << "Masukkan Bilangan kesembilan                 : ";
	cin >> i;
	if (b < 8 and a > -1 ){
	cout << "Bilangan Oktal yang anda maksud              : " << a << b << c << d << e << f << g << h  << i << endl;
	hasil = (16777216 * a) + (2097152 * b) + (262144 * c) + (32768 * d) + (4096 * e) + (512 * f) + (64 * g) + (h * 8) + (i * 1);
	cout << "Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

	//sembilan angka
	if ( x == 10 ){//Binert
	long a,b,c,d,e,f,g,h,i,j,hasil;
	cout << "----------------------------------------------" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	cout << "Masukkan Bilangan kesembilan                 : ";
	cin >> i;
	cout << "Masukkan Bilangan kesepuluh                  : ";
	cin >> j;
	if (b < 8 and a > -1 ){
	cout << "Bilangan Oktal yang anda maksud              : " << a << b << c << d << e << f << g << h  << i << j << endl;
	hasil = (134217728 * a) + (16777216 * b) + (2097152 * c) + (262144 * d) + (32768 * e) + (4096 * f) + (512 * g) + (h * 64) + (i * 8) + ( j * 1 );
	cout << "Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}
}//akhirif



	//Heksadesimal ke Desimal
	
	if ( y == 6 ){//awalif
	cout << "\n    -----------------------" << endl;
	cout << "    Heksadesimal ke Desimal" << endl;
	cout << "    -----------------------" << endl;
	cout << endl;
	cout << "Bilangan Heksadesimal ( 1 - 15 ) ke Bilangan Desimal" << endl;
	cout << endl;
	cout << "Ketik 1 jika bilanganya  satu     angka" << endl;
	cout << "Ketik 2 jika bilanganya  dua      angka" << endl;
	cout << "Ketik 3 jika bilanganya  tiga     angka" << endl;
	cout << "Ketik 4 jika bilanganya  empat    angka" << endl;
	cout << "Ketik 5 jika bilanganya  lima     angka" << endl;
	cout << "Ketik 6 jika bilanganya  enam     angka" << endl;
	cout << "Ketik 7 jika bilanganya  tujuh    angka" << endl;
	cout << "Ketik 8 jika bilanganya  delapan  angka" << endl;
	cout << "Ketik 9 jika bilanganya  sembilan angka" << endl;
	cout << "Ketik 10 jika bilanganya sembilan angka" << endl;
	cout << endl;
	cout << "Masukkan angka: ";
	cin >> x;

	//satuangka
	if ( x == 1 ){//Binert
	long a,hasil;
	cout << "------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "(A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu angka" << endl;
	cout << endl;
	cout << "--------------------------------------------------------------------" << endl; 
	cout << "         Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	if (a < 16 and a > -1){
	cout << "         Bilangan Heksadesimal yang anda maksud       : " << a << endl;
	hasil = (1 * a);
	cout << "         Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "--------------------------------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

		//satuangka
	if ( x == 2 ){//Binert
	long a,b,hasil;
	cout << "------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "(A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu angka" << endl;
	cout << endl;
	cout << "--------------------------------------------------------------------" << endl; 
	cout << "         Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "         Masukkan Bilangan kedua                      : ";
	cin >> b;
	if (a < 16 and a > -1){
	cout << "         Bilangan Heksadesimal yang anda maksud       : " << a << b << endl;
	hasil = (16 * a) + (1 * b);
	cout << "         Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "--------------------------------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

	//tiga angka
	if ( x == 3 ){//Binert
	long a,b,c,hasil;
	cout << "------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "(A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu angka" << endl;
	cout << endl;
	cout << "--------------------------------------------------------------------" << endl; 
	cout << "         Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "         Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "         Masukkan Bilangan ketiga                     : ";
	cin >> c;
	if (a < 16 and a > -1){
	cout << "         Bilangan Heksadesimal yang anda maksud       : " << a << b << c << endl;
	hasil = (256 * a) + (16 * b) + (1 * c) ;
	cout << "         Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "--------------------------------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

	 //empat angka
	if ( x == 4 ){//Binert
	int a,b,c,d,hasil;
	cout << "------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "(A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu angka" << endl;
	cout << endl;
	cout << "--------------------------------------------------------------------" << endl; 
	cout << "         Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "         Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "         Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "         Masukkan Bilangan keempat                    : ";
	cin >> d;
	if (a < 16 and a > -1){
	cout << "         Bilangan Heksadesimal yang anda maksud       : " << a << b << c << d << endl;
	hasil = (4096 * a) + (256 * b) + (16 * c) + (1 * d) ;
	cout << "         Bilangan Desimalnya adalah: " << hasil << endl;
	cout << "--------------------------------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

//lima angka
	if ( x == 5 ){//Binert
	int a,b,c,d,e,hasil;
	cout << "------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "(A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu angka" << endl;
	cout << endl;
	cout << "--------------------------------------------------------------------" << endl; 
	cout << "         Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "         Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "         Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "         Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "         Masukkan Bilangan kelima                     : ";
	cin >> e;
	if (a < 16 and a > -1){
	cout << "         Bilangan Heksadesimal yang anda maksud       : " << a << b << c << d << e << endl;
	hasil = (65536 * a) + (4096 * b) + (256 * c) + (16 * d) + (1 * e) ;
	cout << "         Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "--------------------------------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

	//enam angka
	if ( x == 6 ){//Binert
	long a,b,c,d,e,f,hasil;
	cout << "------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "(A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu angka" << endl;
	cout << endl;
	cout << "--------------------------------------------------------------------" << endl; 
	cout << "         Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "         Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "         Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "         Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "         Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "         Masukkan Bilangan keenam                     : ";
	cin >> f;
	if (a < 16 and b > -1){
	cout << "         Bilangan Heksadesimal yang anda maksud       : " << a << b << c << d << e << f << endl;
	hasil = (1048576 * a) + (65536 * b) + (4096 * c) + (256 * d) + (16 * e) + (1 * f) ;
	cout << "         Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "--------------------------------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

	//tujuh angka
	if ( x == 7 ){//Binert
	long a,b,c,d,e,f,g,hasil;
	cout << "------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "(A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu angka" << endl;
	cout << endl;
	cout << "--------------------------------------------------------------------" << endl; 
	cout << "         Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "         Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "         Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "         Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "         Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "         Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "         Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	if (a < 16 and a > -1){
	cout << "         Bilangan Heksadesimal yang anda maksud       : " << a << b << c << d << e << f << g << endl;
	hasil = (16777216 * a) + ( 1048576 * b) + (65536 * c) + (4096 * d) + (256 * e) + (16 * f) + (1 * g);
	cout << "         Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "--------------------------------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

	//delapan angka
	if ( x == 8 ){//Binert
	long a,b,c,d,e,f,g,h,hasil;
	cout << "------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "(A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu angka" << endl;
	cout << endl;
	cout << "--------------------------------------------------------------------" << endl; 
	cout << "         Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "         Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "         Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "         Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "         Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "         Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "         Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "         Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	if (a < 16 and a > -1){
	cout << "         Bilangan Heksadesimal yang anda maksud       : " << a << b << c << d << e << f << g << h << endl;
	hasil = (268435456 * a) + (16777216 * b) + (1048576 * c) + (65536 * d) + (4096 * e) + (256 * f) + (16 * g) + (h * 1);
	cout << "         Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "--------------------------------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

	//sembilan angka
	if ( x == 9 ){//Binert
	long a,b,c,d,e,f,g,h,i,hasil;
	cout << "------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "(A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu angka" << endl;
	cout << endl;
	cout << "--------------------------------------------------------------------" << endl; 
	cout << "         Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "         Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "         Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "         Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "         Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "         Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "         Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "         Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	cout << "         Masukkan Bilangan kesembilan                 : ";
	cin >> i;
	if (a < 16 and a > -1){
	cout << "         Bilangan Heksadesimal yang anda maksud       : " << a << b << c << d << e << f << g << h  << i << endl;
	hasil = (4294967296 * a) + (268435456 * b) + (16777216 * c) + (1048576 * d) + (65536 * e) + (4096 * f) + (256 * g) + (16 * h) + (i * 1);
	cout << "         Bilangan desimalnya adalah                   : " << hasil << endl;
	cout << "--------------------------------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}

	//sembilan angka
	if ( x == 10 ){//Binert
	long a,b,c,d,e,f,g,h,i,j,hasil;
	cout << "------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "(A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu angka" << endl;
	cout << endl;
	cout << "--------------------------------------------------------------------" << endl; 
	cout << "         Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "         Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "         Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "         Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "         Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "         Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "         Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "         Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	cout << "         Masukkan Bilangan kesembilan                 : ";
	cin >> i;
	cout << "         Masukkan Bilangan kesepuluh                  : ";
	cin >> j;
	if (a < 16 and a > -1){
	cout << "         Bilangan Heksadesimal yang anda maksud       : " << a << b << c << d << e << f << g << h  << i << j << endl;
	hasil = (68719476736 * a) + (4294967296 * b) + (268435456 * c) + (16777216 * d) + (1048576 * e) + (65536 * f) + (4096 * g) + (256 * h) + (16 * i) + (j * 1);
	cout << "         Bilangan desimalnya adalah                   : " << hasil << endl;
	cout << "--------------------------------------------------------------------" << endl;
	}
	else {
	cout << "--------------" << endl;
	cout << "Tidak Tersedia" << endl;
	cout << "--------------" << endl;
	}
	}
	

	






}//akhirIf





	
	
	



	system("Pause");
	return 0;
}
