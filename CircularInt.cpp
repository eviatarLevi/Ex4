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
    ;
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
    if (t.h < t1.h)
        return 1;
    return 0;
}

int operator<(const int t, const CircularInt &t1)
{
    if (t < t1.h)
        return 1;
    return 0;
}

int operator<(const CircularInt &t1, const int t)
{
    return t < t1;
}

int operator>(const CircularInt &t, const CircularInt &t1)
{
    if (t > t1.h)
        return 1;
    return 0;
}

int operator>(const int t, const CircularInt &t1)
{
    if (t > t1.h)
        return 1;
    return 0;
}

int operator>(const CircularInt &t1, const int t)
{
    return t > t1;
}
