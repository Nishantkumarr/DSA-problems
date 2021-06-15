#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int n,k,x,i;
        cin>>n>>k>>x;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        i=0;
        while(i<n){
            if(arr[i]==x){
                cout<<"Found @ "<<i<<endl;
                break;
            }else{
                i=i+max(1,i+(abs(x-arr[i])/k));
            }
        }

        return 0;
    }
