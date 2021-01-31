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
	// Declare variables
	int tvType;
	double diagonalDimension, diagonalSquared;
	double tvWidth, tvHeight, tvArea;
	float lcd_ratio_height = 16.0 / 9.0;
	float lcd_ratio_width = 9.0 / 16.0;
	float regularTV_ratio_height = 4.0 / 3.0;
	float regularTV_ratio_width = 3.0 / 4.0;

	// Prompt user to input tv type
	cout << "To calculate the width, height, and area of the TV, please enter one of the following options:" << endl;
	cout << "1. Traditional (4:3) TV area." << endl;
	cout << "2. LCD (16:9) TV area." << endl;
	cout << "3. Both types of TV areas." << endl;
	cin >> tvType;
	cout << endl;

	// Prompt user for tv diagonal dimension (in inches)
	cout << "Now, what is the diagonal dimension (in inches)? ";
	cin >> diagonalDimension;
	cout << endl;

	diagonalSquared = diagonalDimension * diagonalDimension;
	// switch case
	cout << fixed << setprecision(2);
	switch (tvType)
	{
	case(1):	// regular tv
		tvWidth = sqrt(diagonalSquared / (regularTV_ratio_width + 1));
		tvHeight = sqrt(diagonalSquared / (regularTV_ratio_height + 1));
		tvArea = tvWidth * tvHeight;
		cout << "TV width: " << tvWidth << endl;
		cout << "TV height: " << tvHeight << endl;
		cout << " TV area: " << tvArea << endl;
		break;
	case(2):	// LCD tv
		tvWidth = sqrt(diagonalSquared / (lcd_ratio_width + 1));
		tvHeight = sqrt(diagonalSquared / (lcd_ratio_height + 1));
		tvArea = tvWidth * tvHeight;
		cout << "TV width: " << tvWidth << endl;
		cout << "TV height: " << tvHeight << endl;
		cout << "TV area: " << tvArea << endl;
		break;
	case(3): // both types
	// traditional tv
		tvWidth = sqrt(diagonalSquared / (regularTV_ratio_width + 1));
		tvHeight = sqrt(diagonalSquared / (regularTV_ratio_height + 1));
		tvArea = tvWidth * tvHeight;
		cout << "Traditional TV dimenstions:" << endl;
		cout << "Width: " << tvWidth << endl;
		cout << "Height: " << tvHeight << endl;
		cout << "Area: " << tvArea << endl;
		cout << endl;
		// lcd tv
		tvWidth = sqrt(diagonalSquared / (lcd_ratio_width + 1));
		tvHeight = sqrt(diagonalSquared / (lcd_ratio_height + 1));
		tvArea = tvWidth * tvHeight;
		cout << "LCD TV dimenstions:" << endl;
		cout << "Width: " << tvWidth << endl;
		cout << "Height: " << tvHeight << endl;
		cout << "Area: " << tvArea << endl;
		break;
	}


	return 0;
}