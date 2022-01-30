#include<bits/stdc++.h> 
using namespace std;

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
            int n,k;
            cin>>n>>k;
            vector<int> price;
            int val;
            for(int i=0;i<n;i++){
                cin>>val;
                price.push_back(val);
            }

            sort(price.begin(),price.end() ,greater<int>());
            int chefsum=0,chefsum2=0;
            for( int i=0;i<2*k-1;i=i+2){
                
                chefsum+=price[i];
                chefsum2+=price[i+1];
            }
            chefsum2+=price[2*k];
            cout<<max(chefsum,chefsum2)<<endl;
        }
	return 0;
}
