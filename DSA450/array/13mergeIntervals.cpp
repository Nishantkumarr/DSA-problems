#include<bits/stdc++.h> 
using namespace std;


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int size;
        cin>>size;
        int arr[size][2];
        for (int i=0;i<size;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>arr[i][j];
            }
        }
        
        for(int i=0;i<size-1;i++){
            if((arr[i][1]==arr[i+1][0]) ||
            ((arr[i][1]>arr[i+1][0])&&(arr[i][1]<arr[i+1][1]))){
                arr[i][1]=arr[i+1][1];
            }
        }

        for(int i=0;i<size;i++){cout<<arr[i][0]<<" "<<arr[i][1]<<endl;}
        return 0;
    }
