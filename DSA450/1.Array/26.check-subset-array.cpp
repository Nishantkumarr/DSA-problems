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
        int size1, size2,flag=0;
        cin>>size1>>size2;
        int *arr1=new int [size1];
        int *arr2=new int [size2];
        unordered_set<int> ans;
        getarray(arr1,size1);
        getarray(arr2,size2);
        for( int i=0;i<size1;i++){
            ans.insert(arr1[i]);
        }
        for( int i=0;i<size2;i++){
            if(ans.find(arr2[i])!=ans.end()){
                flag=1;
            }else {
                flag=0;
                break;
            }
        }
        if(flag==1){ cout<<"Yes";}else{
                cout<<"No";
        }
        return 0;
    }
