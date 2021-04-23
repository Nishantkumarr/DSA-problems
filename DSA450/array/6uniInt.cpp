#include<bits/stdc++.h> 
using namespace std;

// void print(){
//     for(auto i:arr){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

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


void calUnion(int *arr1,int *arr2,int size1, int size2){
    set<int> hs;
    for (int i=0;i<size1;i++){
        hs.insert(arr1[i]);
    }
    for(int i=0;i<size2;i++){
        hs.insert(arr2[i]);
    }
    cout<<"The Union is  :- ";
    for(auto i=hs.begin();i!=hs.end();i++){
        cout<<*i <<" ";
    }
    cout<<endl;

}

void calinters(int *arr1,int*arr2,int size1, int size2){
    set<int> hs;
    
    for (int i=0;i<size1;i++){
        hs.insert(arr1[i]);
    }
    cout<<"The intersection of the arrays given = ";
    for (int i=0;i<size2;i++){
        if (hs.find(arr2[i])!=hs.end()){
            cout<<arr2[i]<<" ";
        }
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
        int size1,size2;
        int *arr1=new int [size1];
        int *arr2=new int [size2];
        cin>>size1>>size2;
        getarray(arr1,size1);
        getarray(arr2,size2);
        calUnion(arr1,arr2,size1,size2);
        calinters(arr1,arr2,size1,size2);
        return 0;
    }
