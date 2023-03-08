#include <iostream>

using namespace std;

int main() {//awal main

	// Satu untuk semua

	int x;
	
	
	
	cout << "MENU PROGRAM" << endl;
	cout << "Ketik 1 untuk cek bilangan mutlak" << endl;
	cout << "Ketik 2 untuk cek bilangan positif dan negatif" << endl;
	cout << "Ketik 3 untuk cek dua bilangan mana yang lebih besar" << endl;
	cout << "Ketik 4 untuk cek huruf vokal dan konsonan" << endl;
	cout << "Ketik 5 untuk cek luas dan keliling bangun datar" << endl;
	cout << "Ketik 6 untuk cek titik ordinat x dan y apakah positif,negatif, atau netral" << endl;
	cout << "Ketik 7 untuk cek tiga bilangan mana yang lebih besar" << endl;
	cout << "Ketik 8 untuk cek bilangan yang mau dibaca (1-4)" << endl;
	cout << "Ketik 9 untuk cek Bulan dan jumlah harinya di tahun 2020" << endl;
	cout << "Ketik 10 untuk cek Upah pekerja dalam satu minggu" << endl; 
	cout << "Ketik 11 untuk cek bilangan genap dan ganjil" << endl;
	cout << "Ketik 12 untuk cek Indeks Nilai" << endl;
	cout << "Ketik 13 untuk cek Perhitungan Dasar dua bilangan" << endl;
	cout << "Ketik 14 untuk cek Tahun Karbisat" << endl;
	cout << "Ketik 15 untuk cek Temperatur air" << endl;
	cout << "Ketik 16 untuk cek Deret Fibonacci" << endl;
	cout << "Ketik 17 untuk cek rata-rata" << endl;
	cout << "Masukkan angka: ";
	cin >> x;
	
	//NILAI MUTLAK //
	   int a; //nilai mutlak
	   int hasil;//nilai mutlak
	   if ( x == 1 ) {//awal no 1
	   cout << "Cek nilai mutlak suatu angka" << endl;
	   cout << "Masukkan Angka : ";
	   cin >> a;

	   if ( a < 1 ){
	   hasil = a*-1;
	   cout << "Nilai Mutlaknya = " << hasil << endl;
       } if ( !(a < 1) ) {	
	   cout << "Nilai Mutlaknya = " << a << endl;
	   }
	   }//akhir no 1


	//positif dan negatif//
	  int b;//positif dan negatif	
	  if ( x == 2 ){// awal no 2
	  cout << "Cek Bilangan Positif dan Negatif" << endl;
   	  cout << "Masukkan Angka ";
	  cin >> b;
	  if ( b < 0 ) {
      cout << "Angka yag dimasukkan Negatif yakni = " << b << endl;
	  }
	  else
	  if ( b > 0 ) {
      cout << "Angka yang dimasukkan Positif yakni = " << b << endl;
	  }
	  }//akhir no 2

	//dua bilangan yang lebih besar
	  int c;//dua bilangan mana yang lebih besar
	  int d;//dua bilangan mana yang lebih besar
	  if ( x == 3 ){ // awal no 3
	  cout << "Cek bilangan mana yang lebih besar" << endl;
	  cout << "Masukkan Angka Pertama: ";
	  cin >> c;
	  cout << "Masukkan Angka Kedua: ";
	  cin >> d;
	  if ( c > d ) {
      cout << "Angka Pertama Lebih Besar dari Angka Kedua " << "( " <<  c << " > " << d << " )" << endl;
	  }  else if ( c < d ) {
      cout << "Angka Kedua Lebih Besar dari Angka Pertama " << "( " <<  d << " > " << c << " )" << endl;
	  } 
	   else if ( c == d ) {
		cout << "Angka Pertama samadengan Angka Kedua " << "( " <<  c << " = " << d << " )" << endl;
	  }
      }//akhir no 3

      //cek huruf vokal dan konsonan
      int mulai;//huruf vokal dan konsonan
      if ( x == 4 ){ //awal no 4
      	cout << "Cek huruf vokal dan konsonan" << endl;
      	cout << "Ketik 1 untuk mengecek semua huruf" << endl;
      	cout << "Ketik: ";
      	cin >> mulai;
      	if (mulai == 1) {
      	cout << " a adalah huruf vokal" << endl;
      	cout << " b adalah huruf konsonan" << endl;
      	cout << " c adalah huruf konsonan" << endl;
      	cout << " d adalah huruf konsonan" << endl;
      	cout << " e adalah huruf vokal" << endl;
      	cout << " f adalah huruf konsonan" << endl;
      	cout << " g adalah huruf konsonan" << endl;
      	cout << " h adalah huruf konsonan" << endl;
      	cout << " i adalah huruf vokal" << endl;
      	cout << " j adalah huruf konsonan" << endl;
      	cout << " k adalah huruf konsonan" << endl;
      	cout << " l adalah huruf konsonan" << endl;
      	cout << " m adalah huruf konsonan" << endl;
      	cout << " n adalah huruf konsonan" << endl;
      	cout << " o adalah huruf vokal" << endl;
      	cout << " p adalah huruf konsonan" << endl;
      	cout << " q adalah huruf konsonan" << endl;
      	cout << " r adalah huruf konsonan" << endl;
      	cout << " s adalah huruf konsonan" << endl;
      	cout << " t adalah huruf konsonan" << endl;
      	cout << " u adalah huruf vokal" << endl;
      	cout << " v adalah huruf konsonan" << endl;
      	cout << " w adalah huruf konsonan" << endl;
      	cout << " x adalah huruf konsonan" << endl;
      	cout << " y adalah huruf konsonan" << endl;
      	cout << " z adalah huruf konsonan" << endl;
  		} else {
  		cout << "Tidak Tersedia" << endl;
  		}
        }//akhir no 4

        
        //Cek Luas dan Keliling Bangun Datar
    	if ( x == 5 ){//awalm05
    	int p;
    	cout << "Menu Program" << endl;
    	cout << "Ketik 1 untuk cek luas dan keliling Persegi " << endl;
    	cout << "Ketik 2 untuk cek luas dan keliling Persegi Panjang " << endl;
    	cout << "Ketik 3 untuk cek luas dan keliling Segitiga " << endl;
    	cout << "Ketik 4 untuk cek luas dan keliling lingkaran" << endl;
    	cout << "Ketik 5 untuk cek luas dan keliling Trapesium" << endl;
    	cout << "Masukkan Angka: ";
    	cin >> p;

    	//Tidak MEMENUHI
    	if ( p > 5 ){//selesai
    	cout << "Tidak Memenuhi" << endl;
    	}//selesai
    	if ( p < 1 ){//selesai
    	cout << "Tidak Memenuhi" << endl;
    	}//selesai
    	
    	//luas dan keliling Persegi
    	if ( p == 1 ){//awalp
    	float p;
    	float s;
    	float l;
    	float k;
    	cout << "luas dan keliling Persegi" << endl;
    	cout << "Masukkan sisi: ";
    	cin >> s;
    	l = s*s;
    	cout << "Luas persegi adalah " << l << endl;
    	k = 4*s;
    	cout << "Keliling persegi adalah " << k << endl;
    	}//akhirp

    	//Luas dan keliling persegi panjang
    	if ( p == 2 ){//awalpp
    	float p;
    	float ll;
    	float l;
    	float k;
    	cout << "luas dan keliling Persegi Panjang" << endl;
    	cout << "Masukkan panjang: ";
    	cin >> p;
    	cout << "Masukkan lebar: ";
    	cin >> ll;
    	l = p*ll;
    	cout << "Luas persegi panjang adalah " << l << endl;
    	k = 2*(p+ll);
    	cout << "Keliling persegi adalah " << k << endl;
    	}//akhirpp

    	//Luas dan keliling Segitiga
    	if ( p == 3 ){//lsg
    	float a;
    	float t;
    	float l;
    	float x;

    	cout << "luas dan keliling Segitiga" << endl;
    	cout << "Masukkan alas: ";
    	cin >> a;
    	cout << "Masukkan tinggi: ";
    	cin >> t;
    	l = ( a * t ) / 2 ;
    	cout << "Luas Segitiga adalah " << l << endl;
    	cout << "Ketik 1 untuk mengetahui keliling" << endl;
    	cout << "Ketik 2 untuk menghentikan program" << endl;
    	cout << "Masukkan angka: ";
    	cin >> x;

    	//keliling Segitiga
    	if ( x == 1 ){//klsg
    	float s1;
    	float s2;
    	float s3;
    	float k;

    	cout << "Keliling Segitiga" << endl;
    	cout << "Masukkan sisi pertama: ";
    	cin >> s1;
    	cout << "Masukkan sisi kedua: ";
    	cin >> s2;
    	cout << "Masukkan sisi ketiga: ";
    	cin >> s3;
    	k = s1 + s2 + s3 ;
    	cout << "Keliling Segitiga adalah " << k << endl; 	
    	}//ksg
    	if ( x == 2 ){//selesai
    	cout << "SELESAI" << endl;
    	}//selesai
    	}//lsg

    	//Luas dan keliling Lingkaran
    	if ( p == 4 ){//awalling
    	float r;
    	float l;
    	float k;
    	cout << "luas dan keliling Lingkaran" << endl;
    	cout << "Masukkan jari-jari: ";
    	cin >> r;
    	l = ( r * r ) * 22/7 ;
    	cout << "Luas lingkaran adalah " << l << endl;
    	k = ( r * 22/7 ) * 2 ;
    	cout << "Keliling lingkaran adalah " << k << endl;
    	}//akhirling

    	//Luas dan keliling Trapesium
    	if ( p == 5){//awaltra
    	int a;
		int b;
		int t;
		int luas;
		cout << "Menghitung Luas Trapesium\n";
		cout << "Masukkan sisi alas: ";
		cin >> a;
		cout << "Masukkan sisi atas: "; 
		cin >> b;
		cout << "Masukkan Tinggi: ";
		cin >> t;
		luas = (a+b)*t;
		cout << "Luas Trapesium adalah " << luas << endl;
		cout << "Ketik 1 untuk mengetahui keliling" << endl;
    	cout << "Ketik 2 untuk menghentikan program" << endl;
    	cout << "Masukkan angka: ";
    	cin >> x;

		//keliling Trapesium
    	if ( x == 1 ){//klsg
    	float s1;
    	float s2;
    	float s3;
    	float s4;
    	float k;
    	cout << "Keliling Trapesium" << endl;
    	cout << "Masukkan sisi alas: ";
    	cin >> s1;
    	cout << "Masukkan sisi kanan: ";
    	cin >> s2;
    	cout << "Masukkan sisi atas: ";
    	cin >> s3;
    	cout << "Masukkan sisi kiri: ";
    	cin >> s4;
    	k = s1 + s2 + s3 + s4 ;
    	cout << "Keliling Trapesium adalah " << k << endl; 	
    	}//ksg
    	if ( x == 2 ){//selesai
    	cout << "SELESAI" << endl;
    	}//selesai
    	}//akhirtr
    	}//akhirno5


    	  	

		//titik ordinat x dan y apakah positif,negatif, atau netral
		if ( x == 6 ) { //awal no 6
		int x;
		int y;

		cout << "Cek titik ordinat x dan y apakah positif,negatif, atau netral" << endl;
		cout << "Masukkan titik ordinat x: ";
		cin >> x;
		cout << "Masukkan titik ordinat y: ";
		cin >> y;
		if ( x == 0 and y == 0) {
		cout << "Titik Ordinat x dan y Netral" << endl;
		} 
		if ( x < 0 and y < 0) {
		cout << "Titik Ordinat x Negatif dan y Negatif" << endl;
		}
		if ( x < 0 and y > 0) {
		cout << "Titik Ordinat x Negatif dan y Positif" << endl;
		}
		if ( x > 0 and y < 0) {
		cout << "Titik Ordinat x Positif dan y Negatif" << endl;
		}
		if ( x > 0 and y > 0) {
		cout << "Titik Ordinat x Positif dan y Positif" << endl;
		}
		if ( x == 0 and y < 0) {
		cout << "Titik Ordinat x Netral dan y Negatif" << endl;
		}
		if ( x == 0 and y > 0) {
		cout << "Titik Ordinat x Netral dan y Positif" << endl;
		}
		if ( x < 0 and y == 0) {
		cout << "Titik Ordinat x Negatif dan y Netral" << endl;
		}
		if ( x > 0 and y == 0) {
		cout << "Titik Ordinat x Positif dan y Netral" << endl;
		}
		}//akhir no 6

		//cek tiga bilangan mana yang lebih besar
		if ( x == 7 ) {//awal no 7
		int x;
		int y;
		int z;
		cout << "cek tiga bilangan mana yang lebih besar" << endl;
		cout << "Masukkan angka pertama: ";
		cin >> x;
		cout << "Masukkan angka kedua: ";
		cin >> y;
		cout << "Masukkan angka ketiga: ";
		cin >> z;
		
		//x y z dan x z y
		if ( x > y and y > z ) {
		cout << x << " lebih besar dari " << y << " dan " << y << " lebih besar dari " << z << endl;
		}
		if ( x > z and z > y ) {
		cout << x << " lebih besar dari " << z << " dan " << z << " lebih besar dari " << y << endl;
		}
		if ( x == y and  x,y  > z ) {
		cout << x << " sama besar dengan " << y << " dan " << "( " << x << " , " << y << " )" << " labih besar dari " << z << endl;
		}
		if ( x == z and x,z > y ) {
		cout << x << " sama besar dengan " << z << " dan " << "( " << x << " , " << z << " )" << " labih besar dari " << y << endl;
		}
		if ( x > y and y == z ) {
		cout << x << " lebih besar dari " << y << " dan " << a << endl;
		}
		if ( x > z and z == y ) {
		cout << x << " lebih besar dari " << z << " dan " << y << endl;
		}

		// y x z and y z x
		if ( y > x and x > z ) {
		cout << y << " lebih besar dari " << x << " dan " << x << " lebih besar dari " << z << endl;
		}
		if ( y > z and z > x ) {
		cout << y << " lebih besar dari " << z << " dan " << z << " lebih besar dari " << x << endl;
		}
		if ( y == x and y,x > z ) {
		cout << y << " sama besar dengan " << x << " dan " << "( " << y << " , " << x << " )" << " labih besar dari " << z << endl;
		}
		if ( y == z and y,z > x ){
		cout << y << " sama besar dengan " << z << " dan " << "( " << y << " , " << z << " )" << " labih besar dari " << x << endl;
		}
		if ( y > x and x == z ) {
		cout << y << " lebih besar dari " << x << " dan " << z << endl;
		}
		if ( y > z and z == x ) {
		cout << y << " lebih besar dari " << z << " dan " << x << endl;
		}



		//z x y dan z y x
		if ( z > x and x > y ) {
		cout << z << " lebih besar dari " << x << " dan " << x << " lebih besar dari " << y << endl;
		}
		if ( z > y and y > x ) {
		cout << z << " lebih besar dari " << y << " dan " << y << " lebih besar dari " << x << endl;
		}
		if ( z == x and z,x > y ) {
		cout << z << " sama besar dengan " << x << " dan " << "( " << z << " , " << x << " )" << " labih besar dari " << y << endl;
		}
		if ( z == y and z,y > x ){
		cout << z << " sama besar dengan " << y << " dan " << "( " << z << " , " << y << " )" << " labih besar dari " << x << endl;
		}
		if ( z > x and x == y ) {
		cout << z << " lebih besar dari " << x << " dan " << y << endl;
		}
		if ( z > y and y == x ) {
		cout << z << " lebih besar dari " << y << " dan " << x << endl;
		}

		//last
		if ( x == y and y == z ){
		cout << x << " sama besar dengan " << y << " dan " << y << " sama besar dengan " << z << endl;
		}
		
		


		}//akhir no 7

		//Cek angka yang akan dibaca (1-4)
		if ( x == 8 ) {//awal no 8
		int a;
		cout << "Cek angka yang akan dibaca (1-4)" << endl;
		cout << "Masukkan Angka: ";
		cin >> a;
		if ( a > 0 and a < 5 ) {//awal
		if ( a == 1 ) {
			cout << a << " dibaca " << "satu" << endl;
		}
		if ( a == 2 ) {
			cout << a << " dibaca " << "dua" << endl;
		}
		if ( a == 3 ) {
			cout << a << " dibaca " << "tiga" << endl;
		}	
		if ( a == 4 ) {
			cout << a << " dibaca " << "empat" << endl;
		}
		}//akhir
		else {
			cout << "Tidak Memenuhi" << endl;
		}
		}//akhir no 8

		//Cek cek Bulan dan jumlah harinya di tahun 2020
		if ( x == 9 ) {//awal no 9
		int a;
		cout << "Cek Bulan dan jumlah harinya di tahun 2020" << endl;
		cout << "Masukkan Angka yang mewakilkan bulan: ";
		cin >> a;
		if ( a > 0 and a < 13 ) {//awal
		if ( a == 1 ) {
			cout << "Bulan Januari yang berjumlah 31 hari" << endl;
		}
		if ( a == 2 ) {
			cout << "Bulan Februarii yang berjumlah 29 hari" << endl;
		}
		if ( a == 3 ) {
			cout << "Bulan Maret yang berjumlah 31 hari" << endl;
		}	
		if ( a == 4 ) {
			cout << "Bulan April yang berjumlah 30 hari" << endl;
		}
		if ( a == 5 ) {
			cout << "Bulan Mei yang berjumlah 31 hari" << endl;
		}
		if ( a == 6 ) {
			cout << "Bulan Juni yang berjumlah 30 hari" << endl;
		}
		if ( a == 7 ) {
			cout << "Bulan Juli yang berjumlah 31 hari" << endl;
		}
		if ( a == 8 ) {
			cout <<"Bulan Agustus yang berjumlah 31 hari" << endl;
		}
		if ( a == 9 ) {
			cout << "Bulan September yang berjumlah 30 hari" << endl;
		}
		if ( a == 10 ) {
			cout << "Bulan Oktober yang berjumlah 31 hari" << endl;
		}
		if ( a == 11 ) {
			cout << "Bulan November yang berjumlah 30 hari" << endl;
		}
		if ( a == 12 ) {
			cout << "Bulan Desember yang berjumlah 31 hari" << endl;
		}
		}//akhir
		else {
			cout << "Tidak Memenuhi" << endl;
		}
		}//akhir no 9

		// cek Upah pekerja dalam satu minggu
		if ( x == 10 ) {//awal no 10
		int x;
		int cek;
		cout << "Cek Upah karyawan dalam satu minggu ( 168 jam )" << endl;
		cout << "Upah karyawa per jam = Rp.4000, jikalau karyawan bekerja lebih dari 48 jam maka upahnya = Rp.3000" << endl;
		cout << "(Hitung Upah karyawan dalam satu minggu tiap jamnya)" << endl;		 
		cout << "Masukkan angka: ";
		cin >> x; 
		if ( x < 49 and x > 0) {//awal
		cek = x*4000;
		cout << "Upah karyawan selama " << x << " jam adalah Rp." << cek << endl;
 		}//akhir
 		if ( x > 48 and x < 169 ) {//awal2
 		cek = ( x*4000 )-1000;
 		cout << "Upah karyawan selama " << x << " jaam adalah Rp." << cek << endl; 
 		}//akhir3
 		if (x<1) {
 			cout << "Tidak Tersedia" << endl;
 		}
 		if (x>168) {
 			cout << "Tidak Tersedia" << endl;
 		}
		}//akhir no 10
		
		
		//cek bilangan genap dan ganjil
		if ( x == 11 ){//awalcek bilangan genap dan ganjil
		int x;
		int hasil;
		char y;
		cout << "cek bilangan genap dan ganjil" << endl;
		cout << "Masukkan Angka: ";
		cin >> x;
		hasil = x % 2;
		if ( hasil == 0 ){//awal
			cout << x << " adalah Genap" << endl;
		}//akhir
		else {//awal2
			cout << x << " adalah Ganjil" << endl;
		}//akhir2
		}//akhircek bilangan genap dan ganjil


		//Cek Indeks Nilai
		if ( x == 12 ){//awalno12
		int x;
		cout << "Cek Indeks Nilai" << endl;
		cout << "Masukkan Nilai: ";
		cin >> x;
		if ( x > 79 and x < 101 ){//A
		cout << x << " Memiliki Indeks Nilai = A" << endl;
		}//A
		if ( x > 69 and x < 80 ){//B
		cout << x << " Memiliki Indeks Nilai = B" << endl;
		}//B
		if ( x < 70 and x > 54 ){//C
		cout << x << " Memiliki Indeks Nilai = C" << endl;
		}//C
		if ( x < 55 and x > 40 ){//D
		cout << x << " Memiliki Indeks Nilai = D" << endl;
		}//D
		if ( x < 40 and x > 0 ){//E
		cout << x << " Memiliki Indeks Nilai = E" << endl;
		}//E
		if ( x == 0 ){//0
		cout << "NILAI " << x << " KEBACUT" << endl;
		}//0
		if ( x < 0 ){//0
		cout << "Tidak Memenuhi" << endl;
		}//0
		if ( x > 100  ){//0
		cout << "Tidak Memenuhi" << endl;
		}//0
		}//akhiro12


		//cek Perhitungan Dasar dua bilangan
		if ( x == 13){//Awalno13
		float x;
		float y;
		float tambah;
		float kurang;
		float kali;
		float bagi;

		cout << "cek Perhitungan Dasar dua bilangan" << endl;
		cout << "Masukkan Angka Pertama: ";
		cin >> x;
		cout << "Masukkan Angka Kedua: ";
		cin >> y;
		tambah = x+y;
		cout << x << " + " << y << " = " << tambah << endl;
		kurang = x-y;
		cout << x << " - " << y << " = " << kurang << endl;
		kali   = x*y;
		cout << x << " x " << y << " = " << kali << endl;
		bagi   = x/y;
		cout << x << " : " << y << " = " << bagi << endl;
		}//Akhirno13
		

		//cek Tahun Karbisat
		if ( x == 14 ){//awal1
		int x;
		int hasil;
		cout << "cek Tahun Karbisat" << endl;
		cout << "Masukkan Tahun: ";
		cin >> x;
		hasil = x % 4;
		if ( hasil == 0 ){//awal2
		cout << x << " adalah Tahun Karbisat" << endl;
		}//akhir2
		else {
			cout << x << " Bukan Tahun Karbisat" << endl;
		}
		}//akhir1


		//Ketik 15 untuk cek Temperatur air
		if ( x == 15 ){//awal
		int x;
		cout << "cek Temperatur air" << endl;
		cout << "Masukkan suhu air: ";
		cin >> x;
		if ( x < 0 ){//membeku
		cout << "Suhu " << x << " derajat membuat air dalam keaada Cair" << endl;
		}//membeku
		if ( x < 101 and x > 0 ){//memadat
		cout << "Suhu " << x << " derajat membuat air dalam keadaan Padat/Membeku" << endl;
		}//memadat
		if (  x > 100 ){//gas
		cout << "Suhu " << x << " derajat membuat air dalam keadaan Gas" << endl;
		}//mgas
		}//akhir
		

 		//Ketik 16 untuk cek deret fibonacci
 		if ( x == 16 ){//awal
 		int n;
		int f_n;
		int f_n1;
		int f_n2;
		cout << "Program Fibonacci" << endl;
		cout << "Masukkan nilai n: ";
		cin >> n;
		f_n1 = 1;
		f_n2 = 0;
		cout << f_n2 << endl;
		cout << f_n1 << endl;
		for( int i = 1; i < n-1; i++){
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		cout << f_n << endl;
		}
 		}//akhir

 		//cek rata-rata
 		if( x == 17 ){//awal
 		float n,rerata,data;
 		float jumlah=0;

 		cout << "Program mencari rata-rata" << endl;
 		cout << "Masukkan berapa jumlah data anda" << endl;
 		cout << "Masukkan angka: "; cin >> n;
 		cout << endl;
 		for ( int y = 1; y <= n; y++ ){
 		cout << "Masukkan data " << y << ": ";
 		cin >> data;
 		jumlah = jumlah + data;
 		}
 		cout << endl;
 		rerata = jumlah / n;
 		cout << "Jumlah data anda: " 	<< jumlah << endl;
 		cout << "Rata-Rata data anda: " << rerata << endl;
 		}//akhir


		

		
		
		
		
	 	


system("Pause");
  	}// Akhirmain
