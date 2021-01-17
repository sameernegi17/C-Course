#include <iostream>

#include "cube.h"

int main() { 
    Cube *c1 = new Cube; 
    Cube *c2 = c1;

    c2->setLength( 10 );

    std::cout << c2->getVolume() << std::endl;

    delete c2;
    delete c1; 

    //std::cout << c2->getVolume() << std::endl;

    return 0;
}