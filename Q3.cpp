#include<iostream>
using namespace std;
class Cube
{
   public :
         double side;
         double vol()
         {
             return (side*side*side);
         }
         Cube (double side1)
         {
             cout<<"\nA constructor is called "<<endl;
             side=side1;
         }
         Cube()
         {
              cout<<"\nA default constructor is called "<<endl;
         }
         ~Cube()
         {
             cout<<"\n Destructing "<<side<<endl;
         }
};
int main()
{
    Cube c1(3.45);
    Cube c2;
    cout<<"The side of cube is : "<<c1.side<<endl;
    cout<<"The volume of first cube is : "<<c1.vol()<<endl;

    cout<<"Enter side of second cube : ";
    cin>>c2.side;
    cout<<"The volume of second cube is : "<<c2.vol()<<endl;
    return 0;
}
