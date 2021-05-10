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
        int size,sum,flag=0;
        cin>>size>>sum;
        int *arr=new int [size];
        getarray(arr,size);
        sort(arr,arr+size);
        int i,j,k,p,q,r;
        i=0;
        k=size-1;
        j=(i+k)/2;
        cout<<i<<j<<k<<endl;
        
        while((i<j)&&(j<=k)){ 
            int insum=arr[i]+arr[j]+arr[k];
           if(insum>sum){
               k--;
           }else if(insum==sum){
               cout<<"found it ";
               break;
           }else if ((insum<sum)&&(j==k-1)){
               i++;
               k=size-1;
               j=(i+k)/2;
           }else if((insum<sum)&&(j<k)){
               j++;
           }
        }
    return 0;

}