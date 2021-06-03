#include<bits/stdc++.h> 
using namespace std;



//find the largest substring with equal number of 1s and 0s








int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        string s;
        getline(cin,s);

        int len=0 , maxlen=0 ,sum=0;
        unordered_map<int,int> map;
        map[0]=-1;
        
        for(int i=0;i<s.length();i++){
            
            if(s[i]=='0'){sum=sum-1;}
            else if(s[i]=='1'){sum+=1;}

            if(map.find(sum)!=map.end()){
                len=i-map[sum];
                maxlen=maxlen>len?maxlen:len;
            }else{
                map[sum]=i;
            }
        }
        
        cout<<endl<<"Max len"<<maxlen;
        return 0;
    }
