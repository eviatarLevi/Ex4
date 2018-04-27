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
  CircularInt& operator+=(const CircularInt& );
  CircularInt &operator--(int);
  CircularInt &operator-=(const int num);
  CircularInt& operator-=(const CircularInt& );
  CircularInt &operator*=(const int num);
  CircularInt &operator/=(const int num);
  int getmin();
  int getmax();
  void setH(int);
  friend ostream &operator<<(ostream &out, const CircularInt &c);
  friend istream &operator>>(istream &in, const CircularInt &c);
  friend CircularInt operator-(const CircularInt &p);
  friend CircularInt operator+(const CircularInt &t, const int num);
  friend CircularInt operator+(const int num, const CircularInt &t);
  friend CircularInt operator+(const CircularInt &t1, const CircularInt &t2);
  friend CircularInt operator-(const CircularInt &t, const int num);
  friend CircularInt operator-(const CircularInt &t, const CircularInt &t1);
  friend CircularInt operator-(const int num, const CircularInt &t);
  friend CircularInt operator*(const CircularInt &t1, const CircularInt &t2);
  friend CircularInt operator*(const CircularInt &t1, const int num);
  friend CircularInt operator*(const int num, const CircularInt &t1);
  friend CircularInt operator/(const CircularInt &t1, const CircularInt &t2);
  friend CircularInt operator/(const CircularInt &t1, const int num);
  friend CircularInt operator/(const int num, const CircularInt &t1);
  friend bool operator==(const CircularInt &t, const CircularInt &t1);
  friend bool operator==(const int t, const CircularInt &t1);
  friend bool operator==(const CircularInt &t1, const int t);
  friend bool operator!=(const CircularInt &t, const CircularInt &t1);
  friend bool operator!=(const int t, const CircularInt &t1);
  friend bool operator!=(const CircularInt &t1, const int t);
  friend bool operator<(const CircularInt &t, const CircularInt &t1);
  friend bool operator<(const int t, const CircularInt &t1);
  friend bool operator<(const CircularInt &t1, const int t);
  friend bool operator>(const CircularInt &t, const CircularInt &t1);
  friend bool operator>(const int t, const CircularInt &t1);
  friend bool operator>(const CircularInt &t1, const int t);
  friend bool operator>=(const CircularInt &t, const CircularInt &t1);
  friend bool operator>=(const int t, const CircularInt &t1);
  friend bool operator>=(const CircularInt &t1, const int t);
  friend bool operator<=(const CircularInt &t, const CircularInt &t1);
  friend bool operator<=(const int t, const CircularInt &t1);
  friend bool operator<=(const CircularInt &t1, const int t);
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

inline CircularInt operator-(const CircularInt &t, const CircularInt &t1)
{
  return t - t1.h;
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

inline bool operator==(const CircularInt &t, const CircularInt &t1)
{
  return t1.h==t.h;
}

inline bool operator==(const int t, const CircularInt &t1)
{
  return t==t1.h;
}

inline bool operator==(const CircularInt &t1, const int t)
{
  return t1.h == t;
}

inline bool operator!=(const CircularInt &t, const CircularInt &t1)
{
  return t.h!=t1.h;
}

inline bool operator!=(const int t, const CircularInt &t1)
{
  return t!=t1.h;
}

inline bool operator!=(const CircularInt &t1, const int t)
{
  return t != t1;
}

inline bool operator<(const CircularInt &t, const CircularInt &t1)
{
  return t.h < t1.h;
}

inline bool operator<(const int t, const CircularInt &t1)
{
  return t < t1.h;
}

inline bool operator<(const CircularInt &t1, const int t)
{
  return t1.h<t;
}

inline bool operator>(const CircularInt &t, const CircularInt &t1)
{
  return t.h > t1.h;
}

inline bool operator>(const int t, const CircularInt &t1)
{
  return t > t1.h;
}

inline bool operator>(const CircularInt &t1, const int t)
{
  return t1.h > t;
}
inline bool operator>=(const CircularInt &t, const CircularInt &t1)
{
  return t.h >= t1.h;
}

inline bool operator>=(const int t, const CircularInt &t1)
{
  return t >= t1.h;
}

inline bool operator>=(const CircularInt &t1, const int t)
{
  return t1.h >= t;
}

inline bool operator<=(const CircularInt &t, const CircularInt &t1)
{
  return t.h <= t1.h;
}

inline bool operator<=(const int t, const CircularInt &t1)
{
  return t <= t1.h;
}

inline bool operator<=(const CircularInt &t1, const int t)
{
  return t1.h <= t;
  ;
}

inline istream &operator>>(istream &input, CircularInt &c)
{
  ios::pos_type startPosition = input.tellg();
 int t;
input>>t;
  if (t > c.getmin() && t < c.getmax())
  {
    c.setH( t);
  }
  else
  {
    int p = c.getmax() - c.getmin() + 1;
    if (t > c.getmax())
    {
      
      while (t > c.getmax())
        t = t - p;
      c.setH (t);
    }
    else
    {
      if (t < c.getmin())
      {
        
        while (t < c.getmin())
          t = t + p;
      }
      c.setH (t);
    }
  }
  return input;
}

inline CircularInt operator*=(const CircularInt &t1, const CircularInt &t2)
{
  return t1 * t2;
}

inline CircularInt operator/=(const CircularInt &t1, const CircularInt &t2)
{
  return t1 / t2;
}
