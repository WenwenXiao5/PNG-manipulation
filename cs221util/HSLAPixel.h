#ifndef wenwen
#define wenwen

namespace cs221util{
class HSLAPixel{
    //Member declaration / Class definition
public:
    double h;
    double s;
    double l;
    double a;

    HSLAPixel();

    HSLAPixel(double hue, double satur, double lumin);

    HSLAPixel(double hue, double satur, double lumin, double alpha);
};
}

#endif