#include<bits/stdc++.h> 
using namespace std;



void getarray( int *arr,int size){
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
}

int long_Subseq_brue(int*arr,int size){
    int maxcount=0;
     unordered_set<int> ans;

        for(int i=0;i<size;i++){
            ans.insert(arr[i]);
        }
        for(int i=0;i<size;i++){
            if(((ans.find(arr[i]-1))==ans.end())){
                int p=0,count=0;
                while(ans.find(arr[i]+p)!=ans.end()){
                    count++;
                    p++;
                }
                if(count>maxcount){
                    maxcount=count;
                }
            }
        }
        return maxcount;
}


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int size,maxcount=0;
        cin>>size;
        int *arr=new int[size];
        getarray(arr,size);
        maxcount=long_Subseq_brue(arr,size);
        cout<<"max "<<maxcount;
        return 0;
    }
