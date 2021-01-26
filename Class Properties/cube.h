#include <iostream>
class Cube {
    public:
        Cube() {
            length_ = 1;
            std::cout << "Default constructor invoked!" << std::endl;
         }
        Cube(const Cube & obj) {
            length_ = obj.length_;
            std::cout << "Copy constructor invoked!" << std::endl;
         }

        Cube & operator=(const Cube & obj) {
            length_ = obj.length_;
            std::cout << "Assignment operator invoked!" << std::endl;
            return *this;
            }

        double getSurfaceArea() {return 6 * length_;}
        void setLength(double length){length_ = length;}
    private:
        double length_;
};