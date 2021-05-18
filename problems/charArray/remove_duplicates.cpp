#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
        string s="ccoooding";
        int prev=0;
        for(int i=1;i<s.length();i++)
        {
            if (s[prev]!=s[i]){
                prev++;
                s[prev]=s[i];
            }
        }
        s.erase(prev+1);//delte all the rubbish data after the string is altered
        for(int i=0;i<s.length();i++){
            cout<<s[i]<<" ";
        }
        return 0;  
    }
