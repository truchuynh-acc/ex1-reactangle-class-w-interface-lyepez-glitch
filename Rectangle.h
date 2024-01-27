/** @file Rectangle.h */
#include "Rectangle_Interface.h"

#ifndef RECTANGLE
#define RECTANGLE


class Rectangle : public RectangleInterface{
	public:
		Rectangle();
		double length;
		double width;
	     virtual bool set(double lngth,double wdth);
		double getLength() const;
		double getWidth() const;
		double getArea() const;
};
#include "Rectangle.cpp"
#endif
