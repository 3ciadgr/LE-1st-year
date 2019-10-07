/**
Program: User input for 2 characters and prints all characters in between.
By: Tricia Relox
GitHub: 3ciarelox
**/

#include <iostream>

using namespace std;

int main() {
	
	char a, b; //variable declarations
	
	cout << "Enter beginning character: ";
	cin >> a;
	cout << "Enter ending character: ";
	cin >> b;
	
	int x,y;
	x = (int) a;
	y = (int) b;
	
	if(x == y) {
		cout << "Error!";
	} else {
		if(x < y) {
			for(int i = a; i <= b; i++) {
				char h = i;
				cout << h << " ";
			}
		} else {
			for(int i = a; i >= b; i--) {
				char g = i;
				cout << g << " ";
			}
		}
	}
}
