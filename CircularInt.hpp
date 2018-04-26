#pragma once
#include <iostream>
#include <string>
using namespace std;
class CircularInt
{
private:
  int min, max;
  int h;

public:
  CircularInt(int minVal, int maxVal);
  CircularInt(const CircularInt &t);
  CircularInt &operator++(int);
  CircularInt &operator+=(const int num);
  CircularInt &operator--(int);
  CircularInt &operator-=(const int num);
  CircularInt &operator*=(const int num);
  CircularInt &operator/=(const int num);
  int getmin();
  int getmax();
  friend ostream &operator<<(ostream &out, const CircularInt &c);
  friend istream &operator>>(istream &in, const CircularInt &c);
  friend CircularInt operator-(const CircularInt &p);
  friend CircularInt operator+(const CircularInt &t, const int num);
  friend CircularInt operator+(const int num, const CircularInt &t);
  friend CircularInt operator-(const CircularInt &t, const int num);
  friend CircularInt operator-(const CircularInt &t, const CircularInt &t1);
  friend CircularInt operator-(const int num, const CircularInt &t);
  friend CircularInt operator+(const CircularInt &t1, const CircularInt &t2);
  friend CircularInt operator*(const CircularInt &t1, const CircularInt &t2);
  friend CircularInt operator*(const CircularInt &t1, const int num);
  friend CircularInt operator*(const int num, const CircularInt &t1);
  friend CircularInt operator/(const CircularInt &t1, const CircularInt &t2);
  friend CircularInt operator/(const CircularInt &t1, const int num);
  friend CircularInt operator/(const int num, const CircularInt &t1);
  friend int operator==(const CircularInt &t, const CircularInt &t1);
  friend int operator==(const int t, const CircularInt &t1);
  friend int operator==(const CircularInt &t1, const int t);
  friend int operator!=(const CircularInt &t, const CircularInt &t1);
  friend int operator!=(const int t, const CircularInt &t1);
  friend int operator!=(const CircularInt &t1, const int t);
  friend int operator<(const CircularInt &t, const CircularInt &t1);
  friend int operator<(const int t, const CircularInt &t1);
  friend int operator<(const CircularInt &t1, const int t);
  friend int operator>(const CircularInt &t, const CircularInt &t1);
  friend int operator>(const int t, const CircularInt &t1);
  friend int operator>(const CircularInt &t1, const int t);
  friend int operator>=(const CircularInt &t, const CircularInt &t1);
  friend int operator>=(const int t, const CircularInt &t1);
  friend int operator>=(const CircularInt &t1, const int t);
  friend int operator<=(const CircularInt &t, const CircularInt &t1);
  friend int operator<=(const int t, const CircularInt &t1);
  friend int operator<=(const CircularInt &t1, const int t);
  friend CircularInt operator+=(const CircularInt &t1, const CircularInt &t2);
  friend CircularInt operator+=(const CircularInt &t1, const int t);
  friend CircularInt operator+=(const int t, const CircularInt &t2);
  friend CircularInt operator-=(const CircularInt &t1, const CircularInt &t2);
  friend CircularInt operator-=(const CircularInt &t1, const int t);
  friend CircularInt operator-=(const int t, const CircularInt &t2);
  friend CircularInt operator*=(const CircularInt &t1, const CircularInt &t2);
  friend CircularInt operator/=(const CircularInt &t1, const CircularInt &t2);
  CircularInt &operator=(const int);
};
inline ostream &operator<<(ostream &out, const CircularInt &c)
{
    out << c.h;
    return out;
}
inline CircularInt operator-(const CircularInt &p)
{
    CircularInt ans(p);
    ans.h = ans.max - ans.h;
    return ans;
}
inline CircularInt operator+(const CircularInt &t, const int num)
{
    CircularInt ans(t);
    ans += num;
    return ans;
}
inline CircularInt operator+(const int num, const CircularInt &t)
{
    return t + num;
}
inline CircularInt operator-(const CircularInt &t, const int num)
{
    CircularInt ans(t);
    ans -= num;
    return ans;
}
inline CircularInt operator-(const int num, const CircularInt &t)
{
    return -(t - num);
}
inline CircularInt operator+(const CircularInt &t1, const CircularInt &t2)
{
    return t1 + t2.h;
}
inline CircularInt operator*(const CircularInt &t1, const CircularInt &t2)
{
    return t1 * t2.h;
}
inline CircularInt operator*(const CircularInt &t, const int num)
{
    CircularInt ans(t);
    ans *= num;
    return ans;
}
inline CircularInt operator*(const int num, const CircularInt &t)
{
    return t * num;
}

