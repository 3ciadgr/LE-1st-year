/**
Program: Area of different shapes (square, rectangle, triangle, circle) using void function in methods
By: Tricia Relox
GitHub: 3ciarelox
**/


#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

string choice = "";

void square() {
	float s, area;
	cout << "Enter the side of the square: " ;
	cin >>s;
	area = s *s; 
	cout << "The area of square is: " << area <<  " sq units" << endl;
	cout << "Please press enter to compute another area again." << endl;
	
}

void rectangle() {
	float w,l, arearec;
	cout << "Enter width: ";
	cin >> w;
	cout << "Enter length: ";
	cin >> l;
	arearec = w*l;
	cout << "The area of rectangle is: " << arearec << " sq units" << endl; 
	cout << "Please press enter to compute another area again." << endl;
}

void triangle() {
	float h,b;
	float areatri;
	cout << "Enter height and base : ";
		cin >> h;
	cout << "Enter base: ";
		cin >> b;
	areatri = (0.5) * h*b;
	cout << "The area of triangle is: " << areatri << " sq units" << endl;
	cout << "Please press enter to compute another area again." << endl;
}

void circle() {
	float r, areac;
	cout << "Enter radius: ";
	cin >> r;
	areac = 3.14 * r * r; 
	cout << "The area of circle is: " << areac << " sq units" << endl; 
	cout << "Please press enter to compute another area again." << endl;
}

int main() {
	do {
	    int a = 0;
        choice = "";
        
    	cout << "\n******************" << endl;
    	cout << "\tMENU" << endl;
    	cout << "******************" << endl;
    	cout << "[1] - Area of Square" << endl;
    	cout << "[2] - Area of Rectangle" << endl;
    	cout << "[3] - Area of Triangle" << endl;
    	cout << "[4] - Area of Circle" << endl;
    	cout << "[5] - Exit" << endl;
        cout << "Enter your choice: ";
    		cin >> choice;
    	
    	cout << "\n--------------------" << endl;
    	if(choice == "1"||choice == "2"||choice == "3"||choice == "4"||choice == "5") {

            if(choice == "1") {
        		cout << "AREA OF SQUARE" << endl;
        		cout << "--------------------" << endl;
        		square();
        		system("pause");
        		system("cls");
		
		
        		
        	} else if(choice == "2") {
        		cout << "AREA OF RECTANGLE" << endl;
        		cout << "--------------------" << endl;
        		rectangle();
        		system("pause");
        		system("cls");
        	}
        	
        	else if(choice == "3") {
        		cout << "AREA OF TRIANGLE" << endl;
        		cout << "--------------------" << endl;
        		triangle();
        		system("pause");
        		system("cls");
        		
        	} else if(choice == "4") {
        		cout << "AREA OF CIRCLE" << endl;
        		cout << "--------------------" << endl;
        		circle();
        		system("pause");
        		system("cls");
        		
        	} else if(choice == "5") {
        			cout << "Thank you! :) " << endl;
        			exit(EXIT_FAILURE);
        			
        	} else {
                cout << "Please try again!" << endl;
            
        	}
    	} else {
    	    cout << "Please try again!" << endl;
        	system("cls");
    	}
            
	} while(choice!="5");
}

