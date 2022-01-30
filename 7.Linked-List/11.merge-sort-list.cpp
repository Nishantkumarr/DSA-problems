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



//split the given linkedlist into to halves

void splitll(node*head,node**a,node**b){
    node*fast;
    node*slow;

    slow=head;
    fast=slow->next;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
    }
    *a=head;
    *b=slow->next;
    slow->next=NULL;
}


//merge the two linkedlist 

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




//mergesort the linkedlist
void merge(node**headref)   ///getting the pointer that oints to the head such that we update it on the go.
{
    node*head=*headref;
    node*a; //a and b are pointer we provide further in the loop to get the values of 
    node*b;  //the two halves that we are gong to split the linked list into.
    if(head==NULL || head->next==NULL){
        return ;                        //if the current elemet or next is null then break it as it is only one element and cannot be furthur divided;
    }

    splitll(head,&a,&b);

    merge(&a);
    merge(&b);          //we are giving both the halves again into loop of recursion

    //at the last we just join them in one 
    *headref=mergesort(a,b);
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

        cout<<endl<<" After the sorting "<<endl;

        //mergsorting the linkedlist
        merge(&head);
        cout<<head;

        return 0;
    }
