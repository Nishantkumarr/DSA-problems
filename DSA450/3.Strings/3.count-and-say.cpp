#include<bits/stdc++.h> 
using namespace std;

string cnt_and_say(int n){
    if(n==1) return "1";
    if(n==2) return "11";
    
    string s="11";
    for(int i=3;i<=n;i++){
        
        int cnt=1;
        
        s=s+'&';
        
        string t="";
        
        for(int j=1;j<s.length();j++){

            if(s[j]!=s[j-1]){

                t+=to_string(cnt);
                t+=s[j-1];
                cnt=1;
            }
            else{
                cnt++;
            }
        }
    s=t;
    }
    return s;
}



int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int n ;
        cin>>n;
        string s;
        s=cnt_and_say(n);
        cout<<"String : - "<<s<<endl;
        return 0;
    }
