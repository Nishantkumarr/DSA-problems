#include<bits/stdc++.h> 
using namespace std;




// void getarray( int *arr,int size){
//     for (int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     cout<<endl;
// }




int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int size,cs=0,flag=0;
        cin>>size;
        int *arr=new int[size];
        unordered_set<int> csum;
        for(int i=0;i<size;i++){
            cin>>arr[i];
            cs+=arr[i];
            if((csum.find(cs)!=csum.end())||(cs==0){
                flag=1;
            }else{
            csum.insert(cs);
            }
        }
        if (flag==1){ cout<<"yes";}
        else { cout<<"no";}        
        return 0;
    }
