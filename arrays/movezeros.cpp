class Solution {
public:
    void moveZeroes(vector<int>& n) {
        vector<int> a;
        for(int i : n){
            if(i!=0){
                a.push_back(i);
            }
        }
        while(a.size()<n.size()){
            a.push_back(0);
        }
        n=a;
    }
};