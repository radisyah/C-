#include <iostream>
using namespace std;

int main()
{
	float q,harga;
	char g;
	cout << "                    --------------------------------"								<< endl;
	cout << "                      Program Mencari Harga Barang  " 						     	<< endl;
	cout << "                    --------------------------------"						 		<< endl;
	cout << endl;
	cout << "          Seorang konsumen membeli sejenis barang sebanyak Q unit." 				<< endl;
	cout << "         Jika fungsi kepuasan total konsumen ditunjukkan oleh fungsi: " 			<< endl;
	cout << "                         TU = 15 Q + 0,25 Q^2 "									<< endl;
	cout << endl;
	cout << "                    Masukkan jumlah barang yang dibeli : ";
	cin  >> q;
		if (q){
		if ( q >= 0 ) {
	/* dari persamaan TU = 15 Q + 0,25 Q^2 turunkan menjadi TU'= 15 + ( 0.50 * Q ), sehingga: */
	harga = 15 + ( 0.50 * q );
	cout << endl;
	cout << "               Jadi pada tingkat harga Rp " << harga << ",000 konsumen akan"		<< endl;
	cout << "        memperoleh kepuasan dengan membeli barang sebanyak " << q << " unit"		<< endl;
	cout << "                    --------------------------------"						 		<< endl;
	cout << endl;
	cout << "                 Apakah Anda ingin mengetahui caranya (y/n): ";
	cin  >> g;
		if ( g ){
		if ( g == 'y' ){
	cout << endl;
	cout << "dari persamaan TU = 15 Q + 0,25 Q^2 turunkan menjadi TU'= 15 + ( 0.50 * Q ), sehingga:" << endl;	
	cout << "Harga = 15 + ( 0.50 * q ) -----> Harga = 15 + ( 0.50 * " << q << " ) = Rp. " << harga << " 000" << endl;
	cout << "                    --------------------------------"						 		<< endl;
		}

		if ( g == 'n' ){
	cout << endl;
	cout << "                    --------------------------------"						 		<< endl;
	cout << "                              Terimakasih"											<< endl;		
		}
	}
		else {
	cout << endl;
	cout << "                    --------------------------------"						 		<< endl;
	cout << "                           Tidak Tersedia"											<< endl;		
	}
}
		if ( q < 0) {
	cout << endl;
	cout << "                    --------------------------------"						 		<< endl;
	cout << "                           Tidak Tersedia"											<< endl;
	}
}
		else {
	cout << endl;
	cout << "                    --------------------------------"						 		<< endl;
	cout << "                           Tidak Tersedia"											<< endl;		
	}


	cout << endl;
	system("Pause");
}
