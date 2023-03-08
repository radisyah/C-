#include <iostream>

using namespace std;

void tampilan1 (int tampilan1);
void tampilan2 (int tampilan2);
void tampilan3 (int tampilan3);



int main()
{
	int a;
	float nilaiPTS[10];
	float nilaiPAS[10];
	float nilaiRERATA[10];
	float nilaiTUGAS[10];
	int   NPM[10];
	char nama_mahasiswa[50][100];
	char matkul[50][100];
	int n;

	tampilan1(a);
	cin  >> n;
	tampilan3(a);

	for ( int x = 1; x <= n; x++){
	cout << "Mahasiswa Ke-" << x << endl;
	cout << "Masukkan 3 Digit Terakhir NPM: ";
	cin >> NPM[x];
	cout << "Masukkan Nama Mahasiswa      : ";
	cin >> nama_mahasiswa[x];	
	cout << "Masukkan Mata Kuliah         : ";
	cin >> matkul[x];	
	cout << "Masukkan Nilai Tugas         : ";
	cin >> nilaiTUGAS[x];	
	cout << "Masukkan Nilai PTS           : ";
	cin >> nilaiPTS[x];	
	cout << "Masukkan Nilai PAS           : ";
	cin >> nilaiPAS[x];	
	cout << endl;
}

	tampilan2(a);
	
	for ( int x = 1; x <= n; x++){

	nilaiRERATA[x] = ( (nilaiPTS[x] + nilaiPAS[x]) * 0.5 );
	cout << x << "    " <<  nama_mahasiswa[x] << "     " << matkul[x] << "    " << nilaiTUGAS[x] << "     " << nilaiPTS[x] << "     " <<  nilaiPAS[x]  << "     " <<  nilaiRERATA[x] << "       ";

	if (nilaiRERATA[x] >= 50){
	cout << "LULUS"       << endl; 
	}
	else {
	cout << "TIDAK LULUS" << endl;
	}
}

	cout << "----------------------------------------------------------------------" << endl;

	
	

	system("Pause");
	return 0;
}

void tampilan1 (int tampilan1){
	cout << "----------------------------------------------------------" << endl;
	cout << "        Data Nilai Mahasiwa UPN VETERAN Jawa Timur"         << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "Masukkan Jumlah Mahasiswa: ";
}

void tampilan2 (int tampilan2){
	cout << endl << endl;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "                         Hasil Nilai Mahasiswa"                         << endl;
	cout << "                         UPN VETERAN Jawa Timur"                        << endl;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "No. Nama      Mata Kuliah              NILAI               Keterangan"  << endl;
	cout << "                            Tugas   PTS    PAS    Rerata"               << endl;	
	cout << endl;
}

void tampilan3 (int tampilan3){
	cout << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << endl;
}