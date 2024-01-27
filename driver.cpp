/** @file driver.cpp */

#include <iostream>
#include <string>
#include "Rectangle.h"
using namespace std;

int main(){
	Rectangle rectangle;
	bool isSet1 = rectangle.set(5,7);
	bool isSet2 = rectangle.set(-1,-1);
	double length = rectangle.getLength();
	double width = rectangle.getWidth();
	double area = rectangle.getArea();
	cout << "set length and width " << isSet1 << endl;
	cout << "set length and width " << isSet2 << endl;
	cout << "length: " << length << endl;
	cout << "width: " << width <<endl;
	cout << "area: " << area << endl;
	return 0;
	
}
