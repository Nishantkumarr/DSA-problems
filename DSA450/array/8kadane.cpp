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
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
        int size;
        cin>>size;
        int *arr=new int[size];
        int csum=0 , maxsum=0;
        getarray(arr,size);       
        for (int i = 0; i < size; i++)
        {
            /* code */
            csum+=arr[i];
            if(csum<0){
                csum=0;
            }
            maxsum=csum>maxsum?csum:maxsum;
        }
        cout<<" The maximum sum of the subarrays of given array is "<<maxsum<<" ";
        
        return 0;
    }
