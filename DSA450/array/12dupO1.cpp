#include<bits/stdc++.h> 
using namespace std;

void getarray( int *arr,int size){
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
}
void putarray( int *arr,int size){
    for (int i=0;i<size;i++){
        cout<<arr[i];
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
        int size1;
        int *arr=new int[size1];
        cin>>size1;
        cout<<size1;
        getarray(arr,size1);
        for(int i=0;i<size1;i++){
            arr[arr[i]%size1]+=size1;
        }
        cout<<"The duplicate elements are "<<endl;
        putarray(arr,size1);
        for(int j=0;j<size1;j++){
            if((arr[j]/size1)>1){
                cout<<arr[j]<<endl;;
            }
        }
        return 0;
    }
