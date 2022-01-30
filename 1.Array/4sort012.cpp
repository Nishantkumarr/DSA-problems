#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
        int size;
        int count0=0,count1=0,count2=0;
        cin>>size;
        vector<int> outarr;
        int arr[size];
        for (int i=0;i<size;i++){
            cin>>arr[i];
            if (arr[i]==0){
                count0++;
            }else if (arr[i]==1){
                count1++;
            }else if (arr[i]==2){
                count2++;
            }
        }
        
        while(count0--){
            outarr.push_back(0);
        }
        while(count1--){
            outarr.push_back(1);
        }
        while(count2 --){
            outarr.push_back(2);
        }
        for (int i:outarr){
            cout<<i;
        }
        return 0;
    }
