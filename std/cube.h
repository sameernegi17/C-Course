
#ifndef CUBE_H_
#define CUBE_H_

namespace cube_user
{
    class Cube {
        public:
            double getVolume();
            double getSurfaceArea();
            void setLength(double length);
        private:
            double length_;
    };
}

#endif 