#include <iostream>


//makro untuk fungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A > B) ? A:B)
using namespace std;

int main()
{

	cout << "Nilai Kuadrat = " << KUADRAT(5) << endl;
	cout << "Nilai MAX = " << MAX(10,9) << endl;

	#undef BAHASA
	#define BAHASA "INGGRIS"
	cout << BAHASA << endl;
	system("Pause");
	return 0;
}
