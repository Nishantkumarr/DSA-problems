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

// to calculate the length of linkedlist 
int lengll(node*head){
    int count=0;
    while(head!=NULL){
        head=head->next;
        count++;
    }

    return count;
}

//insert into linkedlist at head
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


//insert at Tail of linkedlist
void insertTail(node*&head, int d){
    if(head==NULL){
        head=new node(d);
    }

    node*temp=head;
    int jump=1;
    int steps=lengll(head);
    while(jump<steps){
        temp=temp->next;
        jump++;
    }

    node *n=new node(d);
    temp->next=n;

}








//insert at middle at a given position p
void insertMiddle(node*&head, int d, int p){
    if((head==NULL)||(p==0)){
        insertHead(head,d);
    }

    // if(p>lengll(head)){
    //     insertTail(head,d);
    // }

    else {
        int jump=1;
        node *temp=head;

        while(jump<p-1){
            temp=temp->next;
            jump++;
        }

        node *n=new node(d);
        n->next=temp->next;
        temp->next=n;
    }
}





//print the linkedList
void printll(node*head){
    while(head != NULL){
        cout<<head->data << "-> ";
        head=head->next;
    }
}



//delete the linkedList

void deleteHead(node*&head){
    if(head==NULL){
        return;
    }
    node *temp=head->next;
    delete head;
    head=temp;
}

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif

        node*head=NULL;
        int d;
        while(cin>>d){
            insertHead(head,d);
        }

        cout<<"\n At head      ";

        //print Linked-List
        printll(head);

        //insert at middle
        insertMiddle(head,10,3);
        cout<<"\n At middle      ";

        //print again
        printll(head);

       //insert at Tail
        insertTail(head,123);
        cout<<"\n At Top        ";

        //print again
        printll(head);

        deleteHead(head);
        //after deleting 
        cout<<"\n After Deleting       ";
        printll(head);

        return 0;
    }
