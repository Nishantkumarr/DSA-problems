#include<bits/stdc++.h> 
using namespace std;


stack<int> insertatbottom(stack<int>&stk,int val){
    
    if(stk.empty()){
        stk.push(val);
        return stk;
    }

    int x=stk.top();
    stk.pop();
    insertatbottom(stk,val);
    stk.push(x);
    return stk;    
}

stack<int> reverseit(stack<int>&stk){
    if(stk.empty()){
        return stk;
    }
    int x=stk.top();
    stk.pop();
    reverseit(stk);
    insertatbottom(stk,x);
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
        int n,a,val;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            stk.push(a);
        }

        // cout<<"After deleting the middle of the stack we get the new stack as follows  \n";
        reverseit(stk);

        while(!stk.empty()){
            cout<<stk.top()<<"  ";
            stk.pop();
        }

        return 0;
    }
