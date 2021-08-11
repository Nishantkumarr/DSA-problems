#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        //using the inbuilt stack
        stack<int> s;
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);
        s.push(6);
        s.push(7);
        s.push(8);
        cout<<"size of the stack" <<s.size()<<endl;

        cout<<"the Stack \n";
        while(!s.empty()){
        cout<< s.top()<<" \n ";
        s.pop();
        }

        cout<<"size of the stack" <<s.size()<<endl;


        return 0;
    }
