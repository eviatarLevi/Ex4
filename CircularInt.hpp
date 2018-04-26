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
    CircularInt& operator=(const int);
};
