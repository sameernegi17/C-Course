#include <iostream>
#include "cube.h"

int main() {
    cube_user::Cube c;
    c.setLength(3.48);
    double volume = c.getVolume();
    std::cout << "Volume: " << volume << std::endl;
    return 0;
} 