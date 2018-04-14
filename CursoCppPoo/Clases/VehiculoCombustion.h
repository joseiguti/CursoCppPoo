//
//  Vehiculos.h
//  CursoCppPoo
//
//  Created by José Ignacio Gutiérrez Guzmán on 4/14/18.
//  Copyright © 2018 José Ignacio Gutiérrez Guzmán. All rights reserved.
//
#include <iostream>

#ifndef Vehiculos_h
#define Vehiculos_h

using namespace std;

#endif /* Vehiculos_h */

class VehiculoCombustion {
    
public:
    
    VehiculoCombustion (): cilindraje (0) {
        
        cout << "Constructor clase VehiculoCombustion..." << "\n";
        
    }
    
    int obtenerCilindraje (){
        
        return cilindraje;
    }
    
protected:
    
    int cilindraje = 0;
    
    int encender (){
        
        chispaMotor();
        
        return 0;
    }
    
    int acelerar (){
        
       
        return 0;
    }
    
    void configurarCilindraje (int cilin){
        
        cilindraje = cilin;
    }

private:
    
    int chispaMotor (){
        
        cout << "Encapsultamiento de vehiculo... \n";
        
        return 0;
    }
    
    
};
