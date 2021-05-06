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
        int size0,size1,size2;
        int *arr0=new int[size0];
        int *arr1=new int[size1];
        int *arr2=new int[size2];

        getarray(arr0,size0);
        getarray(arr1,size1);
        getarray(arr2,size2);
        int i=0,j=0,k=0;
        
        
        return 0;
    }
