/**
Program: Identifying high and low number between two numbers
By: Tricia Relox
GitHub: 3ciarelox
**/

#include <iostream>
using namespace std;

int n1, n2, high = 0, low = 0;

int main()
{
	cout<<"Enter your 1st number: ";
		cin>>n1;
	
	cout<<"Enter your 2nd number: ";
		cin>>n2;
		
	if (n1>n2)
	{
		high = n1;
		low = n2;	
	}
	
	else
	{
		high = n2;
		low = n1;
	}
	
	cout<<"\nYour first number is "<<n1<<" and your second number is "<<n2<<endl;
	cout<<"\nThe highest number is "<<high<<" and the lowest number is "<<low;
	
return 0;
}

