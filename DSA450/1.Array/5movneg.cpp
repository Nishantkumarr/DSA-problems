#include<bits/stdc++.h> 
using namespace std;


void printvector(vector<int> a){
    for(auto c:a){
        cout<<c<<" ";
    }
}

void rearrange(vector<int> outarr, int size){
    int l=0;
    printvector(outarr);
    cout<<endl;
    for(int i=0;i<size;i++){
        if(outarr[i]<0){
            swap(outarr[i],outarr[l]);
            l++;
        }
        
    }
    printvector(outarr);
}





int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 
    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int size,input;
        vector<int> outarr;
        cin>>size;
        for (int i=0;i<size;i++){
            cin>>input;
            outarr.push_back(input);
        }
        
        rearrange(outarr,size);

        return 0;
}
