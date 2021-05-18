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
        cout<<"Row Wave Print"<<endl;
        for(int i = 0; i<n;i++){
            if(i%2==0){
                for(int j = 0; j <m;j++){
                    cout<<arr[i][j] <<" ";
                }
            }else{
                for(int j=m-1;j>=0;j--){
                    cout<<arr[i][j]<<" ";
                }
            }
        } 
        
        
        cout<<endl<<"Column Wave Print"<<endl;
        for(int i = 0; i<m;i++){
            if(i%2==0){
                for(int j = 0; j <n;j++){
                    cout<<arr[j][i] <<" ";
                }
            }else{
                for(int j=n-1;j>=0;j--){
                    cout<<arr[j][i]<<" ";
                }
            }
        }
        return 0;
    }
