/*********************
Name: Saeid Jalaliani	
Coding 02
Purpose: To demonstrate the knowledge of class structures
and hierarchical relationships between two or more objects
In this case two circles with a height seperating the two are a cylinder
**********************/

#include "cylinder.h"

Cylinder::Cylinder(){
    setRadius(MIN);
    setHeight(MIN);
}

Cylinder::Cylinder(double r, double h){
    setRadius(r);
    setHeight(h);
}

double Cylinder::getHeight(){
    return height;
}

double Cylinder::getArea(){
    
    circumference = 2*PI*radius;
    
    if ((circumference*height)!=MIN){
    localArea = (circumference*height)+(2*(PI*(pow(radius,2))));
    } else {
        localArea = 0;
    }
    
    return localArea;
}

double Cylinder::getVolume(){
    return (PI*(pow(radius,2))*height);
}

void Cylinder::setHeight(double h){
    if (h>1){
        height = h;
    } else {
        height = MIN;
    }
}