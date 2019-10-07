/**
Program: User input 10 numbers outputting the numbers in ascending order
By: Tricia Relox
GitHub: 3ciarelox
**/


#include <iostream>
using namespace std;

int main() 
 {
	const int size = 10;
	int num[size] = {};
	int sort;

	cout << "ENTER 10 NUMBERS: \n";

	for (int i = 0; i <= 9;++i)
	{	
		cin >> num[i];
	}
		for (int n = 0;n < size - 1; n++)
		{
			for (int a = 0; a < size - 1;a++)
			{
				if (num[a] > num[a + 1])
				{
					sort = num[a];
					num[a] = num[a + 1];
					num[a + 1] = sort;
				}
			}		
		}
	
		cout<<"\nELEMENT VALUE OF ARRAY IN ASCENDING ORDER: \n ";
		
		for (int p=0; p<size; p++)
		{cout << num[p] <<" ";}
		
	return 0;
}

