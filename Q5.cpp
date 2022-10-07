#include<iostream>
using namespace std;
class Date
{
    private:
         int dd,mm,yy;
    public:
        Date()
        {
            dd=15;
            mm=9;
            yy=2022;
            cout<<"\nDate object has been created.........."<<endl;
        }
        void display()
        {
            cout<<"The entered date is : ";
            cout<<dd<<"-"<<mm<<"-"<<yy<<"\n";
        }
};
int main()
{
    Date date1;
    date1.display();

    return 0;
}
