#ifndef BASE_3_H
#define BASE_3_H
class Base
{
    private:
     int num{};
    public:
     Base();
     Base(int);
     Base (const Base&);
     ~Base();
     void print()const;
     Base& operator=(const Base&);
};
#endif