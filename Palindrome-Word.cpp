/**
Program: Checking if the inputted word is a Palindrome using and not using a strrev function
By: Tricia Relox
GitHub: 3ciarelox
**/

#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

using namespace std;

//Variables Declarations
char pal[100], pal1 [100], pal2 [100], temp;
int i, j;


void ReverseWord() //Reverse word without using strrev function
{
    for (i = 0; i < j; i++,j--)
    {
        temp = pal2[i];
        pal2[i] = pal2[j];
        pal2[j] = temp;
    }
    
    cout<<"Reversed word without using strrev() function: "<<pal; 
}

void ReverseWordStrrev() //Reverse word using sttrev function
{	
  	strrev(pal);
    cout<<"Reversed word using strrev() function: "<<pal;
}

void RemoveSpace() //removing space
{
    int len = strlen(pal);
    for( i = 0; i < len; i++)
    {
        if (pal[i] == ' ')
        {
            for (j = i; j < len; j++)
                pal[j] = pal[j+1];
            len--;
        }
	}
}

void PalindromeCheck () //checking if the word is a palindrome
{
    strcpy (pal1, pal);
    strcpy(pal2, pal);
    
	if (strcmp (pal, pal1)==0)
	{
		cout<<"\t\nThe word is palindrome.";
	}
	
	else
	{
		cout<<"\t\nThe word is not palindrome.";
	}

}

int main()
{

    cout<<"Enter a word: ";
    cin.getline(pal, 100) ;
    j = strlen(pal) - 1;
    
    	cout<<"\n\n";
    ReverseWordStrrev();
    	cout<<"\n\n";
    
    	strcpy(pal2,pal);
    
	ReverseWord();
    	cout<<"\n\n";
    	
    RemoveSpace();
    
    strcpy (pal1, pal);
    strcpy (pal2, pal);
    
    PalindromeCheck();
    
}
