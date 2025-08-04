#include <iostream>
using namespace std;
int f(int i)
{
    if (i == 0){
        return 0;
    }
   
    return i+f(i-1);
  
}
int main()
{
    int n=4;

    cout<<f(n);
    return 0;
}


// #include <iostream>

// using namespace std;
// int f(int i)
// {
//     if (i == 0){
//         return 0;
//     }
   
//     return (i+f(i-1));
 
    
// }
// int main()
// {
//     int n=5;
//     cout<<f(n);
//     return 0;
// }
