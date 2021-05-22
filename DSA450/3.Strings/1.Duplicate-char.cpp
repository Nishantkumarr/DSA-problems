#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int n;
        cin>>n;
        char s[n];
        map<char,int> map;
        for(int i=0;i<n;i++){
            cin>>s[i];
            map[s[i]]++; 
        }
        for(auto it:map){
            if(it.second>1){cout<<it.first<<" -> "<<it.second<<endl;}
        }
        return 0;
    }
