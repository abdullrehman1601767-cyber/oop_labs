#ifndef _fracwptr_
#define _fracwptr_
#include<iostream>
class fraction
{
  private:
   int  num;
   int  den
   ;
   public:
    void setNum(int);
    void setDen(int);
    int getNum()const;
    int getDen()const;
    fraction();
    fraction(const int&,const int&);
    fraction(const int&);
    fraction operator+(const fraction&);
    fraction operator-(const fraction&);
    fraction operator/(const fraction&);
    fraction operator*(const fraction&);
    bool operator<(const fraction&);
    bool operator>(const fraction&);
    bool operator<=(const fraction&);
    bool operator>=(const fraction&);
    bool operator==(const fraction&);
    bool operator!=(const fraction&);
    fraction& operator++();
    fraction operator++(int);
    fraction& operator--();
    fraction operator--(int);
    friend std::ostream& operator<<(std::ostream& ,const fraction&);
    friend std::istream& operator>>(std::istream&,fraction&);
};
#endif