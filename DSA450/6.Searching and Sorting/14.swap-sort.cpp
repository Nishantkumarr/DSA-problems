#include<bits/stdc++.h> 
using namespace std;
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        //sort the arr
        int *ans=new int[2];
        int missing=0, repeating=0;
    //APPROCH -1 generating errors in corner cases
    //     //sort the array 
    //     sort(arr,arr+n);
    //     //search the repeating
    //     for(int i=0;i<n;i++){
    //         if(arr[i]==arr[i+1]){
    //             repeating=arr[i];
    //             break;
    //         }
    //     }
        
    //     for(int i=0;i<n;i++){
    //         if((arr[i+1]-arr[i])>1){
    //             // if(arr[i]>1)
    //             missing=i+1;
    //             break;
    //         }
    //     }
        
    //     ans[0]=repeating;
    //     ans[1]=missing;
        
    //    return ans;

//according to this approch we first sort the array such that all positions are in order arr[i]->i+1;
//then we traverse through the array and find the first element that is out of order and thats the sollution


    int i=0;
    while(i<n){
        if(arr[i]!=arr[arr[i]-1]){
            swap(arr[i],arr[arr[i]-1]);
        }else{
            i++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            missing=i+1;
            repeating=arr[i];
            break;
        }
    }
    ans[0]=repeating;
    ans[1]=missing;
    return ans;
    }
};

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            Solution obj;
            auto ans=obj.findTwoElement(a,n);
            cout<<ans[0]<<"  "<<ans[1]<<"\n";

        }
        return 0;
    }
