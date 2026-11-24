#include<iostream>
using namespace std;
class fraction 
{
  private :
   int nominator{0};
   int denominator{0};
   public :
    int getNominator() const
    {
        return nominator;
    };
    int getDenomitor() const
    {
        return denominator;
    };
    void setNominator(int nomi)
    {
        nominator = nomi;
    };
    void setDenominator(int denomi)
    {
        if(denomi == 0)
        {
            denominator = 1;
        }
        else 
        {
            denominator = denomi;
        }
    }
};
int main()
{
    fraction f1{},f2{};
    int value{};
    cout<<"Enter the nominator of first fraction : ";
    cin>>value;
    f1.setNominator(value);
    cout<<"Enter the denominator of first fraction : ";
    cin>>value;
    f1.setDenominator(value);
    cout<<"Enter the nominator of first fraction : ";
    cin>>value;
    f2.setNominator(value);
    cout<<"Enter the denominator of first fraction : ";
    cin>>value;
    f2.setDenominator(value);
    cout<<
}