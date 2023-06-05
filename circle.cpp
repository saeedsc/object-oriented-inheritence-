/*********************
Name: Saeid Jalaliani	
Coding 02
Purpose: To demonstrate the knowledge of class structures
and hierarchical relationships between two or more objects
In this case two circles with a height seperating the two are a cylinder
**********************/

#include "circle.h"

Circle::Circle(){
    setRadius(MIN);
}

Circle::Circle(double r){
    setRadius(r);
}

double Circle::getRadius(){
    return radius;
}

double Circle::getArea(){
    return PI * (pow(radius, 2));
}

void Circle::setRadius(double r){
    if (r > 1){
        radius = r;
    } else {
        radius = MIN;
    }
}
