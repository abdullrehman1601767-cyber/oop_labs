#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

class DayofYear
{
    private:
      int day{};
      int month{};
      static const int monthdays[12];
      static const char * monthnames[12];

      public:
        DayofYear();
        DayofYear(const int&);

        void print()const;

        DayofYear operator++(int); //postfix
        DayofYear& operator++(); //prefix
        DayofYear operator--(int); //postfix
        DayofYear& operator--(); //prefix
};
#endif