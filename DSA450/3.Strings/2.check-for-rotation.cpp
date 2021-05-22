#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int n,flag=0;
        cin>>n;
        char s[n];
        char s2[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        
        for(int i=0;i<n;i++){
            cin>>s2[i];
        }
        
        for( int i=0;i<n;i++){
            if(s[i]!=s2[n-1-i]){
                flag=1;
                cout<<"Not a rotation of S";
                break;
            }
        }
        if(flag==0){ cout<<"they are same ";}
        return 0;
    }
