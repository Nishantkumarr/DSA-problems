#include<bits/stdc++.h> 
using namespace std;



 

bool isprime(int n){
    for (int i = 2; i < n/2; i++)
        if (n % i == 0)
            return false;
 
    return true;
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
	while(t--){
	    int n;
	    cin>>n;
	    bool prime[n + 1];
        memset(prime, true, sizeof(prime));
     
        for (int p = 2; p * p <= n; p++)
        { if (prime[p] == true)
            {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        int group=1;
        if(n==2){ 
            cout<<group<<endl;
        }else{
            for(int i=n/2;i<n;i++){
                if(prime[(i)+1]){
                    group++;
                }
            }
            cout<<group<<endl;

        }
	}
	return 0;
}
