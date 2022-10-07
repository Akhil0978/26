#include<iostream>
using namespace std;
class Student
{
     private:
         int marks;
         char grades;
     public:
        Student(int m,char n)
        {
            marks =m;
            grades =n;
        }
        void show()
        {
            cout<<"\nMarks = "<<marks<<endl;
            cout<<"\nGrades= "<<grades<<endl;
        }
};
int main()
{
    Student s1(600,'B'),s2(700,'A');
    cout<<"Record of student 1 ..............."<<endl;
    s1.show();

    cout<<"Record of student 2 ..............."<<endl;
    s2.show();
    return 0;
}
