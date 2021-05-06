// #buySellStocks with multiple chances to do the trade..

#include<bits/stdc++.h> 
using namespace std;


void getarray( int *arr,int size){
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
}

int maxprofitMultrade(int*arr,int size){
    int mprofit=0;
    for(int i=0;i<size-1;i++){
        if(arr[i]<arr[i+1]){
            mprofit+=arr[i+1]-arr[i];
        }
    }
    return mprofit;
}


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int size, maxprofit;
        cin>>size;
        int *arr=new int[size];
        getarray(arr,size);
        maxprofit=maxprofitMultrade(arr,size);
        cout<<"The maximum profit made by trading multiple times is "<<maxprofit<<endl;
        return 0;
    }
