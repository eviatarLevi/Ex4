#include "CircularInt.hpp"

CircularInt::CircularInt(int minVal, int maxVal) : min(minVal), max(maxVal), h(minVal)
{

}
CircularInt& CircularInt::operator+ (const int num){
    int t = max - min + 1;
    h = ((h-min) + (num%t))%t + min;
    return *this;
}
CircularInt& CircularInt::operator++ (int){
    return (*this+1);
}
CircularInt& CircularInt::operator+= (const int num){
    return (*this+num);
}
CircularInt& CircularInt::operator- (const int num){
    int t = max - min + 1;
    h = ((h-max) - (num%t))%t + max;
    return *this;
}
CircularInt& CircularInt::operator-- (int){
    return (*this-1);
}
CircularInt& CircularInt::operator-= (const int num){
    return (*this-num);
}


