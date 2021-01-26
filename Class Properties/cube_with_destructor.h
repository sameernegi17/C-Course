#include <iostream>
using namespace std;
class Cube {
    public:
        Cube() {
        cout << "Created $1 (default)" << endl;
        }
        Cube(double length) {
            length_ = length;
            cout << "Created $" << getSurfaceArea() << endl;
        }
        Cube(const Cube & obj) {
        cout << "Created $" << getSurfaceArea() << " via copy" << endl;
        }
        ~Cube() {
        cout << "Destroyed $" << getSurfaceArea() << endl;
        }
        Cube & operator=(const Cube & obj) {
        cout << "Transformed $" << this->length_ << "-> $" << obj.length_ << endl;
        return *this;
        }
        double getSurfaceArea() {return 6 * length_;}
        void setLength(double length){length_ = length;}
    
    private:
        double length_;

};
