#include<iostream>
#include "Numdays.h"
using namespace std;

const float NumDays::workinghours{8};

NumDays::NumDays()
{
    hours = 0;
    days = 0;
}
NumDays::NumDays(const int& _hours)
{
    hours = _hours;
    days = _hours / workinghours;
}

void NumDays::sethours(int _hours)
{
    hours = _hours;
}
void NumDays::setdays(double _days)
{
    days = _days;
}
int NumDays::gethours()const
{
    return hours;
}
double NumDays::getdays()const
{
    return days;
}

NumDays NumDays::operator+(const NumDays& rhs)const
{
    NumDays tempobj{};
    tempobj.hours = rhs.hours + hours;
    tempobj.days = (hours + rhs.hours) / workinghours;

    return tempobj;
}
NumDays NumDays::operator-(const NumDays& rhs)const
{
    NumDays tempobj{};
    tempobj.hours = hours - rhs.hours;
    tempobj.days = (hours - rhs.hours) / workinghours;

    return tempobj;
}
NumDays NumDays::operator++(int)
{
    NumDays tempobj = *this;
    cout<<"operator++(int)"<<endl;
    hours += 1;
    days  = hours / workinghours;

    return tempobj;
}
NumDays& NumDays::operator++()
{
    cout<<"operator++()"<<endl;
    hours += 1;
    days  = hours / workinghours;

    return *this;
}
NumDays NumDays::operator--(int)
{
    NumDays tempobj = *this;
    cout<<"operator--(int)"<<endl;
    hours -= 1;
    days  = hours / workinghours;

    return tempobj;
}
NumDays& NumDays::operator--()
{
    cout<<"operator--()"<<endl;
    hours -= 1;
    days  = hours / workinghours;

    return *this;
}
ostream& operator<<(ostream& os,const NumDays& rhs)
{
    os<<"Hours : "<<rhs.gethours()<<",Days : "<<rhs.getdays();
    return os;
}
