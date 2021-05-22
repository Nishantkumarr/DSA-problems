// Rearrange array in alternating positive & negative items with O(1) extra space 


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
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void rearr1(int*arr,int size){
    int l=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            swap(arr[l],arr[i]);
            l++;
        }
    }
    cout<<"1st function"<<endl;
    putarray(arr,size);
    cout<<"low = "<<l<<endl;
    for(int p=1;p<l;p=p+2){                         //i didn't knew we need to do p=p+2 and not just p+2
        cout<<"p = "<<p<<" "<<arr[p] <<" "<<arr[l+p]<<endl;
        swap(arr[p],arr[l+p]);
    }
}

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int size;
        cin>>size;
        int *arr=new int[size];
        getarray(arr,size);
        cout<<"1st main "<<endl;        
        putarray(arr,size);
        rearr1(arr,size);
        cout<<" 2nd main "<<endl;
        putarray(arr,size);
        return 0;
    }

