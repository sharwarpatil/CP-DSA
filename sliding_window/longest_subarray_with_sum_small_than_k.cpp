#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> x = {1,4, 3, 4,8};
    int k = 8;
    int maxlen=0;
int sum;
     for (int i = 0; i < x.size(); i++) 
        {
           int j=i;
            sum=0;
           while(j<x.size()){  
                sum+=x[j]; 
                if(sum<=k){
                    maxlen=max(maxlen,(j-i+1)); 
                }
                
                j++;
           }
            cout<<endl;
        }
    cout<<maxlen;
    return 0;
}


