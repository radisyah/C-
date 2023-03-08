#include <iostream.h>
#include <string.h>
#include <bitset.h>


void print(unsigned short int value, string nama){
	cout << nama << " = " << bitset<8>(value) << endl;
}


int main(){

	unsigned short a = 6;
	unsigned short b = 10;
	unsigned short c;

	cout << "Bitwise & And" << endl;
	c = a & b;
	print(a,"a");	
	print(b,"b");	
	print(c,"c");

	cout << "\nBitwise | Or" << endl;
	c = a | b;
	print(a,"a");	
	print(b,"b");	
	print(c,"c");

	cout << "\nBitwise ^ Xor" << endl;
	c = a ^ b;
	print(a,"a");	
	print(b,"b");	
	print(c,"c");

	cout << "\nBitwise ~ Not" << endl;
	c = ~a;
	print(a,"a");	
	print(c,"c");

	cout << "\nBitwise << Shl" << endl;
	c = a << 4;
	print(a,"a");	
	print(c,"c");

	cout << "\nBitwise >> Shr" << endl;
	c = b >> 4;
	print(b,"b");	
	print(c,"c");



	cout << endl;
	system("Pause");
	return 0;
}

/*
   Bitwise Operator
&  And Bitwise Operator
|  Or  Bitwise Operator
^  Xor Bitwise Operator 
~  Not Bitwise Operator
<< Shl Bitwise Operator
>> Shr Bitwise Operator

*/