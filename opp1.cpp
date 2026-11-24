#include<iostream>
using namespace std;
class fraction
{
    private :
     int num {0};
     int denum {1};
    public :
     void setnum(int _num)
     {
        num = _num;
     };
     void setdenum(int _denum)
     {
        if(_denum == 0)
        {
            denum = 1;
        }
        else 
        {
            denum = _denum;
        }
     };
     int getnum() const
     {
        return num;
     };
     int getdenum() const
     {
        return denum;
     };
     void print()
     {
        cout<<num<<"/"<<denum<<endl;
     };
     fraction addition(const fraction &rhs)
     {
        fraction result;
        result.num = num * rhs.denum + denum * rhs.num;
        result.denum = denum * rhs.denum;
        return result;
     };
     fraction subtract(const fraction &rhs)
     {
        fraction result;
        result.num = num * rhs.denum - denum * rhs.num;
        result.denum = denum * rhs.denum;
        return result;
     };
     fraction division(const fraction &rhs)
     {
         fraction result;
        result.num = num * rhs.denum;
        result.denum = denum * rhs.num;
        return result;
     };
     fraction multiply(const fraction &rhs)
     {
         fraction result;
        result.num = num * rhs.num;
        result.denum = denum * rhs.denum;
        return result;
     };
};
int main()
{
    fraction f1,f2,f3;
    f1.setnum(5);
    f1.setdenum(9);
    f2.setnum(7);
    f2.setdenum(11);
    cout<<"Fraction 1 is : "<<f1.getnum()<<"/"<<f1.getdenum()<<endl;
    cout<<"Fraction 2 is : "<<f2.getnum()<<"/"<<f2.getdenum()<<endl;
    f3 = f1.addition(f2);
    cout<<"addition of these fractions is : ";
    f3.print();
    return 0;
}