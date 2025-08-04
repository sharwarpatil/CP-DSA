#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void fn(string &a, int i, int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(a[i], a[n - 1 - i]);
    fn(a, i + 1, n);
}

int main()
{
    string s = "asdfdaa";

    string k = s;
    for (char i : k)
    {
        cout << i << " ";
    }
    cout << endl;
    fn(k, 0, k.size());
    for (int i = 0; i < k.size(); i++)
    {
        cout << k[i] << " ";
    }
    cout << endl;
    cout << (s == k) ? "Yes" : "No";
    return 0;
}