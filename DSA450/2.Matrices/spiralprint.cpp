#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../input.txt", "r", stdin); 
    freopen("../output.txt", "w", stdout);
    #endif
        int arr[10][10];
        int n,m;
        cin>>n>>m;
        for (int i = 0; i <n;i++){
            for (int j = 0; j <m;j++){
                cin>>arr[i][j];
            }
        }
        int srow=0;
        int scol=0;
        int endcol=m-1;
        int endrow=n-1;
        while((srow<=endrow)&&(endcol>=scol)){
            // cout<<endl<<"first"<<srow<<scol<<endcol<<endrow<<endl;
            for(int i=scol;i<=endcol;i++){
                cout<<arr[srow][i]<<endl;
            }
            srow++;
            // cout<<endl<<"second"<<srow<<scol<<endcol<<endrow<<endl;
            for(int i=srow;i<=endrow;i++){
                cout<<arr[i][endcol]<<endl;
            }
            endcol--;
            // cout<<endl<<"third"<<srow<<scol<<endcol<<endrow<<endl;
            for(int i=endcol;i>=scol;i--){
                cout<<arr[endrow][i]<<endl;
            }
            endrow--;
            // cout<<endl<<"fourth"<<srow<<scol<<endcol<<endrow<<endl;
            for(int i=endrow;i>=srow;i--){
                cout<<arr[i][scol]<<endl;
            }
            scol++;
        }
        return 0;
    }
