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
        int count0 =0,count1=0,count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                count0++;
            }else{
                count1++;
            }

            if(count0==count1){ count++;}
        }

        cout<<"No of substrings with equal number of 0s and 1s = "<<count<<endl;

        return 0;
    }
