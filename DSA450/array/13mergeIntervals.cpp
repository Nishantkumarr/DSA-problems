#include<bits/stdc++.h> 
using namespace std;


vector<vector<int>> merged(vector<vector<int>> arr){
    //function to sort the arrays
        sort(arr.begin(),arr.end());
        vector<int> tempinterval;
        vector<vector<int>> merged;
        tempinterval=arr[0];
        for(auto it:arr){
            if(it[0]<=tempinterval[1]){ 
                tempinterval[1]=max(it[1],tempinterval[1]);
            }else{
                merged.push_back(tempinterval);
                tempinterval=it;
            }
        }
        merged.push_back(tempinterval);
        return merged;
}

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        vector<vector<int>> arr;
        int size,value;
        cin>>size;
        for (int i=0;i<size;i++)
        {   vector<int> row;
            for(int j=0;j<2;j++)
            {
                cin>>value;
                row.push_back(value);
            }
            arr.push_back(row);
        }

        arr=merged(arr);       
         for (auto it:arr)
        {
            cout<<it[0]<<" "<<it[1]<<endl;
        }


        return 0;
    }
