#include<bits/stdc++.h> 
using namespace std;



class Solution {
public:
    void naive_searchMatrix(vector<vector<int>>& arr, int key) {
        int rows=arr.size();
        int cols=arr[0].size();
        bool flag=false;
        int i=0,j=cols-1;
        while((i<rows)&&(j>=0)){
            if(arr[i][j]==key){
                flag=true;
                cout<<"Yes";
            }
            if(arr[i][j]>key){
                j--;
            }else{
                i++;
            }
        }
       if(!flag){
           cout<<"no";
       }
    }
};



int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int n,m,key;
        cin>>n>>m>>key;
        vector<vector<int> > arr;
        for(int i=0;i<n;i++){
            vector<int> val;
            int value;
            for(int j=0;j<m;j++){
                cin>>value;
                val.push_back(value);
            }
            arr.push_back(val);    
        }
        Solution obj;
        obj.naive_searchMatrix(arr,key);
        return 0;
    }
