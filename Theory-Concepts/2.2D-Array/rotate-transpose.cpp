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
		int arr[n][m],ans[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}
        int endt=m-1;
        int pend=m-1;
        while(endt>=0){
            for(int i=0;i<n;i++){
                 ans[pend-endt][i]=arr[i][endt];

            }
            endt--;
        }
        for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<ans[i][j]<<" ";
			}
            cout<<endl;
		}

        return 0;
    }
