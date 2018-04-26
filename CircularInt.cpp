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

ostream &operator<<(ostream &out, const CircularInt &c)
{
    out << c.h;
    return out;
}
CircularInt operator-(const CircularInt &p)
{
    CircularInt ans(p);
    ans.h = ans.max - ans.h;
    return ans;
}
CircularInt operator+(const CircularInt &t, const int num)
{
    CircularInt ans(t);
    ans += num;
    return ans;
}
CircularInt operator+(const int num, const CircularInt &t)
{
    return t + num;
}
CircularInt operator-(const CircularInt &t, const int num)
{
    CircularInt ans(t);
    ans -= num;
    return ans;
}
CircularInt operator-(const int num, const CircularInt &t)
{
    return -(t - num);
}
CircularInt operator+(const CircularInt &t1, const CircularInt &t2)
{
    return t1 + t2.h;
}
CircularInt operator*(const CircularInt &t1, const CircularInt &t2)
{
    return t1 * t2.h;
}
CircularInt operator*(const CircularInt &t, const int num)
{
    CircularInt ans(t);
    ans *= num;
    return ans;
}
CircularInt operator*(const int num, const CircularInt &t)
{
    return t * num;
}

CircularInt operator/(const CircularInt &t1, const CircularInt &t2)
{
    return t1 / t2.h;
}
CircularInt operator/(const CircularInt &t, const int num)
{
    CircularInt ans(t);
    ans /= num;
    return ans;
}

CircularInt operator/(const int num, const CircularInt &t)
{
    return t / num;
}

CircularInt operator-(const CircularInt &t, const CircularInt &t1)
{
    return t - t1.h;
}

int operator==(const CircularInt &t, const CircularInt &t1)
{
    if (t.h != t1.h)
        return 0;
    return 1;
}

int operator==(const int t, const CircularInt &t1)
{
    if (t != t1.h)
        return 0;
    return 1;
}

int operator==(const CircularInt &t1, const int t)
{
    return t == t1;
}

int operator!=(const CircularInt &t, const CircularInt &t1)
{
    if (t == t1.h)
        return 0;
    return 1;
}

int operator!=(const int t, const CircularInt &t1)
{
    if (t == t1.h)
        return 0;
    return 1;
}

int operator!=(const CircularInt &t1, const int t)
{
    return t == t1;
}

int operator<(const CircularInt &t, const CircularInt &t1)
{
    return t.h<t1.h;
}

int operator<(const int t, const CircularInt &t1)
{
    return t<t1.h;
}

int operator<(const CircularInt &t1, const int t)
{
    return t < t1;
}

int operator>(const CircularInt &t, const CircularInt &t1)
{
   return t1.h>t;
}

int operator>(const int t, const CircularInt &t1)
{
    return t>t1.h;
}

int operator>(const CircularInt &t1, const int t)
{
    return t > t1;
}
int operator>=(const CircularInt &t, const CircularInt &t1)
{
    return t.h>=t1.h;
}

int operator>=(const int t, const CircularInt &t1)
{
    return t>=t1.h;
}

int operator>=(const CircularInt &t1, const int t)
{
    return t1.h>=t;
}

int operator<=(const CircularInt &t, const CircularInt &t1)
{
    return t.h<=t1.h;
}

int operator<=(const int t, const CircularInt &t1)
{
   return  t<=t1.h;
}

int operator<=(const CircularInt &t1, const int t)
{
    return t1.h<=t;;
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
istream &operator>>(istream &input, CircularInt &c)
{
    // ios::pos_type startPosition = input.tellg();

    // if (!(input >> c.getmin() ) ||
    //     (!getAndCheckNextCharIs(input, ' ')) ||
    //     (!(input >> c.getmin())))
    // {
    //     // rewind on error
    //     auto errorState = input.rdstate(); // remember error state
    //     input.clear();                     // clear error so seekg will work
    //     input.seekg(startPosition);        // rewind
    //     input.clear(errorState);           // set back the error flag
    // }
    // return input;
}

static istream& getAndCheckNextCharIs(istream& input, char expectedChar) {
    char actualChar;
    input >> actualChar;
    if (!input) return input;

    if (actualChar!=expectedChar) 
        // failbit is for format error
        input.setstate(ios::failbit);
    return input;
}

CircularInt operator+=(const CircularInt &t1, const CircularInt& t2)
{
    return t1+t2;
}
CircularInt operator-=(const CircularInt &t1, const CircularInt& t2)
{
    return t1-t2;
}
CircularInt operator*=(const CircularInt &t1, const CircularInt& t2)
{
    return t1*t2;
}
CircularInt operator/=(const CircularInt &t1, const CircularInt& t2)
{
    return t1/t2;
}