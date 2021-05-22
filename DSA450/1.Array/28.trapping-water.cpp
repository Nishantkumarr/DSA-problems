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



//O(N^2) time complexity
int trappingwater(int*arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){

            //count the biggest to left of "i" th element
            int left=arr[i];
            for(int j=0;j<i;j++){
                left=max(left,arr[j]);
            }

            //count the niggest to right of "i" th element
            int right =arr[i];
            for(int j=i+1;j<size;j++){
                right=max(right,arr[j]);
            }

            sum+=(min(left,right)-arr[i]);
    }
    return sum;
}


//time complexity : o(N)
int trappingwater2(int*arr,int size){
    int sum=0;
    int *left=new int[size];
    int *right=new int[size];
    int lf=arr[0];
    int rg=arr[size-1];

    for(int j=0;j<size;j++){
        lf=max(lf,arr[j]);
        left[j]=lf;
    }
    
    left[size-1]=arr[size-1];
    cout<<"arr1    ";
    putarray(left,size);
    for(int j=size-1;j>0;j--){
        rg=max(rg,arr[j]);
        right[j]=rg;
    }
    right[size-1]=arr[size-1];



    for( int i=1;i<size;i++){
        sum+=(min(left[i],right[i])-arr[i]);
    }
    
    return sum;

}

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int size,sum,sum2;
        cin>>size;
        int *arr=new int[size];
        getarray(arr,size);
        sum=trappingwater(arr,size);
        sum2=trappingwater2(arr,size);
        cout<<"Sum :- "<<sum<<endl;
        cout<<"Sum  :- "<<sum2;
        return 0;
    }
