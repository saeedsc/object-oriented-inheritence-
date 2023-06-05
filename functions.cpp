/*********************
Name: Saeid Jalaliani	
Coding 02
Purpose: To demonstrate the knowledge of class structures
and hierarchical relationships between two or more objects
In this case two circles with a height seperating the two are a cylinder
**********************/

#include "functions.h"

void displayCircle(Circle *theCircle){
    cout << "Circle's radius: " << theCircle->getRadius() << endl;
    cout << "Circle's area: " << theCircle->getArea() << endl;
}

void displayCylinder(Cylinder *theCylinder){
    cout << "Cylinder's radius: " << theCylinder->getRadius() << endl;
    cout << "Cylinder's height: " << theCylinder->getHeight() << endl;
    cout << "Cylinder's area: " << theCylinder->getArea() << endl;
    cout << "Cylinder's volume: " << theCylinder->getVolume() << endl;
}
