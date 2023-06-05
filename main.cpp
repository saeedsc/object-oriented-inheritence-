/*********************
Name: Saeid Jalaliani	
Coding 02
Purpose: To demonstrate the knowledge of class structures
and hierarchical relationships between two or more objects
In this case two circles with a height seperating the two are a cylinder
**********************/

#include "main.h"

int main(){
    
    
    Circle myCircle; //test min values
    Circle myCircle2(5.3); //radius
    Circle myCircle3(-2); //test invalid input
    
    displayCircle(&myCircle);
    displayCircle(&myCircle2);
    displayCircle(&myCircle3);
    
    Cylinder myCylinder; // MIN
    Cylinder myCylinder2(9,10); //radius, height
    Cylinder myCylinder3(-9,-8); //invalid inputs
    Cylinder myCylinder4(-9,8); //one invalid input
    Cylinder myCylinder5(9,-8); //other invalid input
    Cylinder myCylinder6(40.68,35.7); //testing larger values with fractions
    
    displayCylinder(&myCylinder);
    displayCylinder(&myCylinder2);
    displayCylinder(&myCylinder3);
    displayCylinder(&myCylinder4);
    displayCylinder(&myCylinder5);
    displayCylinder(&myCylinder6);
    
    return 0;
}