#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> x= {1,3,3,2,8};
	int k =7;
	int l=0,r=0;
	int maxind=0,sum=0;
	while(r<x.size()) {
		sum+=x[r];
		while(sum>k) {
			sum-=x[l];
			l++;
		}
		if(sum<=k) {
			maxind=max(maxind,r-l+1);
		}
		r++;
	}
	cout<<maxind;
	return 0;
}
