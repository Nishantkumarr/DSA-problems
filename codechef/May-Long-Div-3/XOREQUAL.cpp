#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int t;
        int m=pow(10,9)+7;
        cin>>t;
        while(t--){
            int n;
            long long num,count=0;
            cin>>n;
            num=pow(2,n)-1;
            for(int i=0;i<=num;i++){
                if((i^i+1)==((i+2)^(i+3))){
                    count=count+1;
                    count=count%m;
                }
            }
            cout<<count<<endl;
        }
        return 0;
    }
