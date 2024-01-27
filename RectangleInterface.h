/** @file RectangleInterface.h */

#ifndef Rectangle_Interface
#define Rectangle_Interface
/** @file RectangleInterface.h */


class RectangleInterface
{
	public:
		 /** Updates the length and width of Rectangle
		 @param  lngth the new length for this Rectangle
		 @param  wdth the new width for this Rectangle
		 @pre    wdth must be larger than zero
		 @pre    lngth must be larger than zero
		 @post   If wdth is valid and if lngth is valid, the
		          length and width are set to the lngth and width.
				 Otherwise, the Rectangle is not updated 
		 @return  True if this object is updated,
		          and false otherwise. */ 
		virtual bool set(double length, double width) = 0;
		/** Gets the length  of this Rectangle
	     @return The length of this Rectangle. */
		virtual double getLength() const  = 0;
		
		/** Gets the width  of this Rectangle
	     @return The width of this Rectangle. */
		virtual double getWidth() const = 0;
	     
		/** Gets the area  of this Rectangle
	     @return The area of this Rectangle. */
		virtual double getArea() const = 0;
	
	     
	     /** Destroys this Rectangle and frees its assigned memory. */
		virtual  ~RectangleInterface(){};
		
};
#include "Rectangle.h"
#endif
