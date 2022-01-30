#include<bits/stdc++.h> 
using namespace std;


stack<int> removemiddle(stack<int>&stk,int count){
    
    if(stk.empty()){
        return stk;
    }

    if(stk.size()==count){
        cout<<"Middle element is "<<stk.top()<<endl;
        stk.pop();
        return stk;
    }

    int x=stk.top();
    stk.pop();
    removemiddle(stk,count);
    stk.push(x);
    return stk;
}





int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif

        stack<int> stk;
        int n,a,count;
        cin>>n;
        count=(n/2)+1;
        for(int i=0;i<n;i++){
            cin>>a;
            stk.push(a);
        }

        // cout<<"After deleting the middle of the stack we get the new stack as follows  \n";
        removemiddle(stk,count);

        while(!stk.empty()){
            cout<<stk.top()<<"  ";
            stk.pop();
        }

        return 0;
    }
