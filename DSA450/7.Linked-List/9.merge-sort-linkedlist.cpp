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
    while((cin>>d)&&(d!=-1)){
        
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




node *mergesort(node*a,node*b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    
    node *c=NULL;
    if (a->data >= b->data)
    {
        c = a;
        c->next = mergesort(a->next, b);
    }
    else
    {
        c = b;
        c->next = mergesort(a, b->next);
    }
    return c;
    
}

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif

        node*a=NULL;
        node*b=NULL;
        node*d=NULL;
        cin>>a>>b;
        cout<<a;
        cout<<" \n B  ;- ";
        cout<<b;
        d=mergesort(a,b);
        cout<<"After the sorting the c is  :- "<<endl;
        cout<<d;
        return 0;
    }
