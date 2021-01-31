//*****************************************************************************************
// Name: Trevor Garner
// Class: CS 161
// Assignment: 4
// Date: 01/29/2021
// Description: Calculate tv dimmensions. Given the diagonal length of a tradition (4:3)
//	or LCD (16:9) tv, calculate the length, width, and area of the tv and output solution.
// Sources: None
//
//*****************************************************************************************

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	// user input
	int tvType; // tv type chosen by user
	double diagonal; // diagonal dimension input by user
	
	// traditional tv variables
	double reg_width, reg_height, reg_area;
	double reg_ratio_w = (3.0 / 4.0);

	// lcd tv variables
	double lcd_width, lcd_height, lcd_area;
	double lcd_ratio_w = 9.0 / 16.0;
	
	// Prompt user for tv diagonal dimension (in inches)
	cout << "What is the diagonal dimension (in inches) of the TV in question? ";
	cin >> diagonal;
	cout << endl;

	// Prompt user to input tv type
	cout << "To calculate the width, height, and area of the TV, please enter one of the following options:" << endl;
	cout << "1. Traditional (4:3) TV area." << endl;
	cout << "2. LCD (16:9) TV area." << endl;
	cout << "3. Both types of TV areas." << endl;
	cout << endl;
	cin >> tvType;
	cout << endl;

	// output formatting
	cout << fixed << setprecision(1);
	
	// switch case
	switch (tvType)
	{
	case(1):	// regular tv
		// calculations
		reg_width = sqrt(pow(diagonal, 2) / (pow(reg_ratio_w,2)+1)); // get width
		reg_height = reg_width * reg_ratio_w; // get height
		reg_area = reg_height * reg_width; // get area
	
		//output
		cout << "Traditional TV (4:3) dimensions:" << endl;
		cout << "TV width: " << reg_width << endl;
		cout << "TV height: " << reg_height << endl;
		cout << "TV area: " << reg_area << endl;
		cout << endl;
		break;
	case(2):	// LCD tv
		// calculations
		lcd_width = sqrt(pow(diagonal, 2) / (pow(lcd_ratio_w, 2) + 1)); // get width
		lcd_height = lcd_width * lcd_ratio_w; // get height
		lcd_area = lcd_height * lcd_width; // get area
		
		//output
		cout << "LCD TV (16:9) dimensions:" << endl;
		cout << "TV width: " << lcd_width << endl;
		cout << "TV height: " << lcd_height << endl;
		cout << "TV area: " << lcd_area << endl;
		cout << endl;
		break;
	case(3): // both types
		// traditional tv
		// calculations
		reg_width = sqrt(pow(diagonal, 2) / (pow(reg_ratio_w, 2) + 1)); // get width
		reg_height = reg_width * reg_ratio_w; // get height
		reg_area = reg_height * reg_width; // get area
		
		//output
		cout << "Traditional TV (4:3) dimensions:" << endl;
		cout << "TV width: " << reg_width << endl;
		cout << "TV height: " << reg_height << endl;
		cout << "TV area: " << reg_area << endl;
		cout << endl;
		// lcd tv
		//calculations
		lcd_width = sqrt(pow(diagonal, 2) / (pow(lcd_ratio_w, 2) + 1)); // get width
		lcd_height = lcd_width * lcd_ratio_w; // get height
		lcd_area = lcd_height * lcd_width; // get area
		
		//output
		cout << "LCD TV (16:9) dimensions:" << endl;
		cout << "TV width: " << lcd_width << endl;
		cout << "TV height: " << lcd_height << endl;
		cout << "TV area: " << lcd_area << endl;
		cout << endl;
		break;
	default: // incorrect number chosen, output ERROR!
		cout << "ERROR! Please choose a number between 1 and 3 for tv type." << endl;
		cout << "Program will now self destruct..." << endl;
		cout << endl;
		cout << "BOOM!" << endl;
		cout << endl;
		return 0;
	}

	return 0;
}
