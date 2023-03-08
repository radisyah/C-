#include <iostream>

using namespace std;

int main()
{
	int x;
	cout << "Bilangan Oktal ( 1- 7 ) ke Bilangan Desimal" << endl;
	cout << "Ketik 1 jika bilanganya satu angka" << endl;
	cout << "Ketik 2 jika bilanganya dua angka" << endl;
	cout << "Ketik 3 jika bilanganya tiga angka" << endl;
	cout << "Ketik 4 jika bilanganya empat angka" << endl;
	cout << "Ketik 5 jika bilanganya lima angka" << endl;
	cout << "Ketik 6 jika bilanganya enam angka" << endl;
	cout << "Ketik 7 jika bilanganya tujuh angka" << endl;
	cout << "Ketik 8 jika bilanganya delapan angka" << endl;
	cout << "Ketik 9 jika bilanganya sembilan angka" << endl;
	cout << "Masukkan angka: ";
	cin >> x;


	//satuangka
	if ( x == 1 ){//Binert
	int a,hasil;
	cout << "\nBilangan Oktal ke Desimal" << endl;
	cout << "Masukkan Bilangan pertama: ";
	cin >> a;
	if (a < 8 and a > -1 ){
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
	cout << "\nBilangan Oktal ke Desimal" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan: ";
	cin >> a;
	cout << "Masukkan Bilangan kedua: ";
	cin >> b;
	if (b < 8 and a > -1 ){
	cout << "Bilangan biner yang anda maksud: " << a << b << endl;
	hasil = (8 * a) + (1 * b);
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//tiga angka
	if ( x == 3 ){//Binert
	int a,b,c,hasil;
	cout << "\nBilangan Oktal ke Desimal" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan: ";
	cin >> a;
	cout << "Masukkan Bilangan kedua: ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga: ";
	cin >> c;
	if (b < 8 and a > -1 ){
	cout << "Bilangan biner yang anda maksud: " << a << b << c << endl;
	hasil = (64 * a) + (8 * b) + (1 * c) ;
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//empat angka
	if ( x == 4 ){//Binert
	int a,b,c,d,hasil;
	cout << "\nBilangan Oktal ke Desimal" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan: ";
	cin >> a;
	cout << "Masukkan Bilangan kedua: ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga: ";
	cin >> c;
	cout << "Masukkan Bilangan keempat: ";
	cin >> d;
	if (b < 8 and a > -1 ){
	cout << "Bilangan biner yang anda maksud: " << a << b << c << d << endl;
	hasil = (512 * a) + (64 * b) + (8 * c) + (1 * d) ;
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//lima angka
	if ( x == 5 ){//Binert
	int a,b,c,d,e,hasil;
	cout << "\nBilangan Oktal ke Desimal" << endl;
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
	if (b < 8 and a > -1 ){
	cout << "Bilangan biner yang anda maksud: " << a << b << c << d << e << endl;
	hasil = (4096 * a) + (512 * b) + (64 * c) + (8 * d) + (1 * e) ;
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//enam angka
	if ( x == 6 ){//Binert
	int a,b,c,d,e,f,hasil;
	cout << "\nBilangan Oktal ke Desimal" << endl;
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
	if (b < 8 and a > -1 ){
	cout << "Bilangan biner yang anda maksud: " << a << b << c << d << e << f << endl;
	hasil = (32768 * a) + (4090 * b) + (512 * c) + (64 * d) + (8 * e) + (1 * f) ;
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//tujuh angka
	if ( x == 7 ){//Binert
	int a,b,c,d,e,f,g,hasil;
	cout << "\nBilangan Oktal ke Desimal" << endl;
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
	if (b < 8 and a > -1 ){
	cout << "Bilangan biner yang anda maksud: " << a << b << c << d << e << f << g << endl;
	hasil = (262144 * a) + (32768 * b) + (4096 * c) + (512 * d) + (64 * e) + (8 * f) + (1 * g);
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//delapan angka
	if ( x == 8 ){//Binert
	int a,b,c,d,e,f,g,h,hasil;
	cout << "\nBilangan Oktal ke Desimal" << endl;
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
	if (b < 8 and a > -1 ){
	cout << "Bilangan biner yang anda maksud: " << a << b << c << d << e << f << g << h << endl;
	hasil = (2097152 * a) + (262144 * b) + (32768 * c) + (4096 * d) + (512 * e) + (64 * f) + (8 * g) + (h * 1);
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//sembilan angka
	if ( x == 9 ){//Binert
	int a,b,c,d,e,f,g,h,i,hasil;
	cout << "\nBilangan Oktal ke Desimal" << endl;
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
	if (b < 8 and a > -1 ){
	cout << "Bilangan Oktal yang anda maksud: " << a << b << c << d << e << f << g << h  << i << endl;
	hasil = (16777216 * a) + (2097152 * b) + (262144 * c) + (32768 * d) + (4096 * e) + (512 * f) + (64 * g) + (h * 8) + (i * 1);
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner
	
	

	

	

		
	system("Pause");
}