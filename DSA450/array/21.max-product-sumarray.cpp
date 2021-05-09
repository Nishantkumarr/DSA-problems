#include<bits/stdc++.h> 
using namespace std;


void getarray( int *arr,int size){
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
}




int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int size,value,ini=0,maxini,final;
        cin>>size;
        int *arr=new int[size];
        long long int cp=1,mp=0;
        for(int i=0;i<size;i++){
            cin>>arr[i];
            cp*=arr[i];
            if(cp>mp){
                mp=cp;
                final=i;
                maxini=ini;
            }else if(cp==0){
                cp=1;
                ini=i+1;
            }
        }        
        cout<<"Max product "<<mp<<"\ninitial  "<<maxini<<"\nfinal "<<final+1<<endl;
        cout<<"The sumarray with largest product is "<<endl;
        for( int i=maxini;i<final+1;i++){
            cout<<arr[i]<<endl;
        }
        return 0;
    }
