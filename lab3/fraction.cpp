#include"fraction.h"
using namespace std;
void fraction::setNum(int _num)
{
    num = _num;
}
void fraction::setDen(int _den)
{
    den = (_den == 0)? 1: _den;
}
int fraction::getNum()const{
    return num;
}
int fraction::getDen()const{
    return den;
}
fraction::fraction()
{
    num = 0;
    den = 1;
}
fraction::fraction(const int &_num,const int &_den)
{
    num = _num;
   den = (_den == 0)? 1: _den;
}
fraction::fraction(const int &_num)
{
    num = _num;
    den = 1;
}
fraction fraction::operator+(const fraction &rhs)
{
    fraction result;
    result.num = num * rhs.den + den * rhs.num;
    result.den = den *rhs.den;
    return result;
}
fraction fraction::operator-(const fraction &rhs)
{
    fraction result;
    result.num = num * rhs.den - den * rhs.num;
    result.den = den *rhs.den;
    return result;
}
fraction fraction::operator/(const fraction &rhs)
{
    fraction result;
    result.num = num * rhs.den;
    if(rhs.num != 0)
    result.den = den *rhs.num;
    else
    result.den = den;
    return result;
}
fraction fraction::operator*(const fraction &rhs)
{
    fraction result;
    result.num = num * rhs.num;
    result.den = den *rhs.den;
    return result;
}
bool fraction::operator<(const fraction &rhs)
{
    return (num * rhs.den < den * rhs.num)?1:0;
}
bool fraction::operator==(const fraction &rhs)
{
    return (num * rhs.den == den * rhs.num)?1:0;
}
bool fraction::operator<=(const fraction &rhs)
{
    return (*this < rhs || *this == rhs)?1:0;
}
bool fraction::operator>(const fraction &rhs)
{
    return !(*this <= rhs);
}
bool fraction::operator>=(const fraction &rhs)
{
    return !(*this < rhs);
}
bool fraction::operator!=(const fraction &rhs)
{
    return !(*this == rhs);
}
fraction& fraction::operator++()
{
    num = num + den;
    return *this;
}
fraction fraction::operator++(int)
{
    fraction preVal {*this};
    num = num + den;
    return preVal;
}
fraction& fraction::operator--()
{
    num = num - den;
    return *this;
}
fraction fraction::operator--(int)
{ 
    fraction preVal{*this};
    num = num - den;
    return preVal;
}
ostream& operator<<(ostream& os,const fraction &rhs)
{
    os<<rhs.getNum()<<'/'<<rhs.getDen();
    return os;
}
istream& operator>>(istream& is,fraction &rhs)
{
    int _num{},_den{};
    char sign{};
    is>>_num>>sign>>_den;
    rhs.setNum(_num);
    rhs.setDen(_den);
    return is;
}
