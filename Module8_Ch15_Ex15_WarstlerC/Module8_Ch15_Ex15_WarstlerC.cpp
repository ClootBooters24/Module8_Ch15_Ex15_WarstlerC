#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main()
{
	//instantiate a Rectangle object
	Rectangle lawn;

	//declare variables
	double lawnLength = 0.0;
	double lawnWidth = 0.0;
	double priceSqYd = 0.0;
	double lawnArea = 0.0;
	double totalPrice = 0.0;

	//get length, width, and sod price
	cout << "Length (in feet): ";
	cin >> lawnLength;
	cout << "Width (in feet): ";
	cin >> lawnWidth;
	cout << "Sod price (per square yard): ";
	cin >> priceSqYd;

	//assign dimensions to Rectangle object
	lawn.setDimensions(lawnLength, lawnWidth);

	//calculate area and total price
	lawnArea = lawn.calcArea() / 9;
	totalPrice = lawnArea * priceSqYd;

	//display area and total price
	cout << fixed << setprecision(2) << endl;
	cout << "Square yards: " << lawnArea << endl;
	cout << "Total price: $" << totalPrice << endl;
	return 0;
}	//end of main function