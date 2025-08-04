#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s = {1, 5, 3, 4};
    s.insert(2);
    s.insert(1);
    auto it1 = s.begin();
    auto it2 = next(it1, 3);
    cout<<endl;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it<<" ";
    }

    return 0;
}
