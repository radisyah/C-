#include <iostream>
#include <string>
using namespace std;

struct film
{
	string judul;
	string director;
	string genre;
};

struct data
{
	int tahun;
	int rating;
	film ke_1;
	film ke_2;
};

int main()
{

	film pertama,kedua;
	data satu,dua;
	//film pertama
	pertama.judul = "Zack Snyder Justice League";
	pertama.director = "Zack Snyder";
	pertama.genre = "Action,Superhero,Adventure";
	satu.tahun = 2020;
	satu.rating = 9;

	//film kedua
	kedua.judul = "Justice League";
	kedua.director = "Jose Weadon";
	kedua.genre = "Action,Superhero,Adventure";
	dua.tahun = 2017;
	dua.rating = 7;

	cout << "----------------" << endl;
	cout << "    Data Film   " << endl;
	cout << "----------------" << endl;
	cout << "Film Pertama" << endl;
	cout << endl;
	cout << "Film    : " << pertama.judul << endl;
	cout << "Director: " << pertama.director << endl;
	cout << "Genre   : " << pertama.genre << endl;
	cout << "Tahun   : " << satu.tahun << endl;
	cout << "Rating  : " << satu.rating << endl;
	cout << endl;
	cout << "---------------" << endl;
	cout << "Film Kedua" << endl;
	cout << endl;
	cout << "Film    : " << kedua.judul << endl;
	cout << "Director: " << kedua.director << endl;
	cout << "Genre   : " << kedua.genre << endl;
	cout << "Tahun   : " << dua.tahun << endl;
	cout << "Rating  : " << dua.rating << endl;
	cout << "---------------" << endl;

	
	system("Pause");
	return 0;
}
