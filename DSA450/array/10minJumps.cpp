#include<bits/stdc++.h> 
using namespace std;

void getarray( int *arr,int size){
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int getminsteps(int*arr,int size){

    int i=0,count=0;
    while(i<=size-1){
        if(arr[i]==0){
            count=-1;
            break;
        }
        else{
            i=i+arr[i];
            count++;
        }
    }
    return count;
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
        int count=getminsteps(arr,size);
        if (count==-1){
            cout<<"Cant be Processed"<<endl;
        }else{
        cout<<"The min no of loops = "<< count <<endl;
        }
        return 0;
    }
