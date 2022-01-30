#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        string s;
        getline(cin, s);
        for(int i=0;i<s.length();i++){
            for(int len=1;len<=s.length()-i;len++){
                cout<<s.substr(i,len)<<endl;
            }
        }
        return 0;
    }
