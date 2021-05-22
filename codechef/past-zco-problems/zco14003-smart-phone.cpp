#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int n;
        cin>>n;
        int *arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll maxsum=0,csum=0;
        for(int i=0;i<n;i++){
            csum=arr[i]*(n-i);
            maxsum=maxsum>csum?maxsum:csum;;
        }
        cout<<maxsum;
        return 0;
    }
