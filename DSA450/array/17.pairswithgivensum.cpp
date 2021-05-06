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
        int size,temp,sum,count=0;
        unordered_map<int,int> s;
        int *arr= new int [size];
        cin>>size;
        cin>>sum;
        getarray(arr,size);
        for(int i=0;i<size;i++){
            s[arr[i]]++;
        }
        for(int i=0;i<size;i++){
            temp=sum-arr[i];
            if(s.find(temp)!=s.end()){
                count+=s[temp];
            }
            if(sum-arr[i]==arr[i]){
                count--;
            }
        }
        cout<<"The no of pairs with sum  "<<sum<< " is = "<<count/2;
        return 0;
    }
