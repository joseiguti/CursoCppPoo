//
//  Llama.h
//  CursoCppPoo
//
//  Created by José Ignacio Gutiérrez Guzmán on 4/14/18.
//  Copyright © 2018 José Ignacio Gutiérrez Guzmán. All rights reserved.
//

#ifndef Llama_h
#define Llama_h


#endif

// The class "Animal" may possess a definition for eat() if desired.
class Llama : public Animal {
public:
    // The non virtual function move() is inherited but not overridden
    void eat() override {
        std::cout << "Llamas eat grass!" << std::endl;
    }
};
