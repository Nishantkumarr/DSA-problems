#include<bits/stdc++.h> 
using namespace std;


//implementation of stack using vectors;

class Stack{
    private:
        vector<int> s;
    public:
        void push(int data){
            s.push_back(data);
        }

        int top(){
            return s[s.size()-1];
        }

        bool empty(){
            return s.size() == 0;
        }

        void pop(){
            if(!s.empty()){
                s.pop_back();
            }
        }
};




int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        Stack s;
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);

        cout<<s.top()<< " top most element ";


        cout<<"\n  The stack :- ";
        while(!s.empty()){
            cout<<s.top()<<" \n";
            s.pop();
        }

        return 0;
    }
