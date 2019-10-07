/**
Program: Inputing String and output 10 times
By: Tricia Relox (trcrlx@gmail.com)
GitHub: 3ciarelox
**/

#include <iostream>
using namespace std;

//Variable declarations
char user_input [100];
int ctr = 1, i = 10;


//User input method
void inputs ()
{
	cout<<"\n";
	do{ //do-while loop for outputting the word inserted by the user
		cout << user_input << "\n";
		ctr++;
	}while(ctr<=i);
}


int main()
{
	cout << "Enter a word: " ;
		cin.getline(user_input, 100); //user input
	
	inputs(); //calling inputs method
}
