#include "fraction.h"
#include<iostream>
using namespace std;
void fraction::setnum(int _num)
{
    num = _num;
};
void fraction::setdenum(int _denum)
{
    if(_denum == 0)
    {
        denum = 1;
    }
    else 
    {
        denum = _denum;
    }
};
int fraction::getnum()const
{
    return num;
};
int fraction::getdenum()const
{
    return denum;
};
void fraction::print()const
{
    cout<<num<<"/"<<denum<<endl;
};
fraction fraction::addition(fraction rhs)
{
    int _num{0},_denum{1};
    fraction result;
    _num = num * rhs.denum + denum * rhs.num;
    _denum = denum * rhs.denum;
    result.setnum(_num);
    result.setdenum(_denum);
    return result;
};
fraction fraction::subtraction(fraction rhs)
{
    int _num{0},_denum{1};
    fraction result;
    _num = num * rhs.denum - denum * rhs.num;
    _denum = denum * rhs.denum;
    result.setnum(_num);
    result.setdenum(_denum);
    return result;
};
fraction fraction::division(fraction rhs)
{
    int _num{0},_denum{1};
    fraction result;
    _num = num * rhs.denum;
    _denum = denum * rhs.num;
    result.setnum(_num);
    result.setdenum(_denum);
    return result;
};
fraction fraction::multiply(fraction rhs)
{
    int _num{0},_denum{1};
    fraction result;
    _num = num * rhs.num;
    _denum = denum * rhs.denum;
    result.setnum(_num);
    result.setdenum(_denum);
    return result;
};