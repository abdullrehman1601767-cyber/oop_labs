#ifndef BASE_2_H
#define BASE_2_H
class Base
{
    private:
     int num{};

    public :
     Base();
     Base(int);
     ~Base();
     void print()const;
};
#endif