#include <bits/stdc++.h>
using namespace std;
class Criketer
{
public:
    string country;
    int jercy;
    Criketer(string country, int jercy)
    {
        this->country = country;
        this->jercy = jercy;
    }
};
int main()
{
    Criketer *mojibur = new Criketer("bangladesh", 24);
    Criketer *mamun = new Criketer("bangladesh", 26);
    *mamun = *mojibur;
    delete mojibur;
    cout << mamun->country << " " << mamun->jercy << endl;
    return 0;
}