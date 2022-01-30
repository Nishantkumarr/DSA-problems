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




bool detectcycle(node *head){
    node *slow=head;
    node *fast=head;

    while((fast!=NULL)&&(fast->next!=NULL)){
        fast=fast->next->next;
        slow=slow->next;

        if(fast==slow){ 
            return true;
        }
    }

    return false;
}


node* firstnodeLoop(node*head){


    node *slow=head;
    node *fast=head;
    bool flag=0;
    while((fast!=NULL)&&(fast->next!=NULL)){
        fast=fast->next->next;
        slow=slow->next;

        if(fast==slow){ 
           flag=1;
           break;
        }
    }

    if(flag==1){ 
        slow=head;

        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
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

        node*head=NULL;
        cin>>head;
        cout<<" Linked List  \n";
        cout<<head;

        if (detectcycle(head)){
            cout<<" \n Loop Detected ";
        }else{
            cout<<" \n Not Detected ";
        }

        node*ans=firstnodeLoop(head);

        cout<<"DaTA of repeated node : - "<<ans->data;



        return 0;
    }
