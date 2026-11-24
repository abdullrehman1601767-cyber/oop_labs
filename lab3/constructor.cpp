#include<iostream>
using namespace std;
class fraction
{
   private :
    int num{0};
    int denum{1};
   public :
    void setnum(int);
    void setdenum(int);
    int getnum()const;
    int getdenum()const;
    void print()const;
    fraction addition(const fraction&);
    fraction() 
    {
      num ;
      denum;
    };
};
int main()
{
    fraction f1;
    f1.setnum(15);
    f1.setdenum(15);
    {
        fraction f2(f1);
        fraction f3 = f1.addition(f2);
        cout<<"Addition is : ";
        f3.print();
    }
    return 0;
}
void fraction::setnum(int _num)
{
    num = _num;
};
void fraction::setdenum(int _denum)
{
    if(denum == 0)
    {
        denum = 1;
    }
    else
    {
        denum = _denum;
    }
};
int fraction::getnum()const
{
    return num;
};
int fraction::getdenum()const
{
    return denum;
};
void fraction::print()const
{
    cout<<num<<"/"<<denum<<endl;
};
fraction fraction::addition(const fraction &rhs)
{
    int _num{0},_denum{1};
    fraction result;
    _num = num * rhs.num;
    _denum = denum * rhs.denum;
    result.setnum(_num);
    result.setdenum(_denum);
    return result;
};

