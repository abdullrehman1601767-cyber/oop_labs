#include<iostream>
#include"date.h"
using namespace std;
date::date(int _day,int _month,int _year)
{
    if(_day < 1 || _day >monthdays[_month -1]||_month > 12 || _month < 1 ||_year < 1)
    {
        day = 0;
        month = 0;
        year = 0;
    }
    else 
    {
        day = _day;
        month = _month;
        year = _year;
    }
};
void date::print()const
{
    cout<<day<<"-"<<month<<"-"<<year<<endl;
};
void date::printLong()const{
    cout<<monthnames[month - 1]<<" "<<day<<","<<year<<endl;
}
void date::increament()
{
    day++;
    if(day > monthdays[month - 1])
    {
        day = 1;
        if(month == 12)
        {
            month = 1;
            year++;
        }
        else 
        {
            month++;
        }
    }
};


