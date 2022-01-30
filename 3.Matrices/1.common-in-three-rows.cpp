#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int n,m;
        cin>>n>>m;
		int arr[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}
        unordered_map<int,int> freq;
        for(int j=0;j<m;j++){
                freq[arr[0][j]]=1;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if (freq.find(arr[i][j])!=freq.end()){
                    freq[arr[i][j]]=1+i;
                }
            }
        }

        for(auto it:freq){
            if(it.second>2){
                cout<<it.second;
            }
        }
        
        return 0;
    }
