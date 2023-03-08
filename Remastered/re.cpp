#include <iostream>
#include <cmath>
#include <array>
using namespace std;

//Protototype


void judul				(int judul)	;
void menu             	(int menu) 	;
void mutlak           	(int &)		;
void positif_negatif  	(int &)    	;
void lebih_besar	  	(int &)		;
void vokal_konsonan		(int &)		;
void luas_datar			(int &)		;
void titik_ordinat		(int &)		;
void tiga_bilangan		(int &)		;
void baca_angka			(int &)		;
void baca_bulan			(int &)		;
void upah_pekerja		(int &)		;
void genap_ganjil		(int &)		;
void indeks_nilai		(int &)		;
void perhitungan_dasar	(int &)		;
void tahun_karbisat 	(int &)		;
void tempreratur_air	(int &)		;
void deret_fibonacci	(int &)		;
void rata_rata			(int &)		;
void sistem_bilangan	(int &)		;
void grafik_nilai		(int &)		;
void faktorial			(int &)		;
int  hitungfaktorial 	( int n )	;
void aritmatika 		(int &)		;
void geometri			(int &)		;





int main()
{
	int x;
	judul(x);
	menu(x);
	cout << "  Masukkan Angka: ";
	cin >> x;

	if ( x == 1 ){
		mutlak(x);
	}
	if ( x == 2 ){
		positif_negatif(x);
	}
	if ( x == 3 ){
		lebih_besar(x);
	}
	if ( x == 4 ){
		vokal_konsonan(x);
	}
	if ( x == 5 ){
		luas_datar(x);
	}
	if ( x == 6 ){
		titik_ordinat(x);
	}
	if ( x == 7 ){
		tiga_bilangan(x);
	}
	if ( x == 8 ){
		baca_angka(x);
	}
	if ( x == 9 ){
		baca_bulan(x);
	}
	if ( x == 10 ){
		upah_pekerja(x);
	}
	if ( x == 11 ){
		genap_ganjil(x);
	}
	if ( x == 12 ){
		indeks_nilai(x);
	}
	if ( x == 13 ){
		perhitungan_dasar(x);
	}
	if ( x == 14 ){
		tahun_karbisat(x);
	}
	if ( x == 15 ){
		tempreratur_air (x);
	}
	if ( x == 16 ){
		deret_fibonacci(x);
	}
	if ( x == 17 ){
		rata_rata(x);
	}
	if ( x == 18 ){
		sistem_bilangan(x);
	}
	if ( x == 19 ){
		grafik_nilai(x);
	}
	if ( x == 20 ){
		faktorial(x);
	}
	if ( x == 21 ){
		aritmatika(x);
	}
	if ( x== 22 ){
		geometri(x);
	}
	system("Pause");
	return 0;
}


//Fungsi

void judul(int judul){
	cout << "                              ------------" << endl;
	cout << "                              MENU PROGRAM" << endl;
	cout << "                              ------------" << endl;
}

void menu(int menu){
	cout << "-----------------------------------------------------------------------------" 	<< endl;
	cout << "  Ketik 1  untuk cek Bilangan Mutlak" 												<< endl;
	cout << "  Ketik 2  untuk cek Bilangan Positif dan Negatif" 								<< endl;
	cout << "  Ketik 3  untuk cek Dua Bilangan yang Lebih Besar" 								<< endl;
	cout << "  Ketik 4  untuk cek Vuruf vokal dan Konsonan" 									<< endl;
	cout << "  Ketik 5  untuk cek Luas dan Keliling Bangun Datar" 								<< endl;
	cout << "  Ketik 6  untuk cek Titik Ordinat x dan y Apakah Positif,Negatif, atau Netral"	<< endl;
	cout << "  Ketik 7  untuk cek Tiga Bilangan Mana yang Lebih Besar" 							<< endl;
	cout << "  Ketik 8  untuk cek Bilangan yang Mau Dibaca (1-4)" 								<< endl;
	cout << "  Ketik 9  untuk cek Bulan dan Jumlah Harinya di Tahun 2020" 						<< endl;
	cout << "  Ketik 10 untuk cek Upah Pekerja dalam Satu Minggu" 								<< endl; 
	cout << "  Ketik 11 untuk cek Bilangan Genap dan Ganjil" 									<< endl;
	cout << "  Ketik 12 untuk cek Indeks Nilai"												    << endl;
	cout << "  Ketik 13 untuk cek Perhitungan Dasar Dua Bilangan" 							 	<< endl;
	cout << "  Ketik 14 untuk cek Tahun Karbisat" 												<< endl;
	cout << "  Ketik 15 untuk cek Temperatur Air" 												<< endl;
	cout << "  Ketik 16 untuk cek Deret Fibonacci" 												<< endl;
	cout << "  Ketik 17 untuk cek Rata-Rata" 													<< endl;
	cout << "  Ketik 18 untuk cek Sistem Bilangan " 											<< endl;
	cout << "  Ketik 19 untuk cek Grafik Nilai pada Pelajar"									<< endl;
	cout << "  Ketik 20 untuk cek Bilangan Faktorial"											<< endl;
	cout << "  Ketik 21 untuk cek Bilangan Aritmatika"											<< endl;
	cout << "  Ketik 22 untuk cek Bilangan Geometri"											<< endl;
	cout << "-----------------------------------------------------------------------------" 	<< endl;
}

void mutlak( int &nilai_mutlak ){
	cout << endl;
	int a;
	cout << "                ----------------------------" << endl;
	cout << "                Cek nilai mutlak suatu angka" << endl;
	cout << "                ----------------------------" << endl;
	cout << "                Masukkan Angka  : ";
	cin >> a;

	if ( a < 0 ){
		a = a * -1;
	cout << endl;
	cout << "                Nilai Mutlaknya : " << a << endl;
	cout << "                ----------------------------" << endl;
	}
   else {
   	cout << endl;
   	cout << "                Nilai Mutlaknya : " << a << endl;
   	cout << "                ----------------------------" << endl;
   }
}

