#include <iostream>

using namespace std;

int main()
{
	int x;
	cout << "Bilangan Hekasadesimal ( 1-15 ) ke Bilangan Desimal" << endl;
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

	

	//dua angka
	if ( x == 2 ){//Binert
	int a,b,hasil;
	cout << "\nBilaHeksadesimal ke Desimal ( A=10, B=11, C=12, D=13, E=14, F=15 )" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan: ";
	cin >> a;
	cout << "Masukkan Bilangan kedua: ";
	cin >> b;
	if (a < 16 and a > -1){
	cout << "Bilangan heksadesimal yang anda maksud: " << a << b << endl;
	hasil = (16 * a) + (1 * b);
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//tiga angka
	if ( x == 3 ){//Binert
	int a,b,c,hasil;
	cout << "\nBilangan Heksadesimal ke Desimal ( A=10, B=11, C=12, D=13, E=14, F=15 )" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan: ";
	cin >> a;
	cout << "Masukkan Bilangan kedua: ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga: ";
	cin >> c;
	if (a < 16 and a > -1){
	cout << "Bilangan heksadesimal yang anda maksud: " << a << b << c << endl;
	hasil = (256 * a) + (16 * b) + (1 * c) ;
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//empat angka
	if ( x == 4 ){//Binert
	int a,b,c,d,hasil;
	cout << "\nBilangan Heksadesimal ke Desimal ( A=10, B=11, C=12, D=13, E=14, F=15 )" << endl;
	cout << "Masukkan Bilangan pertama dari kiri ke kanan: ";
	cin >> a;
	cout << "Masukkan Bilangan kedua: ";
	cin >> b;
	cout << "Masukkan Bilangan ketiga: ";
	cin >> c;
	cout << "Masukkan Bilangan keempat: ";
	cin >> d;
	if (a < 16 and a > -1){
	cout << "Bilangan heksadesimal yang anda maksud: " << a << b << c << d << endl;
	hasil = (4096 * a) + (256 * b) + (16 * c) + (1 * d) ;
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//lima angka
	if ( x == 5 ){//Binert
	int a,b,c,d,e,hasil;
	cout << "\nBilangan Heksadesimal ke Desimal ( A=10, B=11, C=12, D=13, E=14, F=15 )" << endl;
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
	if (a < 16 and a > -1){
	cout << "Bilangan heksadesimal yang anda maksud: " << a << b << c << d << e << endl;
	hasil = (65536 * a) + (4096 * b) + (256 * c) + (16 * d) + (1 * e) ;
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//enam angka
	if ( x == 6 ){//Binert
	int a,b,c,d,e,f,hasil;
	cout << "\nBilangan Heksadesimal ke Desimal ( A=10, B=11, C=12, D=13, E=14, F=15 )" << endl;
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
	if (a < 16 and b > -1){
	cout << "Bilangan Heksadesimal yang anda maksud: " << a << b << c << d << e << f << endl;
	hasil = (1048576 * a) + (65536 * b) + (4096 * c) + (256 * d) + (16 * e) + (1 * f) ;
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//tujuh angka
	if ( x == 7 ){//Binert
	int a,b,c,d,e,f,g,hasil;
	cout << "\nBilangan Heksadesimal ke Desimal ( A=10, B=11, C=12, D=13, E=14, F=15 )" << endl;
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
	if (a < 16 and a > -1){
	cout << "Bilangan Heksadesimal yang anda maksud: " << a << b << c << d << e << f << g << endl;
	hasil = (16777216 * a) + ( 1048576 * b) + (65536 * c) + (4096 * d) + (256 * e) + (16 * f) + (1 * g);
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//delapan angka
	if ( x == 8 ){//Binert
	int a,b,c,d,e,f,g,h,hasil;
	cout << "\nBilangan Heksadesimal ke Desimal ( A=10, B=11, C=12, D=13, E=14, F=15 )" << endl;
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
	if (a < 16 and a > -1){
	cout << "Bilangan Heksadesimal yang anda maksud: " << a << b << c << d << e << f << g << h << endl;
	hasil = (268435456 * a) + (16777216 * b) + (1048576 * c) + (65536 * d) + (4096 * e) + (256 * f) + (16 * g) + (h * 1);
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner

	//sembilan angka
	if ( x == 9 ){//Binert
	int a,b,c,d,e,f,g,h,i,hasil;
	cout << "\nBilangan Heksadesimal ke Desimal ( A=10, B=11, C=12, D=13, E=14, F=15 )" << endl;
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
	if (a < 16 and a > -1){
	cout << "Bilangan Heksadesimal yang anda maksud: " << a << b << c << d << e << f << g << h  << i << endl;
	hasil = (4294967296 * a) + (268435456 * b) + (16777216 * c) + (1048576 * d) + (65536 * e) + (4096 * f) + (256 * g) + (16 * h) + (i * 1);
	cout << "Bilangan desimalnya adalah: " << hasil << endl;
	}
	else {
	cout << "Tidak Tersedia" << endl;
	}
	}//biner
	
	

	

	

		
	system("Pause");
}