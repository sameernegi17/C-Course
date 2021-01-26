#include <iostream>

class Cube {
    public:
       // Cube() {length_ = 1;}
        Cube(int length) {length_ = length;}
        double getSurfaceArea() {return 6 * length_;}
        void setLength(double length){length_ = length;}
    private:
        double length_;
};

int main() {
    Cube c;
    double area = c.getSurfaceArea();
    std::cout << "area: " << area << std::endl;
    Cube c1(5);
    area = c1.getSurfaceArea();
    std::cout << "area: " << area << std::endl;
    return 0;
} 