#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student l ,Student r)
{
    // return l.marks>l.marks;
    //  marks are same the roll wise

    // ****************************** way one
    // if (l.marks > r.marks)
    // {
    //     return true;
    // }
    // else if (l.marks<r.marks)
    // {
    //    return false;
    // }
    // else                     this one is sucks;
    // {
    //     if (l.roll<r.roll)
    //     {
    //        return true;
    //     }
    //     else
    //     {
    //        return false;
    //     }
        
    // }
    // way 2  &&&&&&&&&&&&&&&&&&&&&&&&
    // if (l.marks==r.marks)
    // {
    //    return l.roll<r.roll;     this one is perfect
    // else
    // {
    //     return l.marks>r.marks;
    // }
    // way three $$$$$$$$$$$$$$$$

    return (l.marks==r.marks)? l.roll<r.roll:l.marks>r.marks; 
    // this one is GOAT 
    
    
}
int main()
{
    int num;
    cin >> num;
    Student students[num];
    for (int i = 0; i < num; i++)
    {
        
        cin >>students[i].name>> students[i].roll >> students[i].marks;
    }
    sort(students,students+num,cmp);
    for (int i = 0; i < num; i++)
    {
        cout << students[i].name<<" "<< students[i].roll << " " << students[i].marks << endl;
    }

    return 0;
}