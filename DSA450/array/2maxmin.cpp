#include<bits/stdc++.h> 
using namespace std;

struct maxmin{
    int max ;
    int min ;
};

struct maxmin getmaxmin(int *arr,int low , int high){
    struct maxmin mm , mml,mmr;
    if (low==high){
       mm.max=arr[low];
       mm.min=arr[low];
       return mm;
    }
    else if (high==low+1){
        if (arr[low]>arr[high]){
            mm.max=arr[low];
            mm.min=arr[high];
            return mm;
        }else{
            mm.max=arr[high];
            mm.min=arr[low];
            return mm;
        }
    
    }
    else {
        
        
        int mid = (low + high) / 2;
        mml = getmaxmin(arr, low, mid);
        mmr = getmaxmin(arr, mid + 1, high);
     
        // Compare minimums of two parts
        if (mml.min < mmr.min)
            mm.min = mml.min;
        else
            mm.min = mmr.min;    
        
        // Compare maximums of two parts
        if (mml.max > mmr.max)
            mm.max = mml.max;
        else
            mm.max = mmr.max;    

        return mm;
    }
}
int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 
    
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
        int a[]={1,56,5,66,0,123,45,668,12,9,55776,23,45,6,7};
        int size=sizeof(a)/sizeof(int);
        int max,min,high,low;
        struct maxmin mainmm;
        low=0;
        high=size-1;
        mainmm=getmaxmin(a,low,high);
        cout<<"Max :- "<<mainmm.max<<"  Min :- "<<mainmm.min;
        return 0;
    }
