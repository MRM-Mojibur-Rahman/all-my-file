#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int num;
    cin >> num;
    Student students[num];
    for (int i = 0; i < num; i++)
    {
        cin.ignore();
        getline(cin, students[i].name);
        cin >> students[i].roll >> students[i].marks;
    }
    Student mn;

    mn.marks = INT_MAX;
    for (int i = 0; i < num; i++)
    {
        if (students[i].marks < mn.marks)
        {
            mn = students[i];
        }
    }
    cout << mn.name << endl
         << mn.roll << " " << mn.marks << endl;

    return 0;
}