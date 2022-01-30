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
        int size,cs=0,minlen=0,mincs,initial=0,k;
        cin>>size>>k;
        int *arr=new int[size];
        getarray(arr,size);
        unordered_map<int,int> ans;
        for(int i=0;i<size;i++){
                cs+=arr[i];
                if((cs==k)&&(ans.find(cs)==ans.end())){ 
                    ans[cs]=i-initial;
                    initial=i;
                }else if((cs==k)&&(ans.find(cs)==ans.end())){

                    ans[cs]= ans[cs]>i-initial?i-initial:ans[cs];
                }
            }
        for( auto it:ans){
            if(it.second<minlen){
                minlen=it.second;
                mincs=it.first;
            }
        }

        cout<<"minlen"<<mincs<<endl;
            
        return 0;
    }

