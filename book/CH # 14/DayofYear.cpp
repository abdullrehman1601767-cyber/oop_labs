#include "DayofYear.h"
#include<iostream>
using namespace std;

const int DayofYear::monthdays[12]{31,28,31,30,31,30,31,31,30,31,30,31};
const char* DayofYear::monthnames[12]{"January","February","March","April","May","June","July","August","September","October","November","December"};

DayofYear::DayofYear()
{
    day = 0;
    month = 1;
}
DayofYear::DayofYear(const int& num)
{
    int _day {num};
    if(_day < 0)
    {
        day = 1;
        month = 0;
    }
    else
    {
        if(_day > 365)
        _day = _day % 365;
        month = 0;
        while(_day > monthdays[month])
        {
            _day = _day - monthdays[month]; 
            month++;
        }
        day = _day;

    }
}
void DayofYear::print()const
{
    cout<<monthnames[month]<<' '<<day<<endl;
}
DayofYear& DayofYear::operator++()
{
    if(day == monthdays[month])
    {
        day = 1;
        if(month == 11)
        {
            month = 0;
           }
        else 
        {
            month++;
        }

    }
    else
    {
        day++;
    }
    return *this;
}
DayofYear& DayofYear::operator--()
{
    if(day == 1)
    {
        if(month == 0)
        {
            month = 11;
        }
        else
        {
            month--;
        }
        day = monthdays[month];
    }
    else
    {
        day--;
    }
    return *this;
}
DayofYear DayofYear::operator++(int)
{
    DayofYear tempobj{*this};
    if(day == monthdays[month])
    {
        day = 1;
        if(month == 11)
        {
            month = 0;
           }
        else 
        {
            month++;
        }

    }
    else
    {
        day++;
    }
    return tempobj;
}
DayofYear DayofYear::operator--(int)
{
    DayofYear tempobj{*this};
    if(day == 1)
    {
        if(month == 0)
        {
            month = 11;
        }
        else
        {
            month--;
        }
        day = monthdays[month];
    }
    else
    {
        day--;
    }
    return tempobj;
}

