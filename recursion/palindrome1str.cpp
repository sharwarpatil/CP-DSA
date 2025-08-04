#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool fn(string &a, int i, int n)
{
    if (i >= n / 2)
    {
        return true;
    }
    if (a[i] != a[n - 1 - i])
        return false;
    return fn(a, i + 1, n); // should return recursion result too cuz it wont be returning anyrhing 
}

int main()
{
    string s = "asdfdaa";


    bool x = fn(s, 0, s.size());
    if (x)
        cout << "yes";
    else
        cout << "no";
    return 0;
}