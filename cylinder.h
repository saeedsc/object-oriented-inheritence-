/*********************
Name: Saeid Jalaliani	
Coding 02
Purpose: To demonstrate the knowledge of class structures
and hierarchical relationships between two or more objects
In this case two circles with a height seperating the two are a cylinder
**********************/

#ifndef CLASS_CYLINDER_H
#define CLASS_CYLINDER_H

#include "circle.h"

class Cylinder : public Circle{
    
    public:
        Cylinder();
        Cylinder(double,double);
        
        double getHeight();
        double getArea();
        double getVolume();
        
        void setHeight(double);
        
    private:
        double height;
        double localArea; 
        double circumference;
};
#endif //class cylinder