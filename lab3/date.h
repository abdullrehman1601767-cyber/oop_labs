#ifndef _date_
#define _date_
class date
{
  private :
   int day{0};
   int month{0};
   int year {0};
   static inline const int monthdays[12]{31,28,31,30,31,30,31,31,30,31,30,31};
   inline static const char * monthnames[12]{"January","February","March","April","May","June","July","August","Semtember","October","November","December"};
  public :
   date(int,int,int);
   void increament();
   void print() const;
   void printLong()const;
};
#endif