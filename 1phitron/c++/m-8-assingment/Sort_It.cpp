#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls, id;
    char sec;
    int math, eng;
};
int cmp(Student a, Student b)
{

    if (a.math+a.eng > b.math+b.eng )
    {
        return 1;
    }
    else if (a.math+a.eng < b.math+b.eng )
    {
        return 0;
    }
    else 
    {
        return (a.id < b.id) ? 1 : 0;
    }
}
int main()
{
    int n;
    cin >> n;
    Student students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].sec >> students[i].id >> students[i].math >> students[i].eng;
        
    }
    sort(students, students + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].sec << " " << students[i].id << " " << students[i].math << " " << students[i].eng << endl;
    }

    return 0;
}