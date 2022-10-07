#include<iostream>
using namespace std;
class Bank
{
   private:
       float prin,roi,year,si=0;
   public:
       Bank(float x,float y,float z)
       {
           prin=x;
           roi=y;
           year=z;
       }
       float get_prin()
       {
           return prin;
       }
       float get_roi()
       {
           return roi;
       }
       float get_year()
       {
           return year;
       }
       void cal_si()
       {
           si=prin*roi*year;
       }
       float get_si()
       {
           return si;
       }
};
int main()
{
    Bank b(2000,0.05,5);
    cout<<"\t\tPrincipal is : "<<b.get_prin()<<endl;
    cout<<"\t\tRate of interest  is : "<<b.get_roi()<<endl;
    cout<<"\t\tYear is : "<<b.get_year()<<endl;
    b.cal_si();
    cout<<"\t\tSimple interest is : "<<b.get_si()<<endl;
}
