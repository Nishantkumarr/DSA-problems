#include<bits/stdc++.h> 
using namespace std;


int gcd(int x, int y){
    if(y==0){
        return x;
    } else{
        return gcd(y,x%y);
    }
}
int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int t;
        cin>>t;
        map<pair<int,int>,int> gcdval;
        while(t--){
            int k,value1,value2,sum=0,val;
            cin>>k;
            for( int i=1;i<2*k+1;i++){
                value1=k+i*i;
                value2=k+((i+1)*(i+1));
                auto res = gcdval.find(make_pair(value1,value2));
               if(res!=gcdval.end()){
                    val=res->second;
                }else{
                    val=gcd(value1,value2);
                    gcdval.insert(make_pair(make_pair(value1,value2),val));
                }
                sum+=val;
            }
            cout<<sum<<endl;
            
        }
        return 0;
    }
