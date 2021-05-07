// It's a lockdown. You’re bored in your house and are playing golf in the hallway.

// The hallway has N+2 tiles numbered from 0 to N+1 from left to right. There is a hole on tile number x. You hit the ball standing on tile 0. When you hit the ball, it bounces at lengths of k, i.e. the tiles covered by it are 0,k,2k,…, and so on until the ball passes tile N+1.

// If the ball doesn't enter the hole in the first trial, you try again but this time standing on the tile N+1. When you hit the ball, it bounces at lengths of k, i.e. the tiles covered by it are (N+1),(N+1−k),(N+1−2k),…, and so on until the ball passes tile 0.

// Find if the ball will enter the hole, either in its forward journey or backward journey.

// Note: The input and output of this problem are large, so prefer using fast input/output methods.

// Constraints
// 1≤T≤105
// 1≤x,k≤N≤109

// Sample Input
// 3
// 5 4 2
// 5 3 2
// 5 5 2
// Sample Output
// YES
// NO
// NO


#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int t ;
        cin>>t;
        while(t--){
            int n,k,x,flag=0;
            cin>>n>>k>>x;
            if((x%k==0)||((n+1-x)%k==0)){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        return 0;
    }
