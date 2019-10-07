/**
Program: Function overloading
By: Tricia Relox
GitHub: 3ciarelox
**/


#include <iostream>

using namespace std;

void value(unsigned int, unsigned string);
void value (int, string);

int main() {
	value(20,"*");
	value(20,"@");
	value(10,"*");
	value(15,"#");
	return 0;
}

void value(int i, string hi) {
	for(int a = 1; a <= i; a++) {
		cout << hi;
	}
	cout << endl;
}
