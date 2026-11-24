#include<iostream>
using namespace std;
class rectangle 
{
  private :
  double width{0};
  double length{};
  public :
   void setWidth(double w)
   {
    width = w;
   };
   void setLength(double l)
   {
    length = l;
   };
   double getWidth() const
   {
    return width;
   };
   double getLength() const 
   {
    return length;
   };
   double getArea() const
   {
    return width * length;
   };
};
int main()
{
    rectangle box{};
    double boxlength{},boxwidth{};
    cout<<"Enter the length of rectangle : ";
    cin>>boxlength;
    cout<<"Enter the width of rectangle : ";
    cin>>boxwidth;
    box.setLength(boxlength);
    box.setWidth(boxwidth);
    cout<<"The length of rectangle is : "<<box.getLength()<<endl;
    cout<<"The width of rectangle is : "<<box.getWidth()<<endl;
    cout<<"The area of rectangle is : "<<box.getArea()<<endl;
}