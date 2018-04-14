//
//  Renault.h
//  CursoCppPoo
//
//  Created by José Ignacio Gutiérrez Guzmán on 4/14/18.
//  Copyright © 2018 José Ignacio Gutiérrez Guzmán. All rights reserved.
//

#ifndef Renault_h
#define Renault_h



#endif /* Renault_h */

class Renault: public  VehiculoCombustion {
    
    int cilindraje = 1600;
    
public:
    
    Renault (){
    
        this->configurarCilindraje(cilindraje);
        
    }
    
    void encenderSandero (){
        
        this->encender();
        
    }
    
};
