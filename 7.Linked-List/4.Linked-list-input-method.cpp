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


//print the linkedList
void printll(node*head){
    while(head != NULL){
        cout<<head->data << "-> ";
        head=head->next;
    }
}


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


//input method 

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


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif

        node*head = takeinput();
        printll(head);
        return 0;
    }
