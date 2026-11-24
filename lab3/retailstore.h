#ifndef _retailstore_
#define _retailstore_
class retailstore
{
    private :
     int itemnumber;
     int quentity;
     double cost;
     double totalCost;
    public :
     retailstore();
     retailstore(int,int,double);
     void setitemNumber(int);
     void setquentity(int);
     void setcost(double);
     void setTotalcost(int,double);
     int getitemNumber()const;
     int getquentity()const;
     double getcost()const;
     double getTotalcost()const;
     void print()const;
};
#endif