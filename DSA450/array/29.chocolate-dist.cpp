#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        vector<int> nums;
        int m,n,mindiff,values,cdiff;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>values;
            nums.push_back(values);
        }
       
        sort(nums.begin(),nums.end());
       
        for(int i=0;i<n-m+1;i++){
            cdiff=nums[i]>nums[i+m-1]? nums[i]-nums[i+m-1]:nums[i+m-1]-nums[i];
            if(i==0){
                mindiff=cdiff;
            }
            mindiff=mindiff<cdiff?mindiff:cdiff;

        }
        cout<<"MinDiff :- "<<mindiff<<endl;
        return 0;
    }
