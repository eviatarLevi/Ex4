#pragma once
#include <iostream>
using namespace std;
class CircularInt{
    private:
        int min,max;
        int h;
    public:
        CircularInt(int minVal,int maxVal);
        CircularInt(const CircularInt& t);
        CircularInt& operator++ (int);
        CircularInt& operator+= (const int num);
        CircularInt& operator-- (int);
        CircularInt& operator-= (const int num);
        CircularInt& operator*= (const int num);
        CircularInt& operator/= (const int num);
       // CircularInt& operator- (const int num,const CircularInt& t );
        friend ostream& operator<< (ostream& out,const CircularInt &c);
        friend CircularInt operator- (const CircularInt& p);
        friend CircularInt operator + ( const CircularInt& t,const int num);
        friend CircularInt operator + (const int num, const CircularInt& t);
        friend CircularInt operator - ( const CircularInt& t,const int num);
        friend CircularInt operator - (const int num, const CircularInt& t);
        friend CircularInt operator + (const CircularInt& t1, const CircularInt& t2);
        friend CircularInt operator * (const CircularInt& t1, const CircularInt& t2);
        friend CircularInt operator * (const CircularInt& t1, const int num);
        friend CircularInt operator * (const int num,const CircularInt& t1);
        friend CircularInt operator / (const CircularInt& t1, const CircularInt& t2);
        friend CircularInt operator / (const CircularInt& t1, const int num);
};
inline ostream& operator<< (ostream& out,const CircularInt &c) {
    out << "[";
    out << c.h;
    out << "]";
    return out;
}
inline CircularInt operator- (const CircularInt& p){
    CircularInt ans(p);
    ans.h = ans.max - ans.h;
    return ans;
}
inline CircularInt operator+ (const CircularInt& t,const int num)
{
    CircularInt ans(t);
    ans += num;
    return ans;
}
inline CircularInt operator+ (const int num, const CircularInt& t)
{
    return t + num;
}
inline CircularInt operator- (const CircularInt& t,const int num)
{
    CircularInt ans(t);
    ans -= num;
    return ans;
}
inline CircularInt operator- (const int num, const CircularInt& t)
{
    return -(t - num);
}
inline CircularInt operator + (const CircularInt& t1, const CircularInt& t2)
{
    return t1+t2.h;
}
inline CircularInt operator * (const CircularInt& t1, const CircularInt& t2)
{
    return t1 * t2.h;
}
inline CircularInt operator* (const CircularInt& t,const int num)
{
    CircularInt ans(t);
    ans *= num;
    return ans;
}
inline CircularInt operator* (const int num, const CircularInt& t)
{
    return t * num;
}

inline CircularInt operator / (const CircularInt& t1, const CircularInt& t2)
{
    return t1/t2.h;
}
inline CircularInt operator/ (const CircularInt& t,const int num)
{
    CircularInt ans(t);
    ans /= num;
    return ans;
}

