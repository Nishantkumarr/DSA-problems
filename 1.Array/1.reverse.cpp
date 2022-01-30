#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
        int arr[]={1,2,3,4,5,6,7,8,9};
        int t=sizeof(arr)/sizeof(int);
        
        for(int i=0;i<t/2;i++)
        {
            swap(arr[i],arr[t-i-1]);
        }
        
        for (int i = 0; i < t; i++)
        {
                cout<<arr[i] <<"  ";
        }
        
        return 0;
}
