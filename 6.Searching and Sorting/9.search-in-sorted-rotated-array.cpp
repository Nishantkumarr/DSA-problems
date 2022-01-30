#include<bits/stdc++.h> 
using namespace std;

int binary_searchh(int s,int e, int key,int arr[]){   

    
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            s=mid+1;
        }
        else {
            e=mid-1;
            
        }
    }

    return -1;
}


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int arr[]={ 4,5,6,7,0,1,2};
        int key=3;
        int arr_size=sizeof(arr)/sizeof(arr[0]);

        //step-1 find the min element 
        //as the array just before the min element and just after the min element is sorted
        // we get two arrays 0-midele-1 and minele-end;
        int index=min_element(arr,arr+arr_size) - &arr[0];

        int lindex=binary_searchh(0,index-1,key,arr);
        int rindex=binary_searchh(index,arr_size,key,arr);
        if((rindex==-1)&&(lindex==-1)){
            cout<<"not found";
        }
        else if((rindex>0)&&(lindex==-1)){
            cout<<"found at "<<rindex<<endl;
        }else if((rindex<0)&&(lindex>0)){
            cout<<"found at "<<lindex<<endl;
        }
        else{
            cout<<"found it at "<<rindex <<" and "<<lindex<<endl;
        }
        return 0;
    }
