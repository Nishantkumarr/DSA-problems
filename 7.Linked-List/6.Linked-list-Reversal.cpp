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





void reverse (node*&head){

    node*curr=head;           //setting the current element head
    node*prev=NULL;           //setting prev as null
    node*next1;              //defining the next1 which we will update in the loop

    while(curr!=NULL){          //till we face the NULL as curr
        next1=curr->next;       //we set next1=next current element
        curr->next=prev;           //we set the current element's next pointing to the prev;
        prev=curr;               //now shift it to the next  variable
        curr=next1;              //now shift it to next loop variable
    }

    head=prev;

}

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif

        node*head=NULL;
        cin>>head;
        cout<<head;

        //reversal of linkeddlist
        reverse(head);

        cout<<"\nAfter the reversal \n";
        cout<<head;
        return 0;
    }