inline CircularInt operator/(const CircularInt &t1, const CircularInt &t2)
{
    return t1 / t2.h;
}
inline CircularInt operator/(const CircularInt &t, const int num)
{
    CircularInt ans(t);
    ans /= num;
    return ans;
}

inline CircularInt operator/(const int num, const CircularInt &t)
{
    return t / num;
}

inline CircularInt operator-(const CircularInt &t, const CircularInt &t1)
{
    return t - t1.h;
}

inline int operator==(const CircularInt &t, const CircularInt &t1)
{
    if (t.h != t1.h)
        return 0;
    return 1;
}

inline int operator==(const int t, const CircularInt &t1)
{
    if (t != t1.h)
        return 0;
    return 1;
}

inline int operator==(const CircularInt &t1, const int t)
{
    return t == t1;
}

inline int operator!=(const CircularInt &t, const CircularInt &t1)
{
    if (t == t1.h)
        return 0;
    return 1;
}

inline int operator!=(const int t, const CircularInt &t1)
{
    if (t == t1.h)
        return 0;
    return 1;
}

inline int operator!=(const CircularInt &t1, const int t)
{
    return t == t1;
}

inline int operator<(const CircularInt &t, const CircularInt &t1)
{
    return t.h<t1.h;
}

inline int operator<(const int t, const CircularInt &t1)
{
    return t<t1.h;
}

inline int operator<(const CircularInt &t1, const int t)
{
    return t < t1;
}

inline int operator>(const CircularInt &t, const CircularInt &t1)
{
   return t1.h>t;
}

inline int operator>(const int t, const CircularInt &t1)
{
    return t>t1.h;
}

inline int operator>(const CircularInt &t1, const int t)
{
    return t > t1;
}
inline int operator>=(const CircularInt &t, const CircularInt &t1)
{
    return t.h>=t1.h;
}

inline int operator>=(const int t, const CircularInt &t1)
{
    return t>=t1.h;
}

inline int operator>=(const CircularInt &t1, const int t)
{
    return t1.h>=t;
}

inline int operator<=(const CircularInt &t, const CircularInt &t1)
{
    return t.h<=t1.h;
}

inline int operator<=(const int t, const CircularInt &t1)
{
   return  t<=t1.h;
}

inline int operator<=(const CircularInt &t1, const int t)
{
    return t1.h<=t;;
}

inline istream &operator>>(istream &input, CircularInt &c)
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

// static istream& getAndCheckNextCharIs(istream& input, char expectedChar) {
//     char actualChar;
//     input >> actualChar;
//     if (!input) return input;

//     if (actualChar!=expectedChar) 
//         // failbit is for format error
//         input.setstate(ios::failbit);
//     return input;
// }

inline CircularInt operator+=(const CircularInt &t1, const CircularInt& t2)
{
    return t1+t2;
}

inline CircularInt operator+=(const CircularInt &t1, const int t)
{
    return t1+t;
}
inline CircularInt operator+=(const int t , const CircularInt& t1)
{
    return t+t1;
}
inline CircularInt operator-=(const CircularInt &t1, const int t)
{
    return t1-t;
}

inline CircularInt operator-=(const int t , const CircularInt& t1)
{
    return t-t1;
}

inline CircularInt operator-=(const CircularInt &t1, const CircularInt& t2)
{
    return t1-t2;
}

inline CircularInt operator*=(const CircularInt &t1, const CircularInt& t2)
{
    return t1*t2;
}

inline CircularInt operator/=(const CircularInt &t1, const CircularInt& t2)
{
    return t1/t2;
}