void positif_negatif( int &nilai_positif_negatif ){
	int b;
	cout << endl;
	cout << "                ---------------------------------" << endl;
	cout << "                Cek Bilangan Positif atau Negatif" << endl;
	cout << "                ---------------------------------" << endl;
	cout << "                Masukkan Angka  : ";
	cin >> b;
	  if ( b < 0 ) {
	cout << endl;
    cout << "                Angka yag dimasukkan Negatif : " << b << endl;
    cout << "                ---------------------------------" << endl;
	  }
	  else 
	  if ( b > 0 ) {
	cout << endl;
    cout << "                Angka yang dimasukkan Positif : " << b << endl;
    cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( b == 0) {
	cout << endl;
    cout << "                Angka yang dimasukkan Netral : " << b << endl;
    cout << "                ---------------------------------" << endl;
	  }
}

void lebih_besar( int &nilai_2_bilangan_lebih_besar ){
	int c,d;
	cout << endl;
	cout << "                ---------------------------------" << endl;
	cout << "                Cek Dua Bilangan yang Lebih Besar" << endl;
	cout << "                ---------------------------------" << endl;
	cout << "                   Masukkan Angka Pertama : ";
	cin  >> c;
	cout << "                   Masukkan Angka Kedua   : ";
	cin  >> d;
	
	  if ( c > d )	{
	cout << endl;
    cout << "     Angka Pertama Lebih Besar dari Angka Kedua " << "| " <<  c << " > " << d << " |" << endl;
    cout << "                ---------------------------------" << endl;
	}  
	  else 
	  if ( c < d )	{
    cout << endl;
    cout << "     Angka Kedua Lebih Besar dari Angka Pertama " << "| " <<  d << " > " << c << " |" << endl;
    cout << "                ---------------------------------" << endl;
	} 
      else 
      if ( c == d ) {
    cout << endl;
    cout << "     Angka Pertama samadengan Angka Kedua " << "| " <<  c << " = " << d << " |" << endl;
    cout << "                ---------------------------------" << endl;
	}
}

void vokal_konsonan( int &vokal_konsonan ){
	char huruf;
	cout << endl;
	cout << "                ---------------------------------" << endl;
	cout << "                   Cek Huruf Vokal dan Konsonan" << endl;
	cout << "                ---------------------------------" << endl;
	cout << "                   Masukkan Huruf : ";
	cin  >> huruf;

	  if ( huruf == 'a' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Vokal : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'b' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	   else
	  if ( huruf == 'c' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'd' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'e' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Vokal : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'f' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'g' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'h' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'i' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Vokal : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'j' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'k' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'l' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'm' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'n' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'o' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Vokal : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'p' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'q' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'r' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 's' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 't' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'u' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Vokal : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'v' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'w' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'x' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'y' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
	  else
	  if ( huruf == 'z' ){
	cout << endl;
	cout << "         Huruf yang Anda Masukkan Merupakan Huruf Konsonan : " << huruf << endl;
	cout << "                ---------------------------------" << endl;
	  }
}

void luas_datar ( int &luas_datar ){//Void
	int n;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Cek Luas dan Keliling Bangun Datar   " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                        Menu Bangun Datar            " << endl;
	cout << endl;
	cout << "                1. Luas dan Keliling Persegi         " << endl; 
	cout << "                2. Luas dan Keliling Persegi Panjang " << endl; 
	cout << "                3. Luas dan Keliling Segitiga        " << endl; 
	cout << "                4. Luas dan Keliling Lingkaran       " << endl; 
	cout << "                5. Luas dan Keliling Trapesium       " << endl; 
	cout << "                6. Luas dan Keliling Jajar Genjang   " << endl; 
	cout << "                7. Luas dan Keliling Belah Ketupat   " << endl;
	cout << "                8. Luas dan Keliling Layang-Layang   " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Angka: ";
	cin  >> n; 


	//------------------------------Persegi------------------------------//
	  if ( n == 1 ){//AwalIf
	int x;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                    Luas dan Keliling Persegi        " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                           Menu Persegi              " << endl;
	cout << endl;
	cout << "                1. Luas Persegi                      " << endl; 
	cout << "                2. Keliling Persegi                  " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Angka: ";
	cin  >> x;

	//----------------------------Luas Persegi---------------------------//
	    if ( x == 1 ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "              Apakah Sisi dari Persegi diketahui? [y/n]: "; 
	cin >> huruf;
	    
	    if ( huruf == 'y' ){
	int s,luas;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Mencari Luas Persegi          " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Sisi Persegi : ";
	cin  >> s;
	luas = s * s;
	cout << "                Luas Persegi Adalah   : "              << luas << endl;
	cout << "                ----------------------------------   " << endl;
	    } 

	    if ( huruf ==  'n' ){
	double sisi;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                     Mencari Sisi dari Persegi          " << endl;
	cout << "                ----------------------------------   " << endl; 
	cout << "                Masukkan Luas Persegi : ";
	cin  >> sisi; 
	cout << "                Sisi Persegi Adalah   : "              << sqrt(sisi) << endl;
	cout << "                ----------------------------------   " << endl;
	     }  	

	   }
	//----------------------------Luas Persegi---------------------------//
	
	//----------------------------BATAS-BATAS----------------------------//
	
	//----------------------------Keliling Persegi-----------------------//
	    if ( x == 2 ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "              Apakah Sisi dari Persegi diketahui? [y/n]: "; 
	cin >> huruf;
	    
	    if ( huruf == 'y' ){
	int s,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                     Mencari Keliling Persegi        " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Sisi Persegi     : ";
	cin  >> s;
	kel = 4 * s;
	cout << "                Keliling Persegi Adalah   : "          << kel << endl;
	cout << "                ----------------------------------   " << endl;
	    } 

	    if ( huruf ==  'n' ){
	double sisi,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                     Mencari Sisi dari Persegi       " << endl;
	cout << "                ----------------------------------   " << endl; 
	cout << "                Masukkan Keliling Persegi : ";
	cin  >> kel;
	sisi = kel / 4; 
	cout << "                Sisi Persegi Adalah       : "          << sisi << endl;
	cout << "                ----------------------------------   " << endl;
	     }  	
	 }
	//----------------------------Keliling Persegi-----------------------//
    }//AkhirIf
    //------------------------------Persegi------------------------------//

    //--------------------------Batas-Batas Antar If---------------------//

    //-------------------------Persegi Panjang---------------------------//
	  if ( n == 2 ){//AwalIf
	int x;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Luas dan Keliling Persegi Panjang    " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                     Menu Persegi Panjang            " << endl;
	cout << endl;
	cout << "                1. Luas Persegi Panjang              " << endl; 
	cout << "                2. Keliling Persegi Panjang          " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Angka: ";
	cin  >> x;

	//----------------------------Luas Persegi Panjang-------------------//
	    if ( x == 1 ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "        Apakah Panjang dan Lebar dari Persegi Panjang diketahui? [y/n]: "; 
	cin >> huruf;
	    
	    if ( huruf == 'y' ){
	float p,l,luas;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                  Mencari Luas Persegi Panjang       " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Panjang            : ";
	cin  >> p;
	cout << "                Masukkan Lebar              : ";
	cin  >> l;
	luas = p * l;
	cout << "                Luas Persegi Panjang Adalah : "        << luas << endl;
	cout << "                ----------------------------------   " << endl;
	    } 

	    if ( huruf ==  'n' ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "           Jika Luas dari Persegi Panjang Diketahui" << endl; 
	cout << "      Apakah Anda ingin Mencari Panjang dari Persegi Panjang  ? [y/n]: ";                      
	cin >> huruf;

	    if ( huruf == 'y' ){
	float luas,l,panjang;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "               Mencari Panjang dari Persegi Panjang  " << endl;
	cout << "                ----------------------------------   " << endl;  
	cout << "                Masukkan Luas                       : " ;
	cin  >> luas;
	cout << "                Masukkan Lebar                      : " ;
	cin  >> l;
	panjang = luas / l;
	cout << "                Panjang dari Persegi Panjang Adalah : " << panjang << endl;
	cout << "                ----------------------------------   " << endl;
	       }

	    if ( huruf == 'n' ){
	float luas,p,lebar;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Mencari Lebar dari Persegi Panjang  " << endl;
	cout << "                ----------------------------------   " << endl;  
	cout << "                Masukkan Luas                     : " ;
	cin  >> luas;
	cout << "                Masukkan Panjang                  : " ;
	cin  >> p;
	lebar = luas / p;
	cout << "                Lebar dari Persegi Panjang Adalah : " << lebar << endl; 
	cout << "                ----------------------------------   " << endl;   		    	
	       }
	     
	    }  	

	  }
	//----------------------------Luas Persegi Panjang-------------------//

	//-----------------------------BATAS-BATAS---------------------------//
	
	//-------------------------Keliling Persegi Panjang---------------- -//
	    if ( x == 2 ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "       Apakah Panjang dan Lebar dari Persegi Panjang diketahui? [y/n]: "; 
	cin >> huruf;
	    
	    if ( huruf == 'y' ){
	int p,kel,l;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Mencari Keliling Persegi Panjang    " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Panjang                : ";
	cin  >> p;
	cout << "                Masukkan Lebar                  : ";
	cin  >> l;
	kel = ( 2 * ( p + l) );
	cout << "                Keliling Persegi Panjang Adalah : "    << kel << endl;
	cout << "                ----------------------------------   " << endl;
	    } 

	    if ( huruf ==  'n' ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "           Jika Keliling dari Persegi Panjang Diketahui" << endl; 
	cout << "      Apakah Anda ingin Mencari Panjang dari Persegi Panjang  ? [y/n]: ";                      
	cin >> huruf;
	
	if ( huruf == 'y' ){
	float kel,l,panjang;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "               Mencari Panjang dari Persegi Panjang  " << endl;
	cout << "                ----------------------------------   " << endl;  
	cout << "                Masukkan Keliling                   : " ;
	cin  >> kel;
	cout << "                Masukkan Lebar                      : " ;
	cin  >> l;
	panjang = ( kel - ( 2 * l )) / 2 ;
	cout << "                Panjang dari Persegi Panjang Adalah : "<< panjang << endl;
	cout << "                ----------------------------------   " << endl;
	       }

	    if ( huruf == 'n' ){
	float kel,p,lebar;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Mencari Lebar dari Persegi Panjang  " << endl;
	cout << "                ----------------------------------   " << endl;  
	cout << "                Masukkan Keliling                 : " ;
	cin  >> kel;
	cout << "                Masukkan Panjang                  : " ;
	cin  >> p;
	lebar = ( kel - ( 2 * p )) / 2 ;
	cout << "                Lebar dari Persegi Panjang Adalah : " << lebar << endl; 
	cout << "                ----------------------------------   " << endl;   		    	
	        }     

	     }  	
	 
	 }  
   //-------------------------Keliling Persegi Panjang---------------- -// 
    }//AkhirIf
  
   //-------------------------Persegi Panjang---------------------------//

   //-------------------------BATAS-BATAS------------------------------//

   //---------------------------Segitiga-------------------------------//

    	if ( n == 3 ){
    int x;
    cout << "                ----------------------------------   " << endl;
	cout << "                    Luas dan Keliling Segitiga       " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                          Menu Segitiga              " << endl;
	cout << endl;
	cout << "                1. Luas Segitiga                     " << endl; 
	cout << "                2. Keliling Segitiga                 " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Angka: ";
	cin  >> x;
    
	//-----------------------Luas Segitiga----------------------------//

   		if ( x == 1 ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "       Apakah Alas dan Tinggi dari Segitiga diketahui? [y/n]: "; 
	cin >> huruf;
	    
	    if ( huruf == 'y' ){
	float a,t,luas;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                      Mencari Luas Segitiga       	  " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Alas                : ";
	cin  >> a;
	cout << "                Masukkan Tinggi              : ";
	cin  >> t;
	luas = ( a * t ) / 2;
	cout << "                Luas Segitga Adalah          : "       << luas << endl;
	cout << "                ----------------------------------   " << endl;	    
	}

	if ( huruf ==  'n' ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Jika Luas dari Segitiga Diketahui   " << endl; 
	cout << "      Apakah Anda ingin Mencari Alas dari Segitiga  ? [y/n]: ";                      
	cin >> huruf;

	    if ( huruf == 'y' ){
	float luas,t,alas;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                     Mencari Alas dari Segitiga      " << endl;
	cout << "                ----------------------------------   " << endl;  
	cout << "                Masukkan Luas                       : " ;
	cin  >> luas;
	cout << "                Masukkan Tinggi                     : " ;
	cin  >> t;
	alas = ( 2 * luas ) / t;
	cout << "                Alas dari Segitiga Adalah           : " << alas << endl;
	cout << "                ----------------------------------    " << endl;
	       }

	    if ( huruf == 'n' ){
	float luas,a,tinggi;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                    Mencari Tinggi dari Segitiga     " << endl;
	cout << "                ----------------------------------   " << endl;  
	cout << "                Masukkan Luas                     : " ;
	cin  >> luas;
	cout << "                Masukkan Alas                     : " ;
	cin  >> a;
	tinggi = ( 2 * luas ) / a;
	cout << "                Tinggi dari Segitiga Adalah       : " << tinggi << endl; 
	cout << "                ----------------------------------   " << endl;   		    	
	   }	     
     }  
   } 
   //-----------------------Luas Segitiga----------------------------//

   //------------------------Batas-Batas----------------------------// 

   //-----------------------Keliling Segitiga-----------------------//	


    	if ( x == 2 ){//awalkel
	int y;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menu Keliling Segitiga        " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                  1. Keliling Segitiga Siku-Siku     " << endl;
	cout << "                  2. Keliling Segitiga Sama Sisi     " << endl;
	cout << "                  3. Keliling Segitiga Sama Kaki     " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                  Masukkan Angka: ";
	cin  >> y;

		if ( y == 1 ){//siku-siku
    char huruf;
    cout << endl;
    cout << "                ----------------------------------   " << endl;
	cout << "                        Menngumpulkan Data           " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "         Apakah Ketiga Sisi dari Segitga Siku-Siku diketahui? [y/n]: "; 
	cin >> huruf;
	
	if ( huruf == 'y' ){
	int kel,s1,s2,s3;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "               Mencari Keliling Segitiga Siku-Siku  " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Sisi Alas              : ";
	cin  >> s1;
	cout << "                Masukkan Sisi Tinggi            : ";
	cin  >> s2;
	cout << "                Masukkan Sisi Miring            : ";
	cin  >> s3;
	kel = s1 + s2 + s3;
	cout << "                Keliling Segitiga Adalah        : "    << kel << endl;
	cout << "                ----------------------------------   " << endl;	
	}

	if ( huruf == 'n' ){//n
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                        Menngumpulkan Data           " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "         Jika Keliling dari Segitiga Siku-Siku Diketahui " << endl; 
	cout << "      Apakah Anda ingin Mencari Alas dari Segitiga Siku-Siku  ? [y/n]: ";
	cin  >> huruf; 

	if ( huruf == 'y' ){
	float kel,t,alas,m;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                     Mencari Alas dari Segitiga      " << endl;
	cout << "                ----------------------------------   " << endl;  
	cout << "                Masukkan Keliling                   : " ;
	cin  >> kel;
	cout << "                Masukkan Tinggi                     : " ;
	cin  >> t;
	cout << "                Masukkan Sisi Miring                : " ;
	cin  >> m;
	alas = ( kel - t - m );
	cout << "                Alas dari Segitiga Adalah           : " << alas << endl;
	cout << "                ----------------------------------    " << endl;
	}

	if ( huruf == 'n' ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                        Menngumpulkan Data           " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "         Jika Keliling dari Segitiga Siku-Siku Diketahui " << endl; 
	cout << "      Apakah Anda ingin Mencari Tinggi dari Segitiga Siku-Siku  ? [y/n]: ";
	cin  >> huruf;
	
	if ( huruf == 'y' ){
	float kel,t,alas,m;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                   Mencari Tinggi dari Segitiga      " << endl;
	cout << "                ----------------------------------   " << endl;  
	cout << "                Masukkan Keliling                 : " ;
	cin  >> kel;
	cout << "                Masukkan Alas                     : " ;
	cin  >> alas;
	cout << "                Masukkan Sisi Miring              : " ;
	cin  >> m;
	t = ( kel - alas - m );
	cout << "                Sisi Miring dari Segitiga Adalah  : "  << t << endl;
	cout << "                ----------------------------------    " << endl;
	}

	if ( huruf == 'n' ){
	float kel,t,alas,m;
	cout << endl;
	cout << "                ----------------------------------  " << endl;
	cout << "                Mencari Sisi Miring dari Segitiga   " << endl;
	cout << "                ----------------------------------  " << endl;  
	cout << "                Masukkan Keliling                : " ;
	cin  >> kel;
	cout << "                Masukkan Tinggi                  : " ;
	cin  >> t;
	cout << "                Masukkan Alas                    : " ;
	cin  >> alas;
	m = ( kel - alas - t);
	cout << "                Tinggi dari Segitiga Adalah      : "  << m << endl;
	cout << "                ----------------------------------    " << endl;
	 }
    }   
   }//n

	 }//siku-siku

		if ( y == 2 ){//awalsamasisi
    char huruf;
    cout << endl;
    cout << "                ----------------------------------   " << endl;
	cout << "                        Menngumpulkan Data           " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "         Apakah Ketiga Sisi dari Segitiga Sama Sisi diketahui? [y/n]: ";
	cin >> huruf; 

		if ( huruf == 'y' ){
	int kel,s1;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "               Mencari Keliling Segitiga Sama Sisi   " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Sisi                   : ";
	cin  >> s1;
	kel = 3 * s1;
	cout << "                Keliling Segitiga Adalah        : "    << kel << endl;
	cout << "                ----------------------------------   " << endl;	
	}

	if ( huruf == 'n' ){
	int kel,s1,s2,s3;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "           Mencari Ketiga Sisi dari Segitiga Sama Sisi   " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Keliling               : ";
	cin >> kel;
	s1 = kel / 3;
	cout << "                Sisi Segitiga Adalah            : "    << s1 << endl;
	cout << "                ----------------------------------   " << endl;	
	}
	}//akhirsamasisi

		if ( y == 3 ){//awalsamakaki
    char huruf;
    cout << endl;
    cout << "                ----------------------------------   " << endl;
	cout << "                        Menngumpulkan Data           " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "         Apakah Ketiga Sisi dari Segitiga Sama Kaki diketahui? [y/n]: ";
	cin >> huruf; 

		if ( huruf == 'y' ){
	int kel,s1,s2;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "               Mencari Keliling Segitiga Sama Kaki   " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Sisi Kaki              : ";
	cin  >> s1;
	cout << "                Masukkan Alas                   : ";
	cin  >> s2;
	kel = (2 * s1) + s2;
	cout << "                Keliling Segitiga Adalah        : "    << kel << endl;
	cout << "                ----------------------------------   " << endl;	
	}

		if ( huruf == 'n' ){
	char huruf;
	cout << "                ----------------------------------   " << endl;
	cout << "                        Menngumpulkan Data           " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "         Jika Keliling dari Segitiga Sama Kaki Diketahui " << endl; 
	cout << "     Apakah Anda ingin Mencari Sisi Kaki dari Segitiga Sama Kaki  ? [y/n]: ";
	cin  >> huruf;

		if ( huruf == 'y' ){
	int kel,s1,alas;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "             Mencari Sisi Kaki dari Segitiga Sama Kaki   " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Keliling               : ";
	cin  >> kel;
	cout << "                Masukkan Alas                   : ";
	cin  >> alas;  
	s1 =( kel-alas )/2;
	cout << "                Sisi Kaki Adalah                : "    << s1 << endl;
	cout << "                ----------------------------------   " << endl;	
	}

	if ( huruf == 'n' ){
	int kel,s1,alas;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "               Mencari Alas dari Segitiga Sama Kaki   " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Keliling               : ";
	cin  >> kel;
	cout << "                Masukkan Sisi Kaki              : ";
	cin  >> s1;  
	alas =( kel - ( 2 * s1 ) );
	cout << "                Alas dari Segitiga Adalah       : "    << alas << endl;
	cout << "                ----------------------------------   " << endl;	
	      }
       }
     }//akhirsamakaki		
   }//akhirkel
  }

   //---------------------------Segitiga-------------------------------//

   //-------------------------BATAS-BATAS------------------------------//

   //-------------------------Lingkaran------------------------------//

 		if ( n == 4 ){//AwaklIf
 	int x;
    cout << endl;
    cout << "                ----------------------------------  " << endl;
	cout << "                  Luas dan Keliling Lingkaran       " << endl;
	cout << "                ----------------------------------  " << endl;
	cout << "                          Menu Lingkaran            " << endl;
	cout << endl;
	cout << "                1. Luas Lingkaran                   " << endl; 
	cout << "                2. Keliling Lingkaran               " << endl;
	cout << "                ----------------------------------  " << endl;
	cout << "                Masukkan Angka: ";
	cin  >> x;

	//-----------------------Luas Lingkaran----------------------------//

	if ( x == 1 ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "            Apakah Jari-Jari dari Lingkaran diketahui? [y/n]: "; 
	cin >> huruf;
	    
	    if ( huruf == 'y' ){
	float r,luas;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                  Mencari Luas Lingkaran             " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Jari-Jari          : ";
	cin  >> r;
	luas = ( 3.14 ) * r * r;
	cout << "                Luas Lingkaran Adalah       : "        << luas << endl;
	cout << "                ----------------------------------   " << endl;
	    } 

	    if ( huruf == 'n' ){
	float r,luas;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Mencari Jari-Jari dari Lingkaran    " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Luas                   : ";
	cin  >> luas;
	r = ( luas / 3.14 );
	cout << "                Jari-Jari Lingkaran Adalah      : "    << sqrt(r) << endl;
	cout << "                ----------------------------------   " << endl;
	    }

	  }

   //-----------------------Luas Lingkaran----------------------------//

   //------------------------Batas-Batas----------------------------// 

   //-----------------------Keliling Lingkaran-----------------------//	

	  if ( x == 2 ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "            Apakah Jari-Jari dari Lingkaran diketahui? [y/n]: "; 
	cin >> huruf;
	    
	    if ( huruf == 'y' ){
	float r,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                  Mencari Keliling Lingkaran         " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Jari-Jari          : ";
	cin  >> r;
	kel = ( 2 * 3.14 ) * r ;
	cout << "                Keliling Lingkaran Adalah   : "        << kel << endl;
	cout << "                ----------------------------------   " << endl;
	    } 

	    if ( huruf == 'n' ){
	float r,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Mencari Keliling dari Lingkaran     " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Keliling               : ";
	cin  >> kel;
	r = kel / ( 2 * 3.14 );
	cout << "                Jari-Jari Lingkaran Adalah      : "    << r << endl;
	cout << "                ----------------------------------   " << endl;
	    }

	  }

   //-----------------------Keliling Lingkaran-----------------------//

	}//AkhirIf4

   //-------------------------Lingkaran------------------------------//

   //-------------------------BATAS-BATAS------------------------------//

   //------------------------ Trapesiuum------------------------------//

	
 		if ( n == 5 ){//AwaklIf5
 	int x;
    cout << endl;
    cout << "                ---------------------------------- " << endl;
	cout << "                  Luas dan Keliling Trapesium      " << endl;
	cout << "                ---------------------------------- " << endl;
	cout << "                          Menu Trapesium           " << endl;
	cout << endl;
	cout << "                1. Luas Trapesium                  " << endl; 
	cout << "                2. Keliling Trapesium              " << endl;
	cout << "                ---------------------------------- " << endl;
	cout << "                Masukkan Angka: ";
	cin  >> x;

	//--------------------------------LUAS---------------------------------//
		
		if ( x == 1 ){//awal luas
    char x;
    cout << endl;
    cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "  Apakah Sisi Bawah, Sisi Atas, dan Tinggi dari Trapesium diketahui? [y/n]: "; 
	cin  >> x; 

		if ( x == 'y' ){
	float a,b,t,luas;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                     Mencari Luas Trapesium          " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Sisi Atas          : ";
	cin  >> a;
	cout << "                Masukkan Sisi Bawah         : ";
	cin  >> b;
	cout << "                Masukkan Tinggi             : ";
	cin  >> t;
	luas = ( ( a + b ) * t ) / 2;
	cout << "                Luas Trapesium Adalah       : "        << luas << endl;
	cout << "                ----------------------------------   " << endl;
		}

		if ( x == 'n' ){
	char x;
    cout << endl;
    cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                  Jika Luas Trapesium Diketahui "      << endl;
	cout << "       Apakah Anda ingin Mencari Sisi Atas dari Trapesium ? [y/n]: "; 
	cin  >> x; 		
	
		if ( x == 'y') {
	float a,b,t,luas;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Mencari Sisi Atas dari Trapesium    " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Luas               : ";
	cin  >> luas;
	cout << "                Masukkan Sisi Bawah         : ";
	cin  >> b;
	cout << "                Masukkan Tinggi             : ";
	cin  >> t;
	a = ( ( ( 2 * luas ) / t ) - b );
	cout << "                Sisi Atas Trapesium Adalah  : "        << a << endl;
	cout << "                ----------------------------------   " << endl;
		  }

		  if ( x == 'n') {
	char x;
	cout << endl; 
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                  Jika Luas Trapesium Diketahui "      << endl;
	cout << "  Apakah Anda ingin Mencari Sisi Bawah dari Trapesium ? [y/n]: ";
	cin  >> x;
	
		if ( x == 'y'){
	float a,b,t,luas;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Mencari Sisi Bawah dari Trapesium    " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Luas               : ";
	cin  >> luas;
	cout << "                Masukkan Sisi Atas          : ";
	cin  >> a;
	cout << "                Masukkan Tinggi             : ";
	cin  >> t;
	b = ( ( ( 2 * luas ) / t ) - a );
	cout << "                Sisi Bawah Trapesium Adalah : "        << b << endl;
	cout << "                ----------------------------------   " << endl;	
	        }
	        
	    if ( x == 'n'){
	float a,b,t,luas;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                  Mencari Tinggi dari Trapesium      " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Luas               : ";
	cin  >> luas;
	cout << "                Masukkan Sisi Atas          : ";
	cin  >> a;
	cout << "                Masukkan Sisi Bawah         : ";
	cin  >> b;
	t = ( ( 2 * luas ) / ( a + b ) );
	cout << "                Tinggi Trapesium Adalah     : "        << t << endl;
	cout << "                ----------------------------------   " << endl;	
	        }	  
		  } 
		}
	  }//akhirluas
	
	//--------------------------------LUAS---------------------------------//

	//--------------------------------BATAS--------------------------------//

	//--------------------------------Keliling----------------------------//

		if ( x == 2 ){//awalkelilling
	int y;
	cout << endl;
	cout << "                ----------------------------------     " << endl;
	cout << "                     Menu Keliling Trapesium           " << endl;
	cout << "                ----------------------------------     " << endl;
	cout << "                 1. Keliling Trapesium Siku-Siku       " << endl;
	cout << "                 2. Keliling Trapesium Samakaki        " << endl;
	cout << "                 3. Keliling Trapesium Tidak Beraturan " << endl;
	cout << "                ----------------------------------  " << endl;
	cout << "                  Masukkan Angka: ";
	cin  >> y;

	//--------------------------SIKU SIKU------------------------------//

		if ( y == 1 ){//siku
	 char x;
    cout << endl;
    cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "Apakah Sisi Bawah, Sisi Atas, Sisi Miring dan Tinggi dari Trapesium diketahui? [y/n]: "; 
	cin  >> x; 

		if ( x == 'y' ){
	float a,b,t,m,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "               Mencari Keliling Trapesium Siku-Siku  " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Sisi Atas          : ";
	cin  >> a;
	cout << "                Masukkan Sisi Bawah         : ";
	cin  >> b;
	cout << "                Masukkan Sisi Miring        : ";
	cin  >> m;
	cout << "                Masukkan Tinggi             : ";
	cin  >> t;
	kel = a + b + m + t;
	cout << "                Keliling Trapesium Adalah   : "        << kel << endl;
	cout << "                ----------------------------------   " << endl;
		}

		if ( x == 'n' ){
	char x;
    cout << endl;
    cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Jika Keliling Trapesium Diketahui   " << endl;
	cout << "  Apakah Anda ingin Mencari Sisi Atas dari Trapesium Siku-Siku ? [y/n]: "; 
	cin  >> x; 	


		if ( x == 'y' ){
	float a,b,t,m,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "               Mencari Sisi Atas Trapesium Siku-Siku " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Keliling           : ";
	cin  >> kel;
	cout << "                Masukkan Sisi Bawah         : ";
	cin  >> b;
	cout << "                Masukkan Sisi Miring        : ";
	cin  >> m;
	cout << "                Masukkan Tinggi             : ";
	cin  >> t;
	a = kel - b - m - t;
	cout << "                Sisi Atas Trapesium Adalah  : "        << a << endl;
	cout << "                ----------------------------------   " << endl;
		}

		if ( x == 'n' ){
	char x;
    cout << endl;
    cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Jika Keliling Trapesium Diketahui   " << endl;
	cout << "  Apakah Anda ingin Mencari Sisi Bawah dari Trapesium Siku-Siku ? [y/n]: "; 
	cin  >> x; 	

	if ( x == 'y' ){
	float a,b,t,m,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "              Mencari Sisi Bawah Trapesium Siku-Siku " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Keliling            : ";
	cin  >> kel;
	cout << "                Masukkan Sisi Atas           : ";
	cin  >> a;
	cout << "                Masukkan Sisi Miring         : ";
	cin  >> m;
	cout << "                Masukkan Tinggi              : ";
	cin  >> t;
	b = kel - a - m - t;
	cout << "                Sisi Miring Trapesium Adalah : "        << b << endl;
	cout << "                ----------------------------------   " << endl;
      }		

      if ( x == 'n' ){
	char x;
    cout << endl;
    cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Jika Keliling Trapesium Diketahui   " << endl;
	cout << "  Apakah Anda ingin Mencari Sisi Miring dari Trapesium Siku-Siku ? [y/n]: "; 
	cin  >> x; 

	if ( x == 'y' ){
	float a,b,t,m,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "             Mencari Sisi Miring Trapesium Siku-Siku " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Keliling            : ";
	cin  >> kel;
	cout << "                Masukkan Sisi Atas           : ";
	cin  >> a;
	cout << "                Masukkan Sisi Bawah          : ";
	cin  >> b;
	cout << "                Masukkan Tinggi              : ";
	cin  >> t;
	m = kel - a - b - t;
	cout << "                Sisi Miring Trapesium Adalah : "        << m << endl;
	cout << "                ----------------------------------   " << endl;
      }		

      if ( x == 'n' ){
	float a,b,t,m,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Mencari Tinggi Trapesium Siku-Siku   " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Keliling           : ";
	cin  >> kel;
	cout << "                Masukkan Sisi Atas          : ";
	cin  >> a;
	cout << "                Masukkan Sisi Bawah         : ";
	cin  >> b;
	cout << "                Masukkan Sisi Miring        : ";
	cin  >> m;
	t = kel - a - b - m;
	cout << "                Tinggi Trapesium Adalah     : "        << t << endl;
	cout << "                ----------------------------------   " << endl;
          }				
        }
      }
    }
  }//siku

  //--------------------------SIKU SIKU------------------------------//

  //--------------------------BATAS----------------------------------//

  //--------------------------SAMAKAKI-------------------------------//

  if ( y == 2 ){//samakaki
	 char x;
    cout << endl;
    cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "   Apakah Sisi Bawah, Sisi Atas, dan Sisi Kaki  dari Trapesium diketahui? [y/n]: "; 
	cin  >> x; 

		if ( x == 'y' ){
	float a,b,k,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Mencari Keliling Trapesium Samakaki  " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Sisi Atas          : ";
	cin  >> a;
	cout << "                Masukkan Sisi Bawah         : ";
	cin  >> b;
	cout << "                Masukkan Sisi Kaki          : ";
	cin  >> k;
	kel = a + b + ( 2 * k );
	cout << "                Keliling Trapesium Adalah   : "        << kel << endl;
	cout << "                ----------------------------------   " << endl;
		}

		if ( x == 'n' ){
	char x;
    cout << endl;
    cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Jika Keliling Trapesium Diketahui   " << endl;
	cout << "  Apakah Anda ingin Mencari Sisi Atas dari Trapesium Samakaki ? [y/n]: "; 
	cin  >> x; 	


		if ( x == 'y' ){
	float a,b,k,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "               Mencari Sisi Atas Trapesium Samakaki " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Keliling           : ";
	cin  >> kel;
	cout << "                Masukkan Sisi Bawah         : ";
	cin  >> b;
	cout << "                Masukkan Kaki               : ";
	cin  >> k;
	a = kel - b - ( 2 * k );
	cout << "                Sisi Atas Trapesium Adalah  : "        << a << endl;
	cout << "                ----------------------------------   " << endl;
		}

		if ( x == 'n' ){
	char x;
    cout << endl;
    cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Jika Keliling Trapesium Diketahui   " << endl;
	cout << "  Apakah Anda ingin Mencari Sisi Bawah dari Trapesium  Samakaki ? [y/n]: "; 
	cin  >> x; 	

	if ( x == 'y' ){
	float a,b,k,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "              Mencari Sisi Bawah Trapesium Samakaki  " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Keliling           : ";
	cin  >> kel;
	cout << "                Masukkan Sisi Atas          : ";
	cin  >> a;
	cout << "                Masukkan Sisi Kaki        : ";
	cin  >> k;
	b = kel - a - ( 2 * k );
	cout << "                Sisi Bawah Trapesium Adalah : "        << b << endl;
	cout << "                ----------------------------------   " << endl;
      }	

      if ( x == 'n' ){
	float a,b,k,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "               Mencari Sisi Kaki Trapesium Samakaki  " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Keliling           : ";
	cin  >> kel;
	cout << "                Masukkan Sisi Atas          : ";
	cin  >> a;
	cout << "                Masukkan Sisi Bawah         : ";
	cin  >> b;
	k = ( kel - a - b ) / 2;
	cout << "                Sisi Kaki  Trapesium Adalah : "        << k << endl;
	cout << "                ----------------------------------   " << endl;
        }				
      }
    }
  }//samakaki

  //--------------------------SAMAKAKI-------------------------------//

  //--------------------------BATAS---------------------------------//

   //------------------------SEMBARANG--------------------- --------//

  if ( y == 3 ){//sembarang
	 char x;
    cout << endl;
    cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "Apakah Sisi Bawah, Sisi Atas, Sisi Kiri dan Sisi Kanan dari Trapesium diketahui? [y/n]: "; 
	cin  >> x; 

		if ( x == 'y' ){
	float a,b,ki,ka,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "               Mencari Keliling Trapesium Sembarang  " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Sisi Atas          : ";
	cin  >> a;
	cout << "                Masukkan Sisi Bawah         : ";
	cin  >> b;
	cout << "                Masukkan Sisi Kanan         : ";
	cin  >> ka;
	cout << "                Masukkan Sisi Kiri          : ";
	cin  >> ki;
	kel = a + b + ka + ki;
	cout << "                Keliling Trapesium Adalah   : "        << kel << endl;
	cout << "                ----------------------------------   " << endl;
		}

		if ( x == 'n' ){
	char x;
    cout << endl;
    cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Jika Keliling Trapesium Diketahui   " << endl;
	cout << "  Apakah Anda ingin Mencari Sisi Atas dari Trapesium Sembarang ? [y/n]: "; 
	cin  >> x; 	


		if ( x == 'y' ){
	float a,b,ka,ki,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "               Mencari Sisi Atas Trapesium Sembarang " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Keliling           : ";
	cin  >> kel;
	cout << "                Masukkan Sisi Bawah         : ";
	cin  >> b;
	cout << "                Masukkan Sisi Kanan         : ";
	cin  >> ka;
	cout << "                Masukkan Sisi Kiri          : ";
	cin  >> ki;
	a = kel - b - ka - ki;
	cout << "                Sisi Atas Trapesium Adalah  : "        << a << endl;
	cout << "                ----------------------------------   " << endl;
		}

		if ( x == 'n' ){
	char x;
    cout << endl;
    cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Jika Keliling Trapesium Diketahui   " << endl;
	cout << "  Apakah Anda ingin Mencari Sisi Bawah dari Trapesium Sembarang ? [y/n]: "; 
	cin  >> x; 	

	if ( x == 'y' ){
	float a,b,ka,ki,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "              Mencari Sisi Bawah Trapesium Sembarang " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Keliling            : ";
	cin  >> kel;
	cout << "                Masukkan Sisi Atas           : ";
	cin  >> a;
	cout << "                Masukkan Sisi Kanan          : ";
	cin  >> ka;
	cout << "                Masukkan Sisi Kiri           : ";
	cin  >> ki;
	b = kel - a - ka - ki;
	cout << "                Sisi Miring Trapesium Adalah : "        << b << endl;
	cout << "                ----------------------------------   " << endl;
      }		

      if ( x == 'n' ){
	char x;
    cout << endl;
    cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Jika Keliling Trapesium Diketahui   " << endl;
	cout << "  Apakah Anda ingin Mencari Sisi Kanan dari Trapesium Sembarang ? [y/n]: "; 
	cin  >> x; 

	if ( x == 'y' ){
	float a,b,ki,ka,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "             Mencari Sisi Kanan Trapesium Sembarang  " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Keliling            : ";
	cin  >> kel;
	cout << "                Masukkan Sisi Atas           : ";
	cin  >> a;
	cout << "                Masukkan Sisi Bawah          : ";
	cin  >> b;
	cout << "                Masukkan Sisi Kiri           : ";
	cin  >> ki;
	ka = kel - a - b - ki;
	cout << "                Sisi Kanan Trapesium Adalah  : "       << ka << endl;
	cout << "                ----------------------------------   " << endl;
      }		

      if ( x == 'n' ){
	float a,b,ka,ki,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "              Mencari Sisi Kiri Trapesium Sembarang  " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Keliling            : ";
	cin  >> kel;
	cout << "                Masukkan Sisi Atas           : ";
	cin  >> a;
	cout << "                Masukkan Sisi Bawah          : ";
	cin  >> b;
	cout << "                Masukkan Sisi Kanan          : ";
	cin  >> ka;
	ki = kel - a - b - ka;
	cout << "                Sisi Kiri Trapesium Adalah   : "       << ki << endl;
	cout << "                ----------------------------------   " << endl;
              }				
            }
           }
          }
        }//sembarang
  
  //------------------------SEMBARANG--------------------- --------/?
      }//akhir keliling
	}//AkhirIf5

 	//------------------------ Trapesiuum------------------------------//

 	//-------------------------BATAS-BATAS------------------------------//

 	//-------------------------Jajar Genjang------------------------------//

	if ( n == 6 ){//awal6
	int x;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Luas dan Keliling Jajar Genjang     " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                     Menu Jajar Genjang              " << endl;
	cout << endl;
	cout << "                1. Luas Jajar Genjang                " << endl; 
	cout << "                2. Keliling Jajar Genjang    "         << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Angka: ";
	cin  >> x;

 //--------------------------Luas JG-----------------------------------//
	
	if ( x == 1 ){//awalluas
	char x;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                         Menngumpulkan Data          " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "        Apakah Alas dan Tinggi dari Jajar Genjang Diketahui ? [y/n] : ";
	cin  >> x; 
	
	if ( x == 'y' ){
	float a,t,luas;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                    Mencari Luas Jajar Genjang       " << endl;
	cout << "                ----------------------------------   " << endl;	
	cout << endl;
	cout << "                Masukkan Alas             : ";
	cin  >> a;
	cout << "                Masukkan Tinggi           : ";
	cin  >> t;
	luas = a * t;
	cout << "                Luas Jajar Genjang adalah : "          << luas << endl;
	cout << "                ----------------------------------   " << endl;	
    }

    if ( x == 'n' ){
	char x;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                         Menngumpulkan Data          " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Jika Luas Jajar Genjang Diketahui   " << endl;
	cout << "   Apakah Anda ingin Mencari Alas dari Jajar Genjang ? [y/n] : "; 
	cin  >> x;

	if ( x == 'y' ) {
	int a,luas,t;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Mencari Alas dari Jajar Genjang     " << endl;
	cout << "                ----------------------------------   " << endl;	
	cout << endl;
	cout << "                Masukkan Luas             : ";
	cin  >> luas;
	cout << "                Masukkan Tinggi           : ";
	cin  >> t;
	a = luas / t;
	cout << "                Alas Jajar Genjang adalah : "          << a << endl;
	cout << "                ----------------------------------   " << endl;	
	  }

	  if ( x == 'n' ) {
	int a,luas,t;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Mencari Tinggi dari Jajar Genjang   " << endl;
	cout << "                ----------------------------------   " << endl;	
	cout << endl;
	cout << "                Masukkan Luas               : ";
	cin  >> luas; 
	cout << "                Masukkan Alas               : ";
	cin  >> a;
	t = luas / a;
	cout << "                Tinggi Jajar Genjang adalah : "        << t << endl;
	cout << "                ----------------------------------   " << endl;	
	  }    
    }
  }//akhirluas

  //--------------------------Luas JG-----------------------------------//

  //--------------------------Batas------------------------------------//

  //--------------------------Keliling JG------------------------------//

  if ( x == 2 ){//awalkel
	char x;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                         Menngumpulkan Data          " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "        Apakah Alas dan Sisi Miring dari Jajar Genjang Diketahui ? [y/n] : ";
	cin  >> x; 
	
	if ( x == 'y' ){
	float a,m,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                  Mencari Keliling Jajar Genjang     " << endl;
	cout << "                ----------------------------------   " << endl;	
	cout << endl;
	cout << "                Masukkan Alas                  : ";
	cin  >> a;
	cout << "                Masukkan Sisi Miring           : ";
	cin  >> m;
	kel = ( 2 * a ) + ( 2 * m );
	cout << "                Keliling Jajar Genjang adalah  : "     << kel << endl;
	cout << "                ----------------------------------   " << endl;	
	    }

	    if ( x == 'n' ){
	char x;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                         Menngumpulkan Data          " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Jika Keliling Jajar Genjang Diketahui   " << endl;
	cout << "       Apakah Anda ingin Mencari Alas dari Jajar Genjang ? [y/n] : "; 
	cin  >> x; 
    
    if ( x == 'y' ){
	float a,m,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                    Mencari Alas Jajar Genjang       " << endl;
	cout << "                ----------------------------------   " << endl;	
	cout << endl;
	cout << "                Masukkan Keliling              : ";
	cin  >> kel;
	cout << "                Masukkan Sisi Miring           : ";
	cin  >> m;
	a = ( kel - ( 2 * m ) ) / 2 ;
	cout << "                Alas Jajar Genjang adalah      : "     << a << endl;
	cout << "                ----------------------------------   " << endl;	
      }

      if ( x == 'n' ){
	float a,m,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Mencari Sisi Miring Jajar Genjang   " << endl;
	cout << "                ----------------------------------   " << endl;	
	cout << endl;
	cout << "                Masukkan Keliling                : ";
	cin  >> kel;
	cout << "                Masukkan Alas                    : ";
	cin  >> a;
	m = ( kel - ( 2 * a ) ) / 2 ;
	cout << "                Sisi Miring Jajar Genjang adalah : "   << m << endl;
	cout << "                ----------------------------------   " << endl;	
       }
      }
  	 }//akhirkel
	}//akhir6

	 //-------------------------Jajar Genjang------------------------------//

	 //-------------------------BATAS-BATAS--------------------------------//

	 //-------------------------Belah Ketupad------------------------------//

	if ( n == 7){//awal7
	cout << endl;
	int x;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Luas dan Keliling Belah Ketupat     " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                        Menu Belah Ketupat           " << endl;
	cout << endl;
	cout << "                1. Luas Belah Ketupat                " << endl; 
	cout << "                2. Keliling Belah Ketupat            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Angka: ";
	cin  >> x;

	//-----------------------Luas Belah Ketupat----------------------------//

	if ( x == 1 ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << " Apakah Diagonal 1 dan Diagonal 2 dari Belah Ketupat diketahui? [y/n] : "; 
	cin >> huruf;
	    
	    if ( huruf == 'y' ){
	float d1,d2,luas;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                   Mencari Luas Belah Ketupat        " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Diagonal 1          : ";
	cin  >> d1;
	cout << "                Masukkan Diagonal 2          : ";
	cin  >> d2;
	luas = ( d1 * d2 ) / 2;
	cout << "                Luas Belah Ketupat Adalah    : "       << luas << endl;
	cout << "                ----------------------------------   " << endl;	    
	}

	if ( huruf ==  'n' ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   "   << endl;
	cout << "                       Menngumpulkan Data            "   << endl;
	cout << "                ----------------------------------   "   << endl;
	cout << "              Jika Luas dari Belah Ketupat Diketahui   " << endl; 
	cout << "     Apakah Anda ingin Mencari Diagonal 1 dari Belah Ketupat  ? [y/n] : ";                      
	cin >> huruf;

	    if ( huruf == 'y' ){
	float luas,d1,d2;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "               Mencari Diagonal 1 dari Belah Ketupat " << endl;
	cout << "                ----------------------------------   " << endl;  
	cout << "                Masukkan Luas                        : " ;
	cin  >> luas;
	cout << "                Masukkan Diagonal 2                  : " ;
	cin  >> d2;
	d1 = ( 2 * luas ) / d2;
	cout << "                Diagonal 1 dari Belah Ketupat Adalah : " << d1 << endl;
	cout << "                ----------------------------------    " << endl;
	       }

	    if ( huruf == 'n' ){
	float luas,d1,d2;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "               Mencari Diagonal 2 dari Belah Ketupat " << endl;
	cout << "                ----------------------------------   " << endl;  
	cout << "                Masukkan Luas                        : " ;
	cin  >> luas;
	cout << "                Masukkan Diagonal 1                  : " ;
	cin  >> d1;
	d2 = ( 2 * luas ) / d1;
	cout << "                Diagonal 2 dari Belah Ketupat Adalah : " << d2 << endl;
	cout << "                ----------------------------------    " << endl;
	  }	     
     }  
	} 
  
   //-----------------------Luas Belah Ketupat----------------------------//

   //-----------------------Bataa-Batas----------------------------------//

   //----------------------Keliling Belah Ketupat-----------------------//

   		if ( x == 2 ){//AwalKel

	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "           Apakah Sisi dari Belah Ketupat diketahui? [y/n]: "; 
	cin >> huruf;
	    
	    if ( huruf == 'y' ){
	int s,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                  Mencari Keliling Belah Ketupat     " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Sisi Belah Ketupat   : ";
	cin  >> s;
	kel = 4 * s;
	cout << "                Keliling Belah Ketupat Adalah : "          << kel << endl;
	cout << "                ----------------------------------   " << endl;
	    } 

	    if ( huruf ==  'n' ){
	double sisi,kel;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Mencari Sisi dari Belah Ketupat     " << endl;
	cout << "                ----------------------------------   " << endl; 
	cout << "                Masukkan Keliling Belah Ketupat : ";
	cin  >> kel;
	sisi = kel / 4; 
	cout << "                Sisi Belah Ketupat Adalah       : "    << sisi << endl;
	cout << "                ----------------------------------   " << endl;
   	    }  
	//----------------------------Keliling Belah Ketupat-----------------//
      }//AkhirKel
	}//akhir7

 	//-------------------------Belah Ketupad------------------------------//

 	//-------------------------BATAS-BATAS--------------------------------//

 	//------------------------LAYANG_LAYANG-------------------------------//
	
	if ( n == 8){//awal8

	cout << endl;
	int x;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Luas dan Keliling Layang-Layang     " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                        Menu Layang-Layang           " << endl;
	cout << endl;
	cout << "                1. Luas Layang-Layang                " << endl; 
	cout << "                2. Keliling Layang-Layang            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Angka: ";
	cin  >> x;

	//-----------------------Luas Layang Layang----------------------------//

		if ( x == 1 ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << " Apakah Diagonal 1 dan Diagonal 2 dari Layang-Layang diketahui? [y/n] : "; 
	cin >> huruf;
	    
	    if ( huruf == 'y' ){
	float d1,d2,luas;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                   Mencari Luas Layang-Layang        " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Diagonal 1              : ";
	cin  >> d1;
	cout << "                Masukkan Diagonal 2              : ";
	cin  >> d2;
	luas = ( d1 * d2 ) / 2;
	cout << "                Luas Layang-Layang               : "       << luas << endl;
	cout << "                ----------------------------------   " << endl;	    
	}

	if ( huruf ==  'n' ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   "   << endl;
	cout << "                       Menngumpulkan Data            "   << endl;
	cout << "                ----------------------------------   "   << endl;
	cout << "              Jika Luas dari Layang-Layang Diketahui   " << endl; 
	cout << "     Apakah Anda ingin Mencari Diagonal 1 dari Layang-Layang  ? [y/n] : ";                      
	cin >> huruf;

	    if ( huruf == 'y' ){
	float luas,d1,d2;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "               Mencari Diagonal 1 dari Layang-Layang " << endl;
	cout << "                ----------------------------------   " << endl;  
	cout << "                Masukkan Luas                        : " ;
	cin  >> luas;
	cout << "                Masukkan Diagonal 2                  : " ;
	cin  >> d2;
	d1 = ( 2 * luas ) / d2;
	cout << "                Diagonal 1 dari Layang-Layang Adalah : " << d1 << endl;
	cout << "                ----------------------------------    " << endl;
	       }

	    if ( huruf == 'n' ){
	float luas,d1,d2;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "               Mencari Diagonal 2 dari Layang-Layang " << endl;
	cout << "                ----------------------------------   " << endl;  
	cout << "                Masukkan Luas                        : " ;
	cin  >> luas;
	cout << "                Masukkan Diagonal 1                  : " ;
	cin  >> d1;
	d2 = ( 2 * luas ) / d1;
	cout << "                Diagonal 2 dari Layang-Layang Adalah : " << d2 << endl;
	cout << "                ----------------------------------    " << endl;
	  }	     
    }  
  } 

  //-----------------------Luas Layang Layang----------------------------//

  //--------------------------BATAS-BATAS--------------------------------//

  //--------------------Keliling Layang Layang----------------------------//
	    
	    if ( x == 2 ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "       Apakah Sisi 1 dan Sisi 2 dari Layang-Layang diketahui? [y/n]: "; 
	cin >> huruf;
	    
	    if ( huruf == 'y' ){
	int s1,kel,s2;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                 Mencari Keliling Layang-Layang      " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Masukkan Sisi 1                : ";
	cin  >> s1;
	cout << "                Masukkan Sisi 2                : ";
	cin  >> s2;
	kel = ( 2 * ( s1 + s2 ) );
	cout << "                Keliling Layang-Layang Adalah  : "    << kel << endl;
	cout << "                ----------------------------------   " << endl;
	    } 

	    if ( huruf ==  'n' ){
	char huruf;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                       Menngumpulkan Data            " << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "           Jika Keliling dari Layang-Layang Diketahui" << endl; 
	cout << "      Apakah Anda ingin Mencari Sisi 1 dari Layang-Layang ? [y/n]: ";                      
	cin >> huruf;
	
	if ( huruf == 'y' ){
	float kel,s1,s2;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Mencari Sisi 1 dari Layang-Layang    " << endl;
	cout << "                ----------------------------------   " << endl;  
	cout << "                Masukkan Keliling                  : " ;
	cin  >> kel;
	cout << "                Masukkan Sisi 2                    : " ;
	cin  >> s2;
	s1 = ( kel - ( 2 * s2 )) / 2 ;
	cout << "                Sisi 1 dari Persegi Panjang Adalah : "<< s1 << endl;
	cout << "                ----------------------------------   " << endl;
	       }

	    if ( huruf == 'n' ){
	float kel,s1,s2;
	cout << endl;
	cout << "                ----------------------------------   " << endl;
	cout << "                Mencari Sisi 2 dari Layang-Layang    " << endl;
	cout << "                ----------------------------------   " << endl;  
	cout << "                Masukkan Keliling                  : " ;
	cin  >> kel;
	cout << "                Masukkan Sisi 1                    : " ;
	cin  >> s1;
	s2 = ( kel - ( 2 * s1 )) / 2 ;
	cout << "                Sisi 1 dari Persegi Panjang Adalah : "<< s2 << endl;
	cout << "                ----------------------------------   " << endl;   	
     	 }     
  	   }  
 	 }  
   //-------------------------Keliling Layang-Layang---------------- -//
	}//akhir 8
}//Void

void titik_ordinat ( int &titik_ordinat ){//awalvoid
	int x,y;
	cout << endl;
	cout << "                ---------------------------------" << endl;
	cout << "                    Cek Titik Ordinaat x dan y"    << endl;
	cout << "                ---------------------------------" << endl;
	cout << "                Masukkan Titik Ordinat x  : ";
	cin >> x;
	cout << "                Masukkan Titik Ordinat y  : ";
	cin >> y;

	if ( x == 0 and y == 0) {
    cout << endl;
    cout << "                Titik Ordinat x dan y Netral" << endl;
    cout << "                ---------------------------------" << endl;
    } 
    if ( x < 0 and y < 0) {
    cout << endl;
    cout << "              Titik Ordinat x Negatif dan y Negatif"<< endl;
    cout << "                ---------------------------------" << endl;
    }
    if ( x < 0 and y > 0) {
    cout << endl;
    cout << "              Titik Ordinat x Negatif dan y Positif"<< endl;
    cout << "                ---------------------------------" << endl;
    }
    if ( x > 0 and y < 0) {
    cout << endl;
    cout << "              Titik Ordinat x Positif dan y Negatif"<< endl;
    cout << "                ---------------------------------" << endl;
    }
    if ( x > 0 and y > 0) {
    cout << endl;
    cout << "              Titik Ordinat x Positif dan y Positif"<< endl;
    cout << "                ---------------------------------" << endl;
    }
    if ( x == 0 and y < 0) {
    cout << endl;
    cout << "              Titik Ordinat x Netral dan y Negatif" << endl;
    cout << "                ---------------------------------" << endl;
    }
    if ( x == 0 and y > 0) {
    cout << endl;
    cout << "              Titik Ordinat x Netral dan y Positif" << endl;
    cout << "                ---------------------------------" << endl;
    }
    if ( x < 0 and y == 0) {
    cout << endl;
    cout << "              Titik Ordinat x Negatif dan y Netral" << endl;
    cout << "                ---------------------------------" << endl;
    }
    if ( x > 0 and y == 0) {
    cout << endl;
    cout << "              Titik Ordinat x Positif dan y Netral" << endl;
    cout << "                ---------------------------------" << endl;
		}
}//akhirvoid

void tiga_bilangan(int &tiga_bilangan){//awalvoid
	int x,y,z;
	cout << endl;
	cout << "                ---------------------------------" << endl;
	cout << "                Cek Dua Bilangan yang Lebih Besar" << endl;
	cout << "                ---------------------------------" << endl;
	cout << "                   Masukkan Angka Pertama : ";
	cin  >> x;
	cout << "                   Masukkan Angka Kedua   : ";
	cin  >> y;
	cout << "                   Masukkan Angka Ketiga  : ";
	cin  >> z;

	// x y z and x z y
		if ( x > y and y > z ){
	cout << endl;
	cout << "        Angka Pertama > Angka Kedua > Angka Ketiga | " << x << " > " << y << " > " <<  z << " |" << endl;  
	cout << "                ---------------------------------" << endl;	
		}
		if ( x > z and z > y ){
	cout << endl;
	cout << "        Angka Pertama > Angka Ketiga > Angka Kedua | " << x << " > " << z << " > " <<  y << " |" << endl;  
	cout << "                ---------------------------------" << endl;	
		}
		if ( x == y and y > z ){
	cout << endl;
	cout << "         Angka Pertama = Angka Kedua  > Angka Ketiga | " << x << " = " << y << " > " <<  z << " |" << endl;  
	cout << "                ---------------------------------" << endl;	
		}
		if ( x == z and z > y ){
	cout << endl;
	cout << "        Angka Pertama = Angka Ketiga  > Angka Kedua | " << x << " = " << z << " > " <<  y << " |" << endl;  
	cout << "                ---------------------------------" << endl;	
		}
		if ( x > y and y == z ){
	cout << endl;
	cout << "         Angka Pertama > Angka Kedua  = Angka Ketiga | " << x << " > " << y << " = " <<  z << " |" << endl;  
	cout << "                ---------------------------------" << endl;	
		}

	// y x z and y z x
		if ( y > x and x > z ){
	cout << endl;
	cout << "        Angka Kedua > Angka Pertama > Angka Ketiga | " << y << " > " << x << " > " <<  z << " |" << endl;  
	cout << "                ---------------------------------" << endl;	
		}
		if ( y > z and z > x ){
	cout << endl;
	cout << "        Angka Kedua > Angka Ketiga > Angka Pertama | " << y << " > " << z << " > " <<  x << " |" << endl;  
	cout << "                ---------------------------------" << endl;	
		}
		if ( y == z and z > x ){
	cout << endl;
	cout << "        Angka Kedua = Angka Ketiga > Angka Pertama | " << y << " = " << z << " > " <<  x << " |" << endl;  
	cout << "                ---------------------------------" << endl;	
		}
		if ( y > x and x == z ){
	cout << endl;
	cout << "        Angka Kedua > Angka Pertama = Angka Ketiga | " << y << " > " << x << " = " <<  z << " |" << endl;  
	cout << "                ---------------------------------" << endl;	
		}

	// z x y and z y x
		if ( z > x and x > y ){
	cout << endl;
	cout << "        Angka Ketiga > Angka Pertama > Angka Kedua | " << z << " > " << x << " > " <<  y << " |" << endl;  
	cout << "                ---------------------------------" << endl;	
		}
		if ( z > y and y > x ){
	cout << endl;
	cout << "        Angka Ketiga > Angka Kedua > Angka Pertama | " << z << " > " << y << " > " <<  x << " |" << endl;  
	cout << "                ---------------------------------" << endl;	
		}
		if ( z > x and x == y ){
	cout << endl;
	cout << "        Angka Ketiga > Angka Pertama = Angka Kedua | " << z << " > " << x << " = " << y << " |" << endl;  
	cout << "                ---------------------------------" << endl;	
		}

		//x = y =x
		if ( x == y and y == z ){
	cout << endl;
	cout << "        Angka Pertama = Angka Kedua = Angka Ketiga | " << x << " = " << y << " = " << z << " |" << endl;  
	cout << "                ---------------------------------" << endl;	
		}
}//akhirvoid

void baca_angka (int &baca_angka){//awalvoid
	int a;
	cout << endl;
	cout << "                ---------------------------------" << endl;
	cout << "                 Cek angka yang akan dibaca (1-4)" << endl;
	cout << "                ---------------------------------" << endl;
	cout << "                 Masukkan Angka : ";
	cin  >> a; 

		if ( a > 0 and a < 5 ) {//awal
		if ( a == 1 ) {
	cout << endl;
	cout << "                 1 dibaca " << "Satu" << endl;
	cout << "                ---------------------------------" << endl;
		}
		if ( a == 2 ) {
	cout << endl;
	cout << "                 2 dibaca " << "Dua" << endl;
	cout << "                ---------------------------------" << endl;
		}
		if ( a == 3 ) {
	cout << endl;
	cout << "                 3 dibaca " << "Tiga" << endl;
	cout << "                ---------------------------------" << endl;
		}	
		if ( a == 4 ) {
	cout << endl;
	cout << "                 4 dibaca " << "Empat" << endl;
	cout << "                ---------------------------------" << endl;
		}
	}//akhir
		else {
	cout << endl;
	cout << "                 Tidak Memenuhi" << endl;
	cout << "                ---------------------------------" << endl;
		}
}//akhirvoid

void baca_bulan (int &baca_bulan){//awalvoid
	int a;
	cout << endl;
	cout << "                ---------------------------------"      << endl;
	cout << "            Cek Bulan dan jumlah harinya di tahun 2020" << endl;
	cout << "                ---------------------------------"      << endl;
	cout << "             Masukkan Angka yang mewakilkan bulan : ";
	cin  >> a; 

		if ( a > 0 and a < 13 ) {//awal
		if ( a == 1 ) {
	cout << endl;
	cout << "              Bulan Januari yang berjumlah 31 hari"     << endl;
	cout << "                ---------------------------------"      << endl;
		}
		if ( a == 2 ) {
	cout << endl;
	cout << "              Bulan Februari yang berjumlah 29 hari"    << endl;
	cout << "                ---------------------------------"      << endl;
		}
		if ( a == 3 ) {
	cout << endl;
	cout << "                Bulan Maret yang berjumlah 31 hari"     << endl;
	cout << "                ---------------------------------"      << endl;
		}	
		if ( a == 4 ) {
	cout << endl;
	cout << "                Bulan April yang berjumlah 30 hari"      << endl;
	cout << "                ---------------------------------"      << endl;
		}
		if ( a == 5 ) {
	cout << endl;
	cout << "                Bulan Mei yang berjumlah 31 hari"       << endl;
	cout << "                ---------------------------------"      << endl;
		}
		if ( a == 6 ) {
	cout << endl;
	cout << "                Bulan Juni yang berjumlah 30 hari"      << endl;
	cout << "                ---------------------------------"      << endl;
		}
		if ( a == 7 ) {
	cout << endl;
	cout << "                Bulan Juli yang berjumlah 31 hari"      << endl;
	cout << "                ---------------------------------"      << endl;
		}
		if ( a == 8 ) {
	cout << endl;
	cout << "              Bulan Agustus yang berjumlah 31 hari"     << endl;
	cout << "                ---------------------------------"      << endl;
		}
		if ( a == 9 ) {
	cout << endl;
	cout << "              Bulan September yang berjumlah 30 hari"   << endl;
	cout << "                ---------------------------------"      << endl;
		}
		if ( a == 10 ) {
	cout << endl;
	cout << "               Bulan Oktober yang berjumlah 31 hari"    << endl;
	cout << "                ---------------------------------"      << endl;
		}
		if ( a == 11 ) {
	cout << endl;
	cout << "               Bulan November yang berjumlah 30 hari"   << endl;
	cout << "                ---------------------------------"      << endl;
		}
		if ( a == 12 ) {
	cout << endl;
	cout << "               Bulan Desember yang berjumlah 31 hari"   << endl;
	cout << "                ---------------------------------"      << endl;
		}
		}//akhir
		else {
	cout << endl;
	cout << "                Tidak Memenuhi" << endl;
	cout << "                ---------------------------------"      << endl;
		}
}//akhirvoid

void upah_pekerja (int &upah_pekerja){//awalvoid
	int x,cek;
	cout << endl;
	cout << "                --------------------------------- "	<< endl;
	cout << "               Cek Upah Karyawan dalam Satu Minggu"	<< endl;
	cout << "                --------------------------------- "	<< endl;
	cout << "               Upah karyawan per jam = Rp.4000,   " 	<< endl;
	cout << "   jikalau karyawan bekerja lebih dari 48 jam maka upahnya = Rp.3000" << endl;
	cout << "                      1 Minggu = 168 jam "				<< endl;
	cout << endl;
	cout << "              Masukkan Berapa Jam Karyawan Bekerja : ";
	cin  >> x; 
	
		
		if ( x < 49 and x > 0) {//awal
	cek = x*4000; 
	cout << endl;
	cout << "              Upah karyawan selama " << x << " jam adalah Rp." << cek << endl;
	cout << "                --------------------------------- "	<< endl;
 		}//akhir
 		if ( x > 48 and x < 169 ) {//awal2
 	cek = ( x*4000 )-1000;
 	cout << endl;
 	cout << "              Upah karyawan selama " << x << " jam adalah Rp." << cek << endl; 
 	cout << "                --------------------------------- "	<< endl;
 		}//akhir3
 		if (x<1) {
 	cout << endl;
 	cout << "                --------------------------------- "	<< endl;
 	cout << "                        Tidak Tersedia" 				<< endl;
 		}
 		if (x>168) {
 	cout << endl;
 	cout << "                --------------------------------- "	<< endl;
 	cout << "                        Tidak Tersedia" 				<< endl;
 		}	
}//akhirvoid

void genap_ganjil (int &genap_ganjil){
	int a,hasil;
	char x;
	cout << endl;
	cout << "                ---------------------------------"      << endl;
	cout << "            	   Cek Bilangan Genap dan Ganjil  "		 << endl;
	cout << "                ---------------------------------"      << endl;
	cout << "                Masukkan Angka : ";
	cin  >> a; 
	hasil = a % 2;
	if (a){	
		if ( hasil == 0 ){
	cout << endl;
	cout << "                Bilangan yang Anda masukkan Genap :  " << a << endl;
	cout << "                ---------------------------------"      << endl;
		}
		if ( hasil != 0 ) {
	cout << endl;
	cout << "                Bilangan yang Anda masukkan Ganjil :  " << a << endl;
	cout << "                ---------------------------------"      << endl;
		}
	}
	
		else {
	cout << endl;
 	cout << "                --------------------------------- "	<< endl;
 	cout << "                        Tidak Tersedia" 				<< endl;
		}
}

void indeks_nilai (int &indeks_nilai){
	int x;
	cout << endl;
	cout << "                ----------------------------" 	<< endl;
	cout << "                     Cek Indeks Nilai " 		<< endl;
	cout << "                ----------------------------" 	<< endl;
	cout << "                Masukkan Nilai  : ";
	cin >> x;
		if (x){
		if ( x > 79 and x < 101 ){//A
	cout << endl;
	cout << "                " << x << " Memiliki Indeks Nilai = A" << endl;
	cout << "                ----------------------------" 			<< endl;
		}//A
		if ( x > 69 and x < 80 ){//B
	cout << endl;
	cout << "                " << x << " Memiliki Indeks Nilai = B" << endl;
	cout << "                ----------------------------" 			<< endl;
		}//B
		if ( x < 70 and x > 54 ){//C
	cout << endl;
	cout << "                " << x << " Memiliki Indeks Nilai = C" << endl;
	cout << "                ----------------------------" 			<< endl;
		}//C
		if ( x < 55 and x > 40 ){//D
	cout << endl;
	cout << "                " << x << " Memiliki Indeks Nilai = D" << endl;
	cout << "                ----------------------------" 			<< endl;
		}//D
		if ( x < 40 and x > 0 ){//E
	cout << endl;
	cout << "                " << x << " Memiliki Indeks Nilai = E" << endl;
	cout << "                ----------------------------" 			<< endl;
		}//E
		if ( x == 0 ){//0
	cout << endl;
	cout << "                Nilai " << x << " Kebacut" << endl;
	cout << "                ----------------------------" 			<< endl;
		}//0
		if ( x < 0 ){//0
	cout << endl;
	cout << "                Nilai " << x << " Tidak Memenuhi"	 	<< endl;
	cout << "                ----------------------------" 			<< endl;
		}//0
		if ( x > 100 ){//0
	cout << endl;
	cout << "                Nilai " << x << " Tidak Memenuhi" 		<< endl;
	cout << "                ----------------------------" 			<< endl;
		}//0
	}
	else {
	cout << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                -----------------------------"      << endl;
	  }	
}

void perhitungan_dasar (int &perhitungan_dasar){
	cout << endl;
	float x;
	float y;
	float tambah;
	float kurang;
	float kali;
	float bagi;
	cout << "                ----------------------------" 		<< endl;
	cout << "             Cek Perhitungan Dasar Dua Bilangan "  << endl;
	cout << "                ----------------------------" 		<< endl;
	cout << endl;
	cout << "                Masukkan Angka Pertama: ";
	cin  >> x;
	cout << "                Masukkan Angka Kedua: ";
	cin  >> y;
	tambah = x+y;
	cout << endl;
	cout << "                 " << x << " + " << y << " = " << tambah << endl;
	kurang = x-y;
	cout << "                 " << x << " - " << y << " = " << kurang << endl;
	kali   = x*y;
	cout << "                 " << x << " x " << y << " = " << kali << endl;
	bagi   = x/y;
	cout << "                 " << x << " : " << y << " = " << bagi << endl;
	cout << "                ----------------------------" 		<< endl;
}

void tahun_karbisat (int &tahun_karbisat){
	int x;
	int hasil;
	cout << endl;
	cout << "                ----------------------------" 		<< endl;
	cout << "                    Cek Tahun Karbisat "  			<< endl;
	cout << "                ----------------------------" 		<< endl;
	cout << "                Masukkan Tahun: ";
	cin  >> x;
	hasil = x % 4;
		if ( hasil == 0 ){//awal2
	cout << endl;
	cout << "                " << x << " adalah Tahun Karbisat" << endl;
	cout << "                ----------------------------" 		<< endl;
		}//akhir2
		else {
	cout << endl;
	cout << "                " << x << " Bukan Tahun Karbisat" << endl;
	cout << "                ----------------------------" 		<< endl;
		}
}

void tempreratur_air (int &tempreratur_air){
	int x;
	cout << endl;
	cout << "                ----------------------------" 		<< endl;
	cout << "                    Cek Temperatur Air "  			<< endl;
	cout << "                ----------------------------" 		<< endl;
	cout << "                Masukkan suhu air: ";
		cin >> x;
		if ( x < 0 ){//membeku
	cout << endl;
	cout << "                Suhu " << x << " derajat membuat air dalam keadaan Cair" << endl;
	cout << "                ----------------------------" 		<< endl;
		}//membeku
		if ( x < 101 and x > 0 ){//memadat
	cout << endl;
	cout << "                Suhu " << x << " derajat membuat air dalam keadaan Padat/Membeku" << endl;
	cout << "                ----------------------------" 		<< endl;
		}//memadat
		if (  x > 100 ){//gas
	cout << endl;
	cout << "                Suhu " << x << " derajat membuat air dalam keadaan Gas" << endl;
	cout << "                ----------------------------" 		<< endl;
		}//mgas
}

void deret_fibonacci (int &deret_fibonacci){
	int n,f_n1,f_n2,f_n;
	cout << endl;
	cout << "                ----------------------------" 	<< endl;
	cout << "                     Cek Deret Fibonacci" 		<< endl;
	cout << "                ----------------------------" 	<< endl;
	cout << "                Masukkan nilai n: ";
    cin >> n;
    	if (n){
    f_n1 = 1;
    f_n2 = 0;
    cout << endl;
    cout << "                 " << f_n2 << endl;
    cout << endl;
    cout << "                 " << f_n1 << endl;
		for( int i = 1; i < n-1; i++){
    f_n = f_n1 + f_n2;
    f_n2 = f_n1;
    f_n1 = f_n;
    cout << endl;
    cout << "                 " << f_n << endl;
		}
	}
		else {
	cout << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                ----------------------------"  << endl;
	  }	
	cout << "                ----------------------------" 	<< endl;
}

void rata_rata (int &rata_rata){
	float n,rerata,data;
 	float jumlah=0;
 	cout << endl;
	cout << "                ----------------------------" 	<< endl;
	cout << "                       Cek Rata-Rata" 			<< endl;
	cout << "                ----------------------------" 	<< endl;
	cout << endl;
	cout << "                Masukkan berapa jumlah data anda" << endl;
 	cout << "                Masukkan angka: "; 
 	cin >> n;
 	cout << endl;
 		
 		for ( int y = 1; y <= n; y++ ){
  	cout << "                Masukkan data " << y << ": ";
 	cin  >> data;
 	jumlah = jumlah + data;
 	}
 	cout << endl;
 	rerata = jumlah / n;
 	cout << "                Jumlah data anda    : " 		<< jumlah << endl;
 	cout << "                Rata-Rata data anda : " 		<< rerata << endl;
 	cout << "                ----------------------------" 	<< endl;
}

void sistem_bilangan (int &sistem_bilangan){
	int x,sisa,bagi,y;
	cout << endl;
	cout << "                ------------------------------------" << endl;
	cout << "                  PROGRAM KONVERSI SISTEM BILANGAN"   << endl;
	cout << "                ------------------------------------" << endl;
	cout << "                 | 1. Desimal      ke Biner        |" << endl;
	cout << "                 | 2. Desimal      ke Oktal        |" << endl;
	cout << "                 | 3. Desimal      ke Heksadesimal |" << endl;
	cout << "                 | 4. Biner        ke Desimal      |" << endl;
	cout << "                 | 5. Oktal        ke Desimal      |" << endl;
	cout << "                 | 6. Heksadesimal ke Desimal      |" << endl;
	cout << "                ------------------------------------" << endl;
	cout << "                Masukkan Angka: ";
	cin  >> y;

	//Desimal ke Biner 
		if ( y == 1 ){
	cout << endl;
	cout << "                ------------------------------------" << endl;
	cout << "                          Desimal ke Biner"		   << endl;
	cout << "                ------------------------------------" << endl;        
	cout << "                Masukkan Bilangan Desimal: ";
	cin >> x;
	cout << endl;
		for( int i = 1;  i <= x; i--){
	sisa = x % 2;
	x = x / 2;
	cout << "                | Bilangan Biner Anda: " << sisa << " |"  << endl;
		if ( x == 0 ){
		break;
		}
		}

	//desimal ke Heksadesimal
	cout << endl;
	cout << "                Ambil dari Bawah ke Atas" << endl;
	cout << "                ------------------------------------" << endl;
		}

	//desimal ke Oktal
		if ( y == 2 ){
	cout << endl;
	cout << "                ------------------------------------" << endl;
	cout << "                          Desimal ke Oktal"		   << endl;
	cout << "                ------------------------------------" << endl;    
	cout << "                Masukkan Bilangan Desimal: ";
	cin >> x;
	cout << endl;
		for( int i = 1;  i <= x; i--){
	sisa = x % 8;
	x = x / 8;
	cout << "                | Bilangan Oktal Anda: " << sisa << " |"  << endl;
		if ( x == 0 ){
			break;
			}
		}
	cout << endl;
	cout << "                Ambil dari Bawah ke Atas" << endl;
	cout << "                ------------------------------------" << endl;
	}
		if ( y == 3 ){
	cout << endl;
	cout << "                ------------------------------------" << endl;
	cout << "                       Desimal ke Heksadesimal" << endl;
	cout << "                ------------------------------------" << endl;
	cout << "                Masukkan Bilangan Desimal: ";
	cin >> x;
	cout << endl;
		for( int i = 1;  i <= x; i--){
	sisa = x % 16;
	x = x / 16;
		if ( sisa < 10 ){
	cout << "                | Bilangan Heksadesimal Anda: " << sisa << " |"  << endl;
		}
		if ( sisa == 10 ){
	cout << "                | Bilangan Heksadesimal Anda: A |" << endl;
		}
		if ( sisa == 11 ){
	cout << "                | Bilangan Heksadesimal Anda: B |" << endl;
		}
		if ( sisa == 12 ){
	cout << "                | Bilangan Heksadesimal Anda: C |" << endl;
		}
		if ( sisa == 13 ){
 	cout << "                | Bilangan Heksadesimal Anda: D |" << endl;
		}
		if ( sisa == 14 ){
	cout << "                | Bilangan Heksadesimal Anda: E |" << endl;
		}
		if ( sisa == 15 ){
	cout << "                | Bilangan Heksadesimal Anda: F |" << endl;
		}
		if ( x == 0 ){
			break;
			}
		}
	cout << endl;
	cout << "                Ambil dari Bawah ke Atas" << endl;
	}

 	// Biner   ke Desimal
 	if ( y == 4 ){
 	cout << endl;
	cout << "                ------------------------------------" 			<< endl;
	cout << "                          Biner ke Desimal" 					<< endl;
	cout << "                ------------------------------------" 			<< endl;
	cout << endl;
	cout << "                Bilangan Biner ( 0 dan 1 ) ke Bilangan Desimal" << endl;
	cout << endl;
	cout << "                Ketik 1  jika bilanganya satu     angka" 		<< endl;
	cout << "                Ketik 2  jika bilanganya dua      angka" 		<< endl;
	cout << "                Ketik 3  jika bilanganya tiga     angka" 		<< endl;
	cout << "                Ketik 4  jika bilanganya empat    angka" 		<< endl;
	cout << "                Ketik 5  jika bilanganya lima     angka" 		<< endl;
	cout << "                Ketik 6  jika bilanganya enam     angka" 		<< endl;
	cout << "                Ketik 7  jika bilanganya tujuh    angka" 		<< endl;
	cout << "                Ketik 8  jika bilanganya delapan  angka" 		<< endl;
	cout << "                Ketik 9  jika bilanganya sembilan angka" 		<< endl;
	cout << "                Ketik 10 jika bilanganya sepuluh  angka" 		<< endl;
	cout << endl;
	cout << "                Masukkan angka: ";
	cin >> x;
	//satuangka
	if ( x == 1 ){//Binert
	int a,hasil;
	cout << "                ---------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama       : ";
	cin >> a;
	if (a < 2 and a > -1){
	cout << "                Bilangan Biner yang anda maksud : " << a << endl;
	hasil = 1 * a;
	cout << "                Bilangan Desimalnya adalah      : " << hasil << endl;
	cout << "                ---------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}//biner

	//dua angka
	if ( x == 2 ){//Binert
	int a,b,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;                
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	if (b < 2 and b > -1){
	cout << "                Bilangan Biner yang anda maksud              : " << a << b << endl;
	hasil = (2 * a) + (1 * b);
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}//biner

	//tiga angka
	if ( x == 3 ){//Binert
	int a,b,c,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	if (b < 2 and b > -1){
	cout << "                Bilangan Biner yang anda maksud              : " << a << b << c << endl;
	hasil = (4 * a) + (2 * b) + (1 * c) ;
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}//biner

	//empat angka
	if ( x == 4 ){//Binert
	int a,b,c,d,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	if (b < 2 and b > -1){
	cout << "                Bilangan Biner yang anda maksud              : " << a << b << c << d << endl;
	hasil = (8 * a) + (4 * b) + (2 * c) + (1 * d) ;
	cout << "Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}//biner

	//lima angka
	if ( x == 5 ){//Binert
	int a,b,c,d,e,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	if (b < 2 and b > -1){
	cout << "                Bilangan Biner yang anda maksud              : " << a << b << c << d << e << endl;
	hasil = (16 * a) + (8 * b) + (4 * c) + (2 * d) + (1 * e) ;
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}//biner

	//enam angka
	if ( x == 6 ){//Binert
	int a,b,c,d,e,f,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "                Masukkan Bilangan keenam                     : ";
	cin >> f;
	if (b < 2 and b > -1){
	cout << "                Bilangan Biner yang anda maksud              : " << a << b << c << d << e << f << endl;
	hasil = (32 * a) + (16 * b) + (8 * c) + (4 * d) + (2 * e) + (1 * f) ;
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}//biner

	//tujuh angka
	if ( x == 7 ){//Binert
	int a,b,c,d,e,f,g,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "                Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "                Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	if (b < 2 and b > -1){
	cout << "                Bilangan biner yang anda maksud              : " << a << b << c << d << e << f << g << endl;
	hasil = (64 * a) + (32 * b) + (16 * c) + (8 * d) + (4 * e) + (2 * f) + (1 * g);
	cout << "                Bilangan desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}//biner

	//delapan angka
	if ( x == 8 ){//Binert
	int a,b,c,d,e,f,g,h,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "                Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "                Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "                Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	if (b < 2 and b > -1){
	cout << "                Bilangan biner yang anda maksud              : " << a << b << c << d << e << f << g << h << endl;
	hasil = (128 * a) + (64 * b) + (32 * c) + (16 * d) + (8 * e) + (4 * f) + (2 * g) + (h * 1);
	cout << "                Bilangan desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}//biner

	//sembilan angka
	if ( x == 9 ){//Binert
	int a,b,c,d,e,f,g,h,i,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "                Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "                Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "                Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	cout << "                Masukkan Bilangan kesembilan                 : ";
	cin >> i;
	if (b < 2 and b > -1){
	cout << "                Bilangan biner yang anda maksud              : " << a << b << c << d << e << f << g << h  << i << endl;
	hasil = (256 * a) + (128 * b) + (64 * c) + (32 * d) + (16 * e) + (8 * f) + (4 * g) + (h * 2) + (i * 1);
	cout << "                Bilangan desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}//biner

	//sembilan angka
	if ( x == 10 ){//Binert
	int a,b,c,d,e,f,g,h,i,j,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "                Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "                Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "                Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	cout << "                Masukkan Bilangan kesembilan                 : ";
	cin >> i;                
	cout << "                Masukkan Bilangan kesepuluh                  : ";
	cin >> j;
	if (b < 2 and b > -1){
	cout << "                Bilangan biner yang anda maksud              : " << a << b << c << d << e << f << g << h  << i << j << endl;
	hasil = (512 * a) + (256 * b) + (128 * c) + (64 * d) + (32 * e) + (16 * f) + (8 * g) + (h * 4) + (i * 2) + (j * 1);
	cout << "                Bilangan desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
			}
		}//biner
	}

	// Oktal   ke Desimal
 	if ( y == 5 ){//awalif
 	cout << endl;
	cout << "                ------------------------------------" 			<< endl;
	cout << "                         Oktal ke Desimal" 					<< endl;
	cout << "                ------------------------------------" 			<< endl;
	cout << endl;
	cout << "                Bilangan Oktal ( 1 - 7 ) ke Bilangan Desimal" << endl;
	cout << endl;
	cout << "                Ketik 1 jika bilanganya  satu     angka" << endl;
	cout << "                Ketik 2 jika bilanganya  dua      angka" << endl;
	cout << "                Ketik 3 jika bilanganya  tiga     angka" << endl;
	cout << "                Ketik 4 jika bilanganya  empat    angka" << endl;
	cout << "                Ketik 5 jika bilanganya  lima     angka" << endl;
	cout << "                Ketik 6 jika bilanganya  enam     angka" << endl;
	cout << "                Ketik 7 jika bilanganya  tujuh    angka" << endl;
	cout << "                Ketik 8 jika bilanganya  delapan  angka" << endl;
	cout << "                Ketik 9 jika bilanganya  sembilan angka" << endl;
	cout << "                Ketik 10 jika bilanganya sembilan angka" << endl;
	cout << endl;
	cout << "                Masukkan angka: ";
	cin >> x;


	//satuangka
	if ( x == 1 ){
	long a,hasil;
	cout << "                ---------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama       : ";
	cin >> a;
	if (a < 8 and a > -1 ){
	cout << "                Bilangan Oktal yang anda maksud : " << a << endl;
	hasil = 1 * a;
	cout << "                Bilangan Desimalnya adalah      : " << hasil << endl;
	cout << "                ---------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	//dua angka
	if ( x == 2 ){
	long a,b,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	if (b < 8 and a > -1 ){
	cout << "                Bilangan Oktal yang anda maksud              : " << a << b << endl;
	hasil = (8 * a) + (1 * b);
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	//tiga angka
	if ( x == 3 ){//Binert
	long a,b,c,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	if (b < 8 and a > -1 ){
	cout << "                Bilangan Oktal yang anda maksud              : " << a << b << c << endl;
	hasil = (64 * a) + (8 * b) + (1 * c) ;
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	//empat angka
	if ( x == 4 ){//Binert
	long a,b,c,d,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	if (b < 8 and a > -1 ){
	cout << "                Bilangan Oktal yang anda maksud              : " << a << b << c << d << endl;
	hasil = (512 * a) + (64 * b) + (8 * c) + (1 * d) ;
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	//lima angka
	if ( x == 5 ){
	long a,b,c,d,e,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	if (b < 8 and a > -1 ){
	cout << "                Bilangan Oktal yang anda maksud              : " << a << b << c << d << e << endl;
	hasil = (4096 * a) + (512 * b) + (64 * c) + (8 * d) + (1 * e) ;
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	//enam angka
	if ( x == 6 ){//Binert
	long a,b,c,d,e,f,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "                Masukkan Bilangan keenam                     : ";
	cin >> f;
	if (b < 8 and a > -1 ){
	cout << "                Bilangan Oktal yang anda maksud              : " << a << b << c << d << e << f << endl;
	hasil = (32768 * a) + (4090 * b) + (512 * c) + (64 * d) + (8 * e) + (1 * f) ;
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	//tujuh angka
	if ( x == 7 ){//Binert
	long a,b,c,d,e,f,g,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "                Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "                Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	if (b < 8 and a > -1 ){
	cout << "                Bilangan Oktal yang anda maksud              : " << a << b << c << d << e << f << g << endl;
	hasil = (262144 * a) + (32768 * b) + (4096 * c) + (512 * d) + (64 * e) + (8 * f) + (1 * g);
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	//delapan angka
	if ( x == 8 ){//Binert
	long a,b,c,d,e,f,g,h,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "                Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "                Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "                Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	if (b < 8 and a > -1 ){
	cout << "                Bilangan Oktal yang anda maksud              : " << a << b << c << d << e << f << g << h << endl;
	hasil = (2097152 * a) + (262144 * b) + (32768 * c) + (4096 * d) + (512 * e) + (64 * f) + (8 * g) + (h * 1);
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	//sembilan angka
	if ( x == 9 ){//Binert
	long a,b,c,d,e,f,g,h,i,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "                Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "                Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "                Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	cout << "                Masukkan Bilangan kesembilan                 : ";
	cin >> i;
	if (b < 8 and a > -1 ){
	cout << "                Bilangan Oktal yang anda maksud              : " << a << b << c << d << e << f << g << h  << i << endl;
	hasil = (16777216 * a) + (2097152 * b) + (262144 * c) + (32768 * d) + (4096 * e) + (512 * f) + (64 * g) + (h * 8) + (i * 1);
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	//sembilan angka
	if ( x == 10 ){//Binert
	long a,b,c,d,e,f,g,h,i,j,hasil;
	cout << "                ----------------------------------------------" << endl;
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "                Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "                Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "                Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	cout << "                Masukkan Bilangan kesembilan                 : ";
	cin >> i;
	cout << "                Masukkan Bilangan kesepuluh                  : ";
	cin >> j;
	if (b < 8 and a > -1 ){
	cout << "                Bilangan Oktal yang anda maksud              : " << a << b << c << d << e << f << g << h  << i << j << endl;
	hasil = (134217728 * a) + (16777216 * b) + (2097152 * c) + (262144 * d) + (32768 * e) + (4096 * f) + (512 * g) + (h * 64) + (i * 8) + ( j * 1 );
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                ----------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
			}
		}
	}//akhirif



	//Heksadesimal ke Desimal
	
	if ( y == 6 ){//awalif
	cout << endl;
	cout << "                ------------------------------------" 			<< endl;
	cout << "                       Heksadesimal ke Desimal" 				<< endl;
	cout << "                ------------------------------------" 			<< endl;
	cout << endl;
	cout << "                Bilangan Heksadesimal ( 1 - 15 ) ke Bilangan Desimal" << endl;
	cout << endl;
	cout << "                Ketik 1 jika bilanganya  satu     angka" << endl;
	cout << "                Ketik 2 jika bilanganya  dua      angka" << endl;
	cout << "                Ketik 3 jika bilanganya  tiga     angka" << endl;
	cout << "                Ketik 4 jika bilanganya  empat    angka" << endl;
	cout << "                Ketik 5 jika bilanganya  lima     angka" << endl;
	cout << "                Ketik 6 jika bilanganya  enam     angka" << endl;
	cout << "                Ketik 7 jika bilanganya  tujuh    angka" << endl;
	cout << "                Ketik 8 jika bilanganya  delapan  angka" << endl;
	cout << "                Ketik 9 jika bilanganya  sembilan angka" << endl;
	cout << "                Ketik 10 jika bilanganya sembilan angka" << endl;
	cout << endl;
	cout << "                Masukkan angka: ";
	cin >> x;

	//satuangka
	if ( x == 1 ){//Binert
	long a,hasil;
	cout << "                ------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "                (A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu bilangan" << endl;
	cout << endl;
	cout << "                --------------------------------------------------------------------" << endl; 
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	if (a < 16 and a > -1){
	cout << "                Bilangan Heksadesimal yang anda maksud       : " << a << endl;
	hasil = (1 * a);
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                --------------------------------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

		//satuangka
	if ( x == 2 ){//Binert
	long a,b,hasil;
	cout << "                ------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "                (A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu bilangan" << endl;
	cout << endl;
	cout << "                --------------------------------------------------------------------" << endl; 
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	if (a < 16 and a > -1){
	cout << "                Bilangan Heksadesimal yang anda maksud       : " << a << b << endl;
	hasil = (16 * a) + (1 * b);
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                --------------------------------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	//tiga angka
	if ( x == 3 ){//Binert
	long a,b,c,hasil;
	cout << "                ------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "                (A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu bilangan" << endl;
	cout << endl;
	cout << "                --------------------------------------------------------------------" << endl; 
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	if (a < 16 and a > -1){
	cout << "                Bilangan Heksadesimal yang anda maksud       : " << a << b << c << endl;
	hasil = (256 * a) + (16 * b) + (1 * c) ;
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                --------------------------------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	 //empat angka
	if ( x == 4 ){//Binert
	int a,b,c,d,hasil;
	cout << "                ------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "                (A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu bilangan" << endl;
	cout << endl;
	cout << "                --------------------------------------------------------------------" << endl; 
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	if (a < 16 and a > -1){
	cout << "                Bilangan Heksadesimal yang anda maksud       : " << a << b << c << d << endl;
	hasil = (4096 * a) + (256 * b) + (16 * c) + (1 * d) ;
	cout << "                Bilangan Desimalnya adalah: " << hasil << endl;
	cout << "                --------------------------------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	//lima angka
	if ( x == 5 ){//Binert
	int a,b,c,d,e,hasil;
	cout << "                ------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "                (A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu bilangan" << endl;
	cout << endl;
	cout << "                --------------------------------------------------------------------" << endl; 
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	if (a < 16 and a > -1){
	cout << "                Bilangan Heksadesimal yang anda maksud       : " << a << b << c << d << e << endl;
	hasil = (65536 * a) + (4096 * b) + (256 * c) + (16 * d) + (1 * e) ;
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                --------------------------------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	//enam angka
	if ( x == 6 ){//Binert
	long a,b,c,d,e,f,hasil;
	cout << "                ------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "                (A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu bilangan" << endl;
	cout << endl;
	cout << "                --------------------------------------------------------------------" << endl; 
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "                Masukkan Bilangan keenam                     : ";
	cin >> f;
	if (a < 16 and b > -1){
	cout << "                Bilangan Heksadesimal yang anda maksud       : " << a << b << c << d << e << f << endl;
	hasil = (1048576 * a) + (65536 * b) + (4096 * c) + (256 * d) + (16 * e) + (1 * f) ;
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                --------------------------------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	//tujuh angka
	if ( x == 7 ){//Binert
	long a,b,c,d,e,f,g,hasil;
	cout << "                ------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "                (A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu bilangan" << endl;
	cout << endl;
	cout << "                --------------------------------------------------------------------" << endl; 
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "                Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "                Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	if (a < 16 and a > -1){
	cout << "                Bilangan Heksadesimal yang anda maksud       : " << a << b << c << d << e << f << g << endl;
	hasil = (16777216 * a) + ( 1048576 * b) + (65536 * c) + (4096 * d) + (256 * e) + (16 * f) + (1 * g);
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                --------------------------------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	//delapan angka
	if ( x == 8 ){//Binert
	long a,b,c,d,e,f,g,h,hasil;
	cout << "                ------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "                (A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu angka" << endl;
	cout << endl;
	cout << "                --------------------------------------------------------------------" << endl; 
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "                Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "                Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "                Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	if (a < 16 and a > -1){
	cout << "                Bilangan Heksadesimal yang anda maksud       : " << a << b << c << d << e << f << g << h << endl;
	hasil = (268435456 * a) + (16777216 * b) + (1048576 * c) + (65536 * d) + (4096 * e) + (256 * f) + (16 * g) + (h * 1);
	cout << "                Bilangan Desimalnya adalah                   : " << hasil << endl;
	cout << "                --------------------------------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	//sembilan angka
	if ( x == 9 ){//Binert
	long a,b,c,d,e,f,g,h,i,hasil;
	cout << "                ------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "                (A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu angka" << endl;
	cout << endl;
	cout << "                --------------------------------------------------------------------" << endl; 
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "                Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "                Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "                Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	cout << "                Masukkan Bilangan kesembilan                 : ";
	cin >> i;
	if (a < 16 and a > -1){
	cout << "                Bilangan Heksadesimal yang anda maksud       : " << a << b << c << d << e << f << g << h  << i << endl;
	hasil = (4294967296 * a) + (268435456 * b) + (16777216 * c) + (1048576 * d) + (65536 * e) + (4096 * f) + (256 * g) + (16 * h) + (i * 1);
	cout << "                Bilangan desimalnya adalah                   : " << hasil << endl;
	cout << "                --------------------------------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
	}
	}

	//sembilan angka
	if ( x == 10 ){//Binert
	long a,b,c,d,e,f,g,h,i,j,hasil;
	cout << "                ------------------ Untuk Heksadesimal ke Desimal -------------------" << endl;
	cout << endl;
	cout << "                (A = 10, B = 11, C = 12, D = 13, E = 14, F = 15) dianggap satu angka" << endl;
	cout << endl;
	cout << "                --------------------------------------------------------------------" << endl; 
	cout << "                Masukkan Bilangan pertama dari kiri ke kanan : ";
	cin >> a;
	cout << "                Masukkan Bilangan kedua                      : ";
	cin >> b;
	cout << "                Masukkan Bilangan ketiga                     : ";
	cin >> c;
	cout << "                Masukkan Bilangan keempat                    : ";
	cin >> d;
	cout << "                Masukkan Bilangan kelima                     : ";
	cin >> e;
	cout << "                Masukkan Bilangan keenam                     : ";
	cin >> f;
	cout << "                Masukkan Bilangan ketujuh                    : ";
	cin >> g;
	cout << "                Masukkan Bilangan kedelapan                  : ";
	cin >> h;
	cout << "                Masukkan Bilangan kesembilan                 : ";
	cin >> i;
	cout << "                Masukkan Bilangan kesepuluh                  : ";
	cin >> j;
	if (a < 16 and a > -1){
	cout << "                Bilangan Heksadesimal yang anda maksud       : " << a << b << c << d << e << f << g << h  << i << j << endl;
	hasil = (68719476736 * a) + (4294967296 * b) + (268435456 * c) + (16777216 * d) + (1048576 * e) + (65536 * f) + (4096 * g) + (256 * h) + (16 * i) + (j * 1);
	cout << "                Bilangan desimalnya adalah                   : " << hasil << endl;
	cout << "                --------------------------------------------------------------------" << endl;
	}
	else {
	cout << "                --------------" << endl;
	cout << "                Tidak Tersedia" << endl;
	cout << "                --------------" << endl;
			}
		}
 	}
}

void grafik_nilai (int&grafik_nilai){
	cout << endl;
	cout << "                ---------------------------------" << endl;
	cout << "                   Cek Grafik Nilai pada Pelajar" 	<< endl;
	cout << "                ---------------------------------" << endl;


	array < int, 11 > nilai;
	for ( int i = 0; i < nilai.size(); i++ ){
	cout << "                Jumlah pelajar dengan nilai ";
		if ( i == 0 ){
	cout << "0-9  : ";
		}else if ( i == 10 ){
	cout << "100  : ";
		}
		else{
	cout << i*10 << "-" << (i*10)+9 << ": ";
		}
	cin >> nilai[i];
	}
	cout << "                ---------------------------------" << endl;

	cout << endl << endl;

	cout << "                ---------------------------------" << endl;
	cout << "                           Grafik Nilai" 			<< endl;
	cout << "                ---------------------------------" << endl;
	for ( int i = 0; i < nilai.size(); i++ ){
	cout << "                Jumlah pelajar dengan nilai ";
		if ( i == 0 ){
	cout << "0-9  : ";
		}else if ( i == 10 ){
	cout << "100  : ";
		}
		else{
	cout << i*10 << "-" << (i*10)+9 << ": ";
		}
			for ( int b = 0; b < nilai[i]; b++){
	cout << "*";
			}
		cout << endl;
	}
	cout << "                ---------------------------------" << endl;

}

void faktorial (int&faktorial){
	int angka,hasil;
	cout << endl;
	cout << "                ---------------------------------" << endl;
	cout << "                     Cek Bilangan Faktorial" 		<< endl;
	cout << "                ---------------------------------" << endl;
	cout << "                Faktorial dari: ";
	cin  >> angka;
	cout << "                ";
	hasil = hitungfaktorial(angka);
	cout << " = " << hasil   << endl;
	cout << "                ---------------------------------" << endl;
}

int hitungfaktorial ( int n ){
	if (n <= 1 ){
	cout << n;
	return n;
	}
	else {
	cout << n << "*";
	return n * hitungfaktorial( n - 1 );
	}
}

void aritmatika(int&aritmatika){
	int a,b,n,un,sn;
	int n2;
	cout << endl;
	cout << "                ----------------------------" << endl;
	cout << "                  Cek Bilangan Aritmatika   " << endl;
	cout << "                ----------------------------" << endl;
	cout << "                1. Baris Aritmatika"		   << endl;
	cout << "                2. Jumlah Aritmatika"		   << endl;   
	cout << endl;
	cout << "                Masukkan Angka: ";
	cin  >> n2; 

	if (n2==1){
	cout << "                ----------------------------" << endl;
	cout << "                    Cek Baris Aritmatika    " << endl;
	cout << "                ----------------------------" << endl;
	cout << "                Masukkan suku pertama      : ";
	cin  >> a;
	cout << "                Masukkan beda              : ";
	cin  >> b;
	cout << "                Masukkan baris ke-n        : ";
	cin  >> n;
	un = a + ((n-1)*b);
	cout << "                Un dari baris ke- " << n << " adalah : " <<  un << endl;
	}    

	if (n2==2){
	cout << "                ----------------------------" << endl;
	cout << "                 Cek Jumlah Baris Aritmatika "<< endl;
	cout << "                ----------------------------" << endl;
	cout << "                Masukkan suku pertama      : ";
	cin  >> a;
	cout << "                Masukkan beda              : ";
	cin  >> b;
	cout << "                Masukkan baris ke-n        : ";
	cin  >> n;
	sn = (n/2)*((2*a)+(n-1)*b);
	cout << "                Sn dari baris ke- " << n << " adalah : " <<  sn << endl;
	}
	cout << endl;
}

void geometri(int&geometri){
	int a,r,b,n,un,sn;
	int n2;
	cout << endl;
	cout << "                ----------------------------" << endl;
	cout << "                  Cek Bilangan Geometri     " << endl;
	cout << "                ----------------------------" << endl;
	cout << "                1. Baris Geometri"		  	   << endl;
	cout << "                2. Jumlah Geometri"		   << endl;   
	cout << endl;
	cout << "                Masukkan angka : ";
	cin  >> n2;

	if (n2==1){
	int d;
	cout << endl;
	cout << "                ----------------------------" << endl;
	cout << "                  Cek Baris Geometri " 	   << endl;
	cout << "                ----------------------------" << endl;
	cout << "                 1.Deret Naik"				   << endl;
	cout << "                 2.Deret Turun "			   << endl;
	cout << endl;
	cout << "                 Masukkan Angka: ";
	cin  >> d;
	cout << endl;	
	
	if (d==1){
	cout << "                ----------------------------" << endl;
	cout << "                    Cek Baris Geometri    "   << endl;
	cout << "                ----------------------------" << endl;
	cout << "                Masukkan suku pertama      : ";
	cin  >> a;
	cout << "                Masukkan rasio             : ";
	cin  >> r;
	cout << "                Masukkan baris ke-n        : ";
	cin  >> n;
	un = pow(r,(n-1)) * a;
	cout << "                Un dari baris ke- " << n << " adalah : " <<  un << endl;	
	  }

	if (d==2){
	cout << "                ----------------------------" << endl;
	cout << "                    Cek Baris Geometri    "   << endl;
	cout << "                ----------------------------" << endl;
	cout << "                Masukkan suku pertama      : ";
	cin  >> a;
	cout << "                Masukkan rasio             : ";
	cin  >> r;
	cout << "                Masukkan baris ke-n        : ";
	cin  >> n;
	un = a / pow(r,(n-1));
	cout << "                Un dari baris ke- " << n << " adalah : " <<  un << endl;	
	 }

	}

	if (n2==2){
	int d;
	cout << endl;
	cout << "                ----------------------------" << endl;
	cout << "                  Cek Jumlah Baris Geometri " << endl;
	cout << "                ----------------------------" << endl;
	cout << "                 1.Deret Naik"			   << endl;
	cout << "                 2.Deret Turun "			   << endl;
	cout << endl;
	cout << "                 Masukkan Angka: ";
	cin  >> d;
	
	if ( d == 1){
	cout << "                ----------------------------" << endl;
	cout << "                  Cek Jumlah Baris Geometri " << endl;
	cout << "                ----------------------------" << endl;
	cout << "                Masukkan suku pertama      : ";
	cin  >> a;
	cout << "                Masukkan rasio             : ";
	cin  >> r;
	cout << "                Masukkan baris ke-n        : ";
	cin  >> n;
	sn = ( a * (pow(r,n)-1) ) / ( r - 1 );
	cout << "                jumlah dari baris ke- " << n << " adalah : " <<  sn << endl;	
	cout << "                ----------------------------" << endl;
	}

	if ( d == 2){
	cout << "                ----------------------------" << endl;
	cout << "                  Cek Jumlah Baris Geometri " << endl;
	cout << "                ----------------------------" << endl;
	cout << "                Masukkan suku pertama      : ";
	cin  >> a;
	cout << "                Masukkan rasio             : ";
	cin  >> r;
	cout << "                Masukkan baris ke-n        : ";
	cin  >> n;
	sn = ( a * ( 1 - pow(r,n)) ) / ( 1 - r );
	cout << "                jumlah dari baris ke- " << n << " adalah : " <<  sn << endl;	
	cout << "                ----------------------------" << endl;
	}
	  }
	cout << endl;
	
}