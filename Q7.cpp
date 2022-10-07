#include<iostream>
using namespace std;
class Box
{
      private :
          int len,bre,hei,vol=0;
      public :
        Box (int x,int y,int z)
        {
            len=x;
            bre=y;
            hei=z;
        }
        int get_len()
        {
            return len;
        }
        int get_bre()
        {
            return bre;
        }
        int get_hei()
        {
            return hei;
        }
        void cal_vol()
        {
            vol=len*bre*hei;
        }
        int get_vol()
        {
            return vol;
        }
};
int main()
{
    Box b(3,4,5);
    cout<<"\t\tLength is : "<<b.get_len()<<endl;
    cout<<"\t\tBreadth is : "<<b.get_bre()<<endl;
    cout<<"\t\tHeight is : "<<b.get_hei()<<endl;
    b.cal_vol();
    cout<<"\t\tVolume  is : "<<b.get_vol()<<endl;
    return 0;
}
