// #include <iostream>
// using namespace std;
// int count = 0;
// void f(int k)
// {
//     if (count == k+1)
//         return;
//     else
//     {
//         cout << count << endl;
//         count++;
//         f(k);
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     f(n);
//     return 0;
// }


// or

#include <iostream>
using namespace std;
void f(int i,int k)
{
    if (i > k)
        return;
    else
    {
        cout << k << endl;
        k--;
        f(i,k);
    }
}
int main()
{
    int n;
    cout<<"size -";
    cin >> n;
    f(1,n);
    return 0;
}
