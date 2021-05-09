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
        int *arr = new int[size];
        int ini=0,iniF,final=0;
        for(int i=0;i<size;i++){
            cin>>arr[i];
            if((i>0)&&(arr[i]==arr[i-1]+1)){
                final=i;
            }else{
                ini=i;
            }
            cout<<"Arr "<<arr[i]<<"  initial "<<ini<<" final "<<final<<endl;
        }

        return 0;
    }
