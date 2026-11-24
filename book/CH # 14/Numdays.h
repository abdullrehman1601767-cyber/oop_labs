#include<iostream>
#ifndef NUMDAYS_H
#define NUMDAYS_H

using namespace std;

class NumDays
{
    private:
     int hours{};
     double days{};
     
     static const float workinghours ;
    public :

      NumDays();
      NumDays(const int&);

      void sethours(int);
      void setdays(double);
      int gethours()const;
      double getdays()const;
      
      NumDays operator+(const NumDays&)const;
      NumDays operator-(const NumDays&)const;

      NumDays operator++(int); //postfix
      NumDays& operator++();    //prefix
      NumDays operator--(int); //postfix
      NumDays& operator--();    //prefix

};
#endif
ostream& operator<<(ostream&,const NumDays&); 