/** @file Rectangle.cpp */
#include "Rectangle.h"


Rectangle::Rectangle()
{
	length = 1.0;
	width = 1.0;
}

bool Rectangle::set(double lngth,double wdth){
	if(lngth>0.0 && wdth > 0.0){
		length = lngth;
		width = wdth;
		return true;
	}else{
		return false;
	}
}
double Rectangle::getLength() const
{
	return length;
}
double  Rectangle::getWidth() const
{
	return width;
}
double  Rectangle::getArea() const
{
	double area = length * width;
	return area;
}


