#include<bits/stdc++.h> 
using namespace std;

void putarray( int *arr,int size){
    for (int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
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
        int *arr=new int[size];
        cin>>size;
        getarray(arr,size);
        int temp=arr[size-1];
        putarray(arr,size);
        for(int i=size-1;i>0;i--){
            swap(arr[i],arr[i-1]);
        }
        arr[0]=temp;
        putarray(arr,size);
        return 0;
    }
