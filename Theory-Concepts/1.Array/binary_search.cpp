#include<iostream>
using namespace std;

int binary(int a[],int n,int srchx){   

    int s,e;
    s=0;
    e=n-1;
    
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==srchx){
            return mid;
        }
        else if (a[mid]<srchx){
            s=mid+1;
        }
        else {
            e=mid-1;
            
        }
    }

    return -1;
}


int main(){
    int size,srch,posi;
    cout<<"Enter the size of arr"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements (sorted order )"<<endl;
    for (int i =0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to be searched"<<endl;
    cin>>srch;

    posi=binary(arr,size,srch);
    if(posi>=0)
        {
            cout<<"Position of element to be searched :- "<<posi<<endl;
        }
    else{
        cout<<"not found"<<endl;
    }
    return 0;

}