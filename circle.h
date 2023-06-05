/*********************
Name: Saeid Jalaliani	
Coding 02
Purpose: To demonstrate the knowledge of class structures
and hierarchical relationships between two or more objects
In this case two circles with a height seperating the two are a cylinder
**********************/

#ifndef CLASS_CIRCLE_H
#define CLASS_CIRCLE_H

#define MIN 0
#define PI 3.1415

#include <math.h>

class Circle{
    
    public: 
    
        Circle();
        Circle(double);
    
        double getRadius();
        double getArea();
    
        void setRadius(double);
    
    protected:
        double radius;
};

#endif //class circle