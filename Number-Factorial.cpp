/**
Program: Factorial of a number - user input
By: Tricia Relox
GitHub: 3ciarelox
**/


#include <iostream>
using namespace std;

int num, factorial = 1;

void fact()
{
	for(int i = 1; i <=num; ++i)
    {
        factorial *= i;
    }
    cout<<"Factorial of "<<num<<" is "<<factorial;
}

int main()
{
	cout<<"Enter a number: ";
	cin>>num;
	fact();
}

