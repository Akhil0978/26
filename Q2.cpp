#include<iostream>
using namespace std;
class Time
{
    private :
       int hr,minu,sec;

    public :
       void setdata(int x, int y,int z)
       {
          hr=x;
          minu=y;
          sec=z;
       }
       void showdata()
       {
           cout<<"Time is "<<endl<<" "<<hr<<"hr"<<":"<<minu<<"min"<<":"<<sec<<"sec"<<endl<<endl;
       }
       void normalize()
       {
               minu = minu+ sec / 60;
               sec = sec % 60;
               hr = hr + minu / 60;
               minu = minu % 60;
       }
       Time add(Time t)
       {
           Time temp;
           temp.sec=sec+t.sec;
           temp.minu=minu+t.minu;
           temp.hr=hr+t.hr;
           temp.normalize();

           return (temp);
       }
};
int main()
{
    Time c1 ,c2 ,c3;
    int c,d,e ,m,n,o;
    cout<<"Enter hours : "<<endl;
    cin>>c;
    cout<<"Enter Minutes : "<<endl;
    cin>>d;
    cout<<"Enter seconds : "<<endl;
    cin>>e;
    c1.setdata(c,d,e);
    c1.showdata();



    cout<<"Enter hours : "<<endl;
    cin>>m;
    cout<<"Enter Minutes : "<<endl;
    cin>>n;
    cout<<"Enter seconds : "<<endl;
    cin>>o;
    c2.setdata(m,n,o);
    c2.showdata();

    c3=c1.add(c2);
    cout<<"Addition of time is : "<<endl;
    c3.showdata();
    return 0;
}

