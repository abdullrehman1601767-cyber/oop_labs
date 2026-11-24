#ifndef FRACNUM_H
#define FRACNUM_H
class Numbers 
{
    private :
     int size{0};
     float * arr = nullptr;
    public :
     Numbers();
     ~Numbers();
     void setarrsize(const int&);
     void setnum(const float&,const int&);
     float getnum(const int&);
     int arrsize();
     float gethighnum();
     float getlownum();
     float getaverage();
     void print();
};
#endif