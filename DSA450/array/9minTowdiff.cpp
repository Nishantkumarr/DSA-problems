#include<bits/stdc++.h> 
using namespace std;

void getarray( int *arr,int size){
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
}

void putarray( int *arr,int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
        int size,maxi, mini,diff;
        int *arr=new int [size];
        cin>>size;
        cout<<size;
        getarray(arr,size);
        putarray(arr,size);
        sort(arr,arr+size);
        putarray(arr,size);
        diff=(arr[size-1]-arr[0])-6;
        cout<<"The minimum diffrence between the towers is " <<diff <<" "<<endl;
        return 0;
    }
