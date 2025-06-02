class Solution {
public:
    int xorAllNums(vector<int>& n1, vector<int>& n2) {
        // vector<int> n3;
        // for(int i=0;i<n1.size();i++){
        //     for(int j=0;j<n2.size();j++){
        //         n3.push_back(n1[i]^n2[j]);
        //     }
        // }
        
        // int xr=((n3[0])^(n3[1]));
        // for(int i=2;i<n3.size();i++){
        //     xr= xr^n3[i];
        // }
        // return xr;
        //TLE issue
        int xor1=0;
        int xor2=0;
        // If n2 length is odd, each element in nums1 appears odd times in
        if((n2.size())%2!=0){
            for(int i : n1){
                xor1^=i;
            }
            
        }
        // If nums1 length is odd, each element in nums2 appears odd times in
        if((n1.size())%2!=0){
            for(int i : n2){
                xor2^=i;
            }
            
        }
        return xor1^xor2;
    }
};

