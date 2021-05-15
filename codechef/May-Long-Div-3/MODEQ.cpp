#include<bits/stdc++.h> 
using namespace std;

// int main() {
//     // your code goes here
//     ios_base::sync_with_stdio(false);cin.tie(NULL); 

//     #ifndef ONLINE_JUDGE 
//     freopen("../../input.txt", "r", stdin); 
//     freopen("../../output.txt", "w", stdout);
//     #endif
//         int t;
//         cin>>t;
//         while(t--){
//             int val1, val2,n,m,count=0;
//             cin>>n>>m;
//             for( int i=1;i<=n;i++){
//                 for(int j=i+1;j<=n;j++){
//                     val1=(m%i)%j;
//                     val2=(m%j)%i;
//                     if(val1==val2){
//                         count++;
//                     }
//                 }
//             }
//             cout<<count<<endl;
//         }
//         return 0;
//     }

#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while(t--){
        long long n , m;
        cin>>n>>m;
        long long count=0;
        vector<long long>mod (n+1,1);
        for(long long a=2;a<=n;a++){
            long long x=m%a;
            count+=mod[x];
            for(long long b=x;b<=n;b=b+a){
                mod[b]++;
            }
        }
        cout<<count<<endl;
    }
        return 0;
    }
