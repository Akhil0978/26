#include<iostream>
using namespace std;
class Bill
{
     private:
         int c_no ;
         char c_name;
         int units;
         double bill;
     public:
         void get()
         {
             cout<<"Enter details of customer below : \n"<<endl;
             cout<<"Enter consumer Number : \n"<<endl;
             cin>>c_no;
             cout<<"Enter consumer Name : \n"<<endl;
             cin>>c_name;
             cout<<"Enter No.of units used : \n"<<endl;
             cin>>units;
         }
         void put()
         {
             cout<<"\nEntered details of customer are : \n"<<endl;
             cout<<"\nConsumer number is      : \n"<<c_no<<endl;
             cout<<"\nConsumer name is : \n"<<c_name<<endl;
             cout<<"\nNumber of units consumed : \n"<<units<<endl;
             cout<<"\nBill of consumer : \n"<<bill<<endl;
         }
         void cal_bill()
         {
             if(units<=100)
                 bill=units*1.20;
             else if(units<=200)
                 bill=100*1.20+(units-100)*2;
             else
                    bill=100*1.20+200*2+(units-300)*3;
         }

};
int main()
{
    Bill b;
    b.get();
    b.cal_bill();
    b.put();
    cout<<"\n";
    return 0;
}
