//
//  Abstracta.h
//  CursoCppPoo
//
//  Created by José Ignacio Gutiérrez Guzmán on 4/14/18.
//  Copyright © 2018 José Ignacio Gutiérrez Guzmán. All rights reserved.
//

#ifndef Abstracta_h
#define Abstracta_h


#endif /* Animal_h */

class Animal {
public:
    void /*non-virtual*/ move(void) {
        std::cout << "This animal moves in some way" << std::endl;
    }
    virtual void eat() = 0;
};




