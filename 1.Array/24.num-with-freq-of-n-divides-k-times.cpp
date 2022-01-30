#include<bits/stdc++.h> 
using namespace std;



void getarray( int *arr,int size){
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
}

void freqnk(int*arr,int size,int k){
    int num=size/k;
    unordered_map<int,int> ans;

    for(int i=0;i<size;i++)
    {
        ans[arr[i]]++;
    
    }
    for(auto it:ans){
        if(it.second>num){
            cout<<it.first<<" :- "<<it.second<<endl;
        }
    }
    
}


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int size,k;
        cin>>size>>k;
        int *arr=new int[size];
        getarray(arr,size);
        freqnk(arr,size,k);
        return 0;
    }
