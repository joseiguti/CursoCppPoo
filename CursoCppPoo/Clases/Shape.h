//
//  Shape.h
//  CursoCppPoo
//
//  Created by José Ignacio Gutiérrez Guzmán on 4/14/18.
//  Copyright © 2018 José Ignacio Gutiérrez Guzmán. All rights reserved.
//

#ifndef Shape_h
#define Shape_h


#endif /* Shape_h */

#include <iostream>
using namespace std;

class Shape {
    
protected:
    
    int width;
    
    int height;
    
public:
    
    Shape( int a = 0, int b = 0) {
        
        width = a;
        
        height = b;
    }
    
    virtual int area() {
        
        cout << "Parent class area :" <<endl;
        
        return 0;
    }
    
};

class Rectangle: public Shape {

public:
    Rectangle( int a = 0, int b = 0):Shape(a, b) { }
    
    int area () {
        
        cout << "Rectangle class area :" << (width * height) <<endl;
        
        return (width * height);
    }
};

class Triangle: public Shape {
    
public:
    Triangle( int a = 0, int b = 0):Shape(a, b) { }
    
    int area () {
        
        cout << "Triangle class area :" << (width * height / 2)  <<endl;
        
        return (width * height / 2);
    }
};
