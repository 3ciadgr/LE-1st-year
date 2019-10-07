/**
Program: Converting a Character to a Special Alt Character
By: Tricia Relox (trcrlx@gmail.com)
GitHub: 3ciarelox
**/

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
	
    char c;
    cout << "Enter a character: ";
    cin >> c;
    
    if(isprint(c)) {
    	cout << "\nSpecial Alt Characters of " << c << " is " << int(c) << endl;
	} else {
    	cout << "\nSpecial Alt Characters of " << c << " is " << int(c+92+164) << endl;
	}
    return 0;
}
