#include<bits/stdc++.h> 
using namespace std;

//Binary Exponentiation
//https://cp-algorithms.com/algebra/binary-exp.html
// made a custom implementation of pow function 

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)         //b is odd;
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main() {
    // your code goes here
    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int t;
        int MOD=1000000007;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            long long count=binpow(2,n-1,MOD);
            cout<<count<<endl;
        }
    return 0;
}
