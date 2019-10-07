/*********************************************
Program title: LRT 2 Purple Line ticket booth
By: Tricia Relox 
GitHub: 3ciarelox
*********************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int Cstation, destination, fare,AddedValue;
	int payment, change;
	
	cout<<"Enter your name: ";
		getline(cin,name);
	
//LIST OF STATIONS
	cout<<"\n\n\tSTATIONS\n"
		<<"1. RECTO\n"
		<<"2. LEGARDA\n"
		<<"3. PUREZA\n"
		<<"4. V. MAPA\n"
		<<"5. J. RUIZ\n"
		<<"6. GILMORE\n"
		<<"7. BETTY-GO\n"
		<<"8. CUBAO\n"
		<<"9. ANONAS\n"
		<<"10. KATIPUNAN\n"
		<<"11. SANTOLAN \n";
	
	cout<<"\nPLEASE ENTER THE NUMBER OF YOUR CURRENT STATION: ";
		cin>>Cstation;
	
	cout<<"\nPLEASE ENTER THE NUMBER OF YOUR DESTINATION: ";
		cin>>destination;
	
	cout<<"\n";
	
//RECTO STATION
	if(Cstation == 1)
		{
			if (Cstation == 1 && destination == 2 || destination == 3 || destination == 4)
				{Cstation = 15; fare=Cstation;}
			if (Cstation == 1 && destination == 5 || destination == 6 || destination == 7 || destination == 8)
				{Cstation = 15, destination = 5; fare=Cstation+destination;}
			if (Cstation == 1 && destination == 9 || destination == 10 || destination == 11)
				{Cstation = 15, destination = 5, AddedValue = 5; fare=Cstation+destination+AddedValue;}
			if (Cstation == 1 && destination == 1)
				 {cout<<"YOU ARE CURRENTLY IN THE STATION.\n"; system("pause");}
		}
	
//LEGARDA STATION
		if(Cstation == 2)
		{
			if (Cstation == 2 && destination == 1 || destination == 3 || destination == 4 || destination == 5)
				{Cstation = 15; fare=Cstation;}
			if (Cstation == 2 && destination == 6 || destination == 7 || destination == 8 || destination == 9)
				{Cstation = 15, destination = 5; fare=Cstation+destination;}
			if (Cstation == 2 && destination == 10 || destination == 11)
				{Cstation = 15, destination = 5, AddedValue = 5; fare=Cstation+destination+AddedValue;}
			if (Cstation == 2 && destination == 2)
				 {cout<<"YOU ARE CURRENTLY IN THE STATION.\n"; system("pause");}
		}
	
//PUREZA
	if(Cstation == 3)
		{
			if (Cstation == 3 && destination == 1 || destination == 2 || destination == 4 || destination == 5 || destination == 6)
				{Cstation = 15; fare=Cstation;}
			if (Cstation == 3 && destination == 7 || destination == 8 || destination == 9 || destination == 10)
				{Cstation = 15, destination = 5; fare=Cstation+destination;}
			if (Cstation == 3 && destination == 11)
				{Cstation = 15, destination = 5, AddedValue = 5; fare=Cstation+destination+AddedValue;}
			if (Cstation == 3 && destination ==3)
				{cout<<"YOU ARE CURRENTLY IN THE STATION.\n"; system("pause");}
		}

//V.MAPA STATION
		if(Cstation == 4)
		{
			if (Cstation == 4 && destination == 1 || destination == 2 || destination == 3 || destination == 5 || destination == 6 || destination == 7)
				{Cstation = 15; fare=Cstation;}
			if (Cstation == 4 && destination == 8 || destination == 9 || destination == 10)
				{Cstation = 15, destination = 5; fare=Cstation+destination;}
			if (Cstation == 4 && destination == 11)
				{Cstation = 15, destination = 5, AddedValue = 5; fare=Cstation+destination+AddedValue;}
			if (Cstation == 4 && destination == 4)
				 {cout<<"YOU ARE CURRENTLY IN THE STATION.\n"; system("pause");}
		}

//J. RUIZ STATION
	if(Cstation == 5)
		{
			if (Cstation == 5 && destination == 2 || destination == 3 || destination == 4 || destination == 6 || destination == 7 || destination == 8)
				{Cstation = 15; fare=Cstation;}
			if (Cstation == 5 && destination == 1 || destination == 9 || destination == 10 || destination == 11)
				{Cstation = 15, destination = 5; fare=Cstation+destination;}
			if (Cstation == 5 && destination == 5)
				 {cout<<"YOU ARE CURRENTLY IN THE STATION.\n"; system("pause");}
		}

//GILMORE STATION
	if(Cstation == 6)
		{
			if (Cstation == 6 && destination == 3 || destination == 4 || destination == 7 || destination == 8 || destination == 9)
				{Cstation = 15; fare=Cstation;}
			if (Cstation == 6 && destination == 1 || destination == 2 || destination == 10 || destination == 11)
				{Cstation = 15, destination = 5; fare=Cstation+destination;}
			if (Cstation == 6 && destination == 6)
				 {cout<<"YOU ARE CURRENTLY IN THE STATION.\n"; system("pause");}
		}
		
//BETTY-GO BELMONTE STATION
	if(Cstation == 7)
		{
			if (Cstation == 7 && destination == 4 || destination == 5 || destination == 6 ||  destination == 8 || destination == 9 || destination == 10)
				{Cstation = 15; fare=Cstation;}
			if (Cstation == 7 && destination == 1 || destination == 2 || destination == 3 || destination == 11)
				{Cstation = 15, destination = 5; fare=Cstation+destination;}
			if (Cstation == 7 && destination == 7)
				 {cout<<"YOU ARE CURRENTLY IN THE STATION.\n"; system("pause");}
		}
		
//CUBAO STATION
	if(Cstation == 8)
		{
			if (Cstation == 8 && destination == 5 || destination == 6 ||  destination == 7 || destination == 9 || destination == 10 || destination == 11)
				{Cstation = 15; fare=Cstation;}
			if (Cstation == 8 && destination == 1 || destination == 2 || destination == 3 || destination == 4)
				{Cstation = 15, destination = 5; fare=Cstation+destination;}
			if (Cstation == 8 && destination == 8)
				 {cout<<"YOU ARE CURRENTLY IN THE STATION.\n"; system("pause");}
		}

//ANONAS STATION
	if(Cstation == 9)
		{
			if (Cstation == 9 && destination == 6 || destination == 7 || destination == 8 || destination == 10 || destination == 11)
				{Cstation = 15; fare=Cstation;}	
			if (Cstation == 9 && destination == 2 || destination == 3 || destination == 4 || destination == 5)
				{Cstation = 15, destination = 5; fare=Cstation+destination;}
			if (Cstation == 9 && destination == 1)
				{	Cstation = 15, destination = 5, AddedValue = 5; fare=Cstation+destination+AddedValue;}
			if (Cstation == 9 && destination == 9)
				 {cout<<"YOU ARE CURRENTLY IN THE STATION.\n"; system("pause");}
		}

//SANTOLAN STATION
	if(Cstation == 10)
		{
			if (Cstation == 10 && destination == 7 || destination == 8 || destination == 9 || destination == 11)
				{Cstation = 15; fare=Cstation;}
			if (Cstation == 10 && destination == 3 || destination == 4 || destination == 5 || destination == 6)
				{Cstation = 15, destination = 5; fare=Cstation+destination;}
			if (Cstation == 10 && destination == 1 || destination == 2)
				{Cstation = 15, destination = 5, AddedValue = 5; fare=Cstation+destination+AddedValue;}
		}

//KATIPUNAN STATION
	if(Cstation == 11)
		{
			if (Cstation == 11 && destination == 8 || destination == 9 || destination == 10)
				{Cstation = 15; fare=Cstation;}
			if (Cstation == 11 && destination == 5 || destination == 6 || destination == 7)
				{Cstation = 15, destination = 5; fare=Cstation+destination;}
			if (Cstation == 11 && destination == 1 || destination == 2 || destination == 3 || destination == 4)
				{Cstation = 15, destination = 5, AddedValue = 5; fare=Cstation+destination+AddedValue;}
			if (Cstation == 11 && destination == 11)
				 {cout<<"YOU ARE CURRENTLY IN THE STATION.\n"; system("pause");}
		}

//PAYMENT 
	cout<<"FARE: "<<fare<<"\n"
		<<"\n\nPLEASE ENTER YOUR PAYMENT: ";
			cin>>payment;
	cout<<"\n";

//INSUFFICIENT BALANCE 
	system("cls");
	if(payment<fare) {cout<<"INSUFFICIENT BALANCE! \n"; system("pause");}
	
//CHANGE FORMULA
		change = payment - fare;

//RECEIPT		
system("cls");
	cout<<"\tRECEIPT\n"
		<<"HELLO, "<<name<<"!\n"
		<<"FARE: "<<fare<<"\n"
		<<"PAID AMOUNT: "<<payment<<"\n"
		<<"CHANGE: "<<change;

return 0;	
}

