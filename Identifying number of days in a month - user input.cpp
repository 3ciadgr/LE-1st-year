/**
Program: Identifying number of days in a month with user input
By: Tricia Relox
GitHub: 3ciarelox
**/

#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int monthnumber;
	
	//aray declaration for months and number of months
	const int DaysInM[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	string monthsName[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	
	//menu
	cout<<"==========MONTHS============\n"
		<<" [1]JANUARY\n [2]FEBRUARY\n [3]MARCH\n [4]APRIL\n [5]MAY\n [6]JUNE\n [7]JULY\n [8]AUGUST\n [9]SEPTEMBER\n [10]OCTOBER\n [11]NOVEMBER\n [12]DECEMBER\n\n";
	
	//user input
	cout << "Please enter your month number: ";
		cin >> monthnumber;
	
	if(monthnumber >= 1 && monthnumber <= 12) 
	{
		cout <<"\n"<<monthsName[monthnumber-1] << " = " << DaysInM[monthnumber-1];
	} 
	
	else 
	{cout<<"\n"<<"ERROR!";}

return 0;
}

