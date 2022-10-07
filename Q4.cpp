#include<iostream>
using namespace std;
class Counter
{
    private :
        int count ;
    public :
        counter()
        {
            count =0;
        }
        void inc_count()
        {
            count++;
        }
        int get_count()
        {
            return count;
        }
};
int main()
{
    Counter c1;
    cout<<"\nBefore calling counter function,count= ";
    cout<<c1.get_count();
    c1.inc_count();

    cout<<"\nAfter calling counter function, count = ";
    cout<<c1.get_count();
    cout<<endl;
    return 0;
}
