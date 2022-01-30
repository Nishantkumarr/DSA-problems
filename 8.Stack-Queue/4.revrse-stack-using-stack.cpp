#include<bits/stdc++.h> 
using namespace std;


//transfer the lements from onr to another stack8
void transfer(stack<int> &s,stack<int> &rev, int num){
    for(int i=0;i<num;i++){
        rev.push(s.top());
        s.pop();
    }
    
    // cout<<"\n  The  reverse stack :- ";
    //     while(!rev.empty()){
    //         cout<<rev.top()<<" ";
    //         rev.pop();
    //     }
    // cout<<endl;

}


//function where we will do the actual reversing of the stack

void reversestack(stack<int> &s ){
    int n=s.size();
    stack<int> rev;

    for(int i=0;i<n;i++){
        int x=s.top();
        s.pop();
        transfer(s,rev,n-i-1);
        s.push(x);
        transfer(rev,s,n-i-1);
    }

}


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        stack<int> s;
        for(int i=1;i<7;i++){
            s.push(i*i);
        }
        
        // while(!s.empty()){
        //     cout<<s.top()<<" \n";
        //     s.pop();
        // }


        reversestack(s);

        cout<<"\n  The stack :- ";
        while(!s.empty()){
            cout<<s.top()<<" \n";
            s.pop();
        }

        return 0;
    }
