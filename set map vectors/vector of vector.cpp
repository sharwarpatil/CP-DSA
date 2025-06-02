#include<iostream>
#include<vector>

using namespace std;
#define ROW 4 
#define COL 5
int main(){
    vector<vector<int>> vec;
 int num = 2; 
  
    for (int i = 0; i < ROW; i++) { 
        vector<int> v1; 
  
        for (int j = 0; j < COL; j++) { 
            v1.push_back(num); 
            num += 5; 
        } 
  
        vec.push_back(v1); 
    } 
  
    for (int i = 0; i < vec.size(); i++) { 
        for (int j = 0; j < vec[i].size(); j++) 
            cout << vec[i][j] << " "; 
        cout << endl; 
    } 
    cout<<"After deletion"<<endl;
    vec[0].pop_back(); 
    vec[1].pop_back(); // remove last element of selected row
    vec.pop_back(); // removes complete last row 
  
    for (int i = 0; i < 3; i++) { 
        for ( 
            auto it = vec[i].begin(); 
            it != vec[i].end(); it++) 
            cout << *it << " "; 
        cout << endl; 
    } 
    return 0; 
} 