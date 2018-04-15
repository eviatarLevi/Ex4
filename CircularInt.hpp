#pragma once
#include <iostream>
using namespace std;
class CircularInt{
    public:
        int min,max;
        int h;
    public:
        CircularInt(int minVal,int maxVal);
        CircularInt& operator+ (const int num);
        CircularInt& operator++ (int);
        CircularInt& operator+= (const int num);
        CircularInt& operator- (const int num);
        CircularInt& operator-- (int);
        CircularInt& operator-= (const int num);
        CircularInt& operator* (const int num);
        CircularInt& operator*= (const int num);
        friend ostream& operator<< (ostream& out,const CircularInt &c);
};
inline ostream& operator<< (ostream& out,const CircularInt &c) {
    out << "[";
    out << c.h;
    out << "]";
    return out;
}