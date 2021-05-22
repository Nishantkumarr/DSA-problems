#include<bits/stdc++.h> 
using namespace std;


class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here 
        vector<int> arr;
        int val;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                val=matrix[i][j];
                arr.push_back(val);
            }
        }
        
        sort(arr.begin(),arr.end());
        val=(arr.size()-1)/2;
        return arr[val];
    }
};


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int r,c;
        cin>>r>>c;
        vector<vector<int> >matrix(r,vector<int>(c));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>matrix[i][j];
            }
        }
        Solution obj;
        int val=obj.median(matrix,r,c); 
        cout<<val<<endl;
        return 0;
    }
