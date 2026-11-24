#include"retailstore.h"
#include<iostream>
using namespace std;
retailstore::retailstore()
{
    itemnumber = 0;
    quentity = 0;
    cost = 0;
    totalCost = 0;
}
retailstore::retailstore(int _itemnumber,int _quentity ,double _cost)
{
    itemnumber = _itemnumber;
    quentity = _quentity;
    cost = _cost;
    setTotalcost(_quentity ,_cost); 
}
void retailstore::setitemNumber(int _itemnumber)
{
    if(_itemnumber < 0){
        itemnumber = 0;
        quentity = 0;
        cost = 0;
    }
    else
    itemnumber = _itemnumber;
}
void retailstore::setquentity(int _quentity)
{
    if(_quentity < 0)
    {
        itemnumber = 0;
        quentity = 0;
        cost = 0;
    }
    else
    quentity = _quentity;
}
void retailstore::setcost(double _cost)
{
    if(cost <= 0)
    {
        itemnumber = 0;
        quentity = 0;
        cost = 0;
    }
    else
    cost = _cost;
}
void retailstore::setTotalcost(int _quentity,double _cost)
{
    totalCost = _quentity * _cost;
}
int retailstore::getitemNumber()const
{
    return itemnumber;
}
int retailstore::getquentity()const
{
    return quentity;
}
double retailstore::getcost()const
{
    return cost;
}
double retailstore::getTotalcost()const
{
   return totalCost;
}
void retailstore::print()const
{
    cout<<"Item number is : "<<itemnumber<<" its quentity : "<<quentity<<" per unit cost : "<<cost<<" total cost : "<<totalCost<<endl;
}