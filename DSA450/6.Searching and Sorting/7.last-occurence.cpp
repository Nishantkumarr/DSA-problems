#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        vector<int> arr={ 0, 4 ,5 ,20,40,40,40,50,70,100};
        int key=40;
        int end=arr.size()-1;
        int index=0;
        int start=0;
        while(start<=end){
            cout<<start<<end<<endl;
            int mid=(end+start)/2;         //dont be this fucking stupid lest you will fail the interview every single time you dumb fuck 
            if(arr[mid]==key){
                if(mid>index){
                    index=mid;
                }
                start=mid+1;
            }else if(arr[mid]<key){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }

        // //display the least index;
        cout<<"Last index of occurence  = "<<index<<endl;

        return 0;
    }
