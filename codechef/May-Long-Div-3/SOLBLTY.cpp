// Suppose for a unit rise in temperature, the solubility of sugar in water increases by Bg/100 mL.

// Chef does an experiment to check how much sugar (in g) he can dissolve given that he initially has 1 
// liter of water at X degrees and the solubility of sugar at this temperature is Ag100 mL. Also, Chef doesn't 
// want to lose any water so he can increase the temperature to at most 100 degrees.

// Assuming no loss of water takes place during the process, find the maximum amount of sugar 
// (in g) can be dissolved in 1 liter of water under the given conditions.

// Sample Input
// 3
// 40 120 1
// 35 120 2
// 40 115 3
// Sample Output
// 1800
// 2500
// 2950
// Explanation
// Test Case 1: Since solubility is increasing with temperature, the maximum solubility will be at 100 degrees 
// which is equal to 120+(100−40)=180g100 mL.

// So for 1 liter of water the value is 180⋅10=1800 g.

// Test Case 2: Since solubility is increasing with temperature, the maximum solubility will be at 100 degrees 
// which is equal to 120+(100−35)⋅2=250g100 mL.

// So for 1 liter of water the value is 250⋅10=2500 g.


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
            int x,a,b,ans;
            cin>>x>>a>>b;
            ans=a+(100-x)*b;
            ans=ans*10;
            cout<<ans<<endl;
        }
        return 0;
    }
