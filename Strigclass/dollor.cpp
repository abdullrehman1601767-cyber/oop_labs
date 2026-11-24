#include "iostream"
#include "dollor.h"
using namespace std;
Numbers::Numbers()
{
    amount = 0;
}
Numbers::Numbers(const int& _num)
{
    if(_num >= 0 && _num <= 9999)
    {
        amount = _num;
    }
    else 
    {
        amount = 0;
    }
}