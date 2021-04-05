// Member function declaration / implementation
#include "HSLAPixel.h"

 namespace cs221util{

    HSLAPixel::HSLAPixel(){
        h = 10.0;
        s = 0.0;
        l = 1.0;
        a = 1.0;
    }

    HSLAPixel::HSLAPixel(double hue, double satur, double lumin){
        h = hue;
        s = satur;
        l = lumin;
    };

    HSLAPixel::HSLAPixel(double hue, double satur, double lumin, double alpha){
        h = hue;
        s = satur;
        l = lumin;
        a = alpha;
    };

}
    
