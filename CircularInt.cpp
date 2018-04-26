#include "CircularInt.hpp"

CircularInt::CircularInt(int minVal, int maxVal) : min(minVal), max(maxVal), h(minVal)
{
}
CircularInt::CircularInt(const CircularInt &t) : min(t.min), max(t.max), h(t.h)
{
}
CircularInt &CircularInt::operator++(int)
{
    return (*this += 1);
}
CircularInt &CircularInt::operator+=(const int num)
{
    int t = max - min + 1;
    h = ((h - min) + (num % t)) % t + min;
    return *this;
}

CircularInt &CircularInt::operator--(int)
{
    return (*this -= 1);
}

CircularInt &CircularInt::operator-=(const int num)
{
    int t = max - min + 1;
    h = ((h - max) - (num % t)) % t + max;
    return *this;
}

CircularInt &CircularInt::operator*=(const int num)
{
    for (int i = 1; i < num; i++)
    {
        *this += h;
    }
    return *this;
}

CircularInt &CircularInt::operator/=(const int num)
{
    CircularInt temp(min, max);
    for (int i = min; i < max; i++)
    {
        temp.h = i;
        temp *= num;
        if (h == temp.h)
        {
            h = i;
            return *this;
        }
    }
    string ans = "here is no number x in {" + std::to_string(min) + "," + std::to_string(max) + "} such that x*" + std::to_string(num) + "=10";
    throw ans;
}

CircularInt &CircularInt::operator=(const int num)
{
    if(num>=this->min&&num<=this->max){
    this->h = num;
    return *this;}
    string er="Error";
    throw er;
}
int CircularInt::getmin()
{
    return min;
}
int CircularInt::getmax()
{
    return max;
}