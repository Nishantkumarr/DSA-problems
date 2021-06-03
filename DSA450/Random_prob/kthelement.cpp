#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >>t;

    while (t--)
    {
        int n ,k;
        cin>>n>>k;
        int *Array=new int(n);
        for(int i=0;i<n;i++)
        {
            cin>>Array[i];
        }

        sort(Array,Array+n);
        cout<<"kth element is "<<Array[k-1]<<endl;
    }    
    return 0;
    }
