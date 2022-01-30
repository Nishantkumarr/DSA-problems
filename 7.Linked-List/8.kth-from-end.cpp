#include<bits/stdc++.h> 
using namespace std;


//defining the strucutre of node and also defining a constructor that takes int parameter 
//to initialize a node

class node {
public:
    int data;
    node* next;

    node(int d){
        data=d;
        next=NULL;
    }
};


void insertHead(node*&head, int d){
    if(head==NULL){ 
        head=new node(d);
    }
    else {
        node*n= new node(d);
        n->next=head;
        head=n;
    }
}


//taking input function
node* takeinput(){
    int d;
    node *head=NULL;
    while(cin>>d){
        
        //there need to have a function call all the things are managed by the insertatHead function 
        //you can write your own custom function with properties of take_input and insertatHead combined.In

        insertHead(head,d);
    }

    return head;    
}


//print the linkedList
void printll(node*head){
    while(head != NULL){
        cout<<head->data << "-> ";
        head=head->next;
    }
}


//we return cout which is an object of ostream
//operator << to overload the exixting operator
ostream& operator <<( ostream&os,node*head){
    printll(head);
    return os;
}


istream& operator >>( istream&in,node*&head){
    
    head=takeinput();
    return in;
}


node* kthFromEnd(node*head,int k){
    node*slow=head;
    node*fast=head;
    int jump=0;

    while(jump<k){
        fast=fast->next;
        jump++;
    }

    // cout<<fast->data<<"idd";

    while(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    return slow;

}


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int k;
        cin>>k;
        node*head=NULL;
        cin>>head;
        cout<<head;

        node *pp=kthFromEnd(head,k);

        cout<<"\n"<<pp->data;
        return 0;
    }
