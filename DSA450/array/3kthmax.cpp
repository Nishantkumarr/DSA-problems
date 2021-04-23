#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
        int arr[]={1,0,45,2,33,4,10,2,3,5,66,4,100};
        int k;
        int size=sizeof(arr)/sizeof(int);
        sort(arr,arr+size);
        cin>>k;
        cout<<"Kth element "<<arr[k-1]<<endl;
        sort(arr,arr+size,greater<int>());
        cout<<"Kth element after diff sort approch  "<<arr[k-1];
        return 0;
    }
