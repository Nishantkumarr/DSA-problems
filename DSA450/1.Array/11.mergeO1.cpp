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


void merge01(int*arr1,int *arr2,int size1,int size2){
    
    for( int j=0;j<size2;j++)
    {
        for(int i=0; i<size1;i++)
            {
                if (arr1[i]>arr2[j])
                    {
                        swap(arr1[i],arr2[j]);
                        sort(arr2,arr2+size2);
                    }
                
            }
    }
    cout<<"From the merge O1 space function one :"<<endl;
    putarray(arr1,size1);
    putarray(arr2,size2);
}



// learn the gap algorithm 
// void gap(int*arr1,int *arr2,int size1,int size2){

//     float gap;
//     if((size1+size2)%2==0)
//         {
//             gap=(size1+size2)/2;
//         }
//     else
//         {
//             gap=(size1+size2)/2.0;
//             gap=ceil(gap);
//         }
//     int j, i=0;
//     cout<<gap;
//     while(i+gap<size1+size2){
//         if(gap>size1){
//             j=gap-size1;
//         }else {
//             j=gap;
//         }

//         cout<<i<<j<<endl;
//         j++;
//         i++;

//     }
// }


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int size1,size2;
        int *arr1=new int [size1];
        int *arr2=new int [size2];
        cin>>size1>>size2;
        getarray(arr1,size1);
        getarray(arr2,size2);
        merge01(arr1,arr2,size1,size2);
        // gap(arr1,arr2,size1,size2);
        return 0;
    }
