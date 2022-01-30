#include<bits/stdc++.h> 
using namespace std;


//defining the strucutre of node and also defining a constructor that takes int parameter 
//to initialize a node

class node {
public:
    int data;
    node* next;
    node * prev;

    node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};


void insertHead(node*&head, int d){
    node *temp=new node(d);
    temp->next=head;
    if(head!=NULL){
        head->prev=temp;
    }
    head=temp;
}




void insertTail(node*tail,int d){
    if(tail==NULL){
        cout<<"null";
        insertHead(tail,d);
        return;
    }

    else{
        cout<<"we herer";
        node *temp=new node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}


void insertmid(node*mid,int d){
    if(mid==NULL){ 
        insertHead(mid,d);
        return;
    }
    if(mid->next==NULL){
        insertTail(mid,d);
        return;
    }

    node*temp=new node(d);
    temp->next=mid->next;       
    mid->next=temp;             
    temp->prev=mid;
    mid->next->prev=temp;
    
}


//print the linkedList
void printll(node*head){
    node*temp=head;
    while(temp != NULL){
        cout<<temp->data << "-> ";
        temp=temp->next;
    }
}

void deleteithead(node*&head){
        head->next->prev=NULL;
        node*temp=head->next;
        free(head);
        head=temp;
}

void deleteitmid(node*mid){
    mid->next->prev=mid->prev;
    mid->prev->next=mid->next;
    free(mid);
}


//we return cout which is an object of ostream
//operator << to overload the exixting operator
ostream& operator <<( ostream&os,node*head){
    printll(head);
    return os;
}


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif

        node*head=NULL;
        insertHead(head,40);
        cout<<head<<endl;
        insertHead(head,220);
        cout<<head<<endl;
        insertHead(head,50);
        node* mid=head;
        
        insertHead(head,20);
        
        insertHead(head,45);
        
        insertHead(head,30);
        

        node *temp=head;
        //getting the last node to pass it on to the insert at Tail function
        while(temp->next!= NULL){
            temp=temp->next;
        }

        cout<<"\n Insert at tail"<<endl;
        insertTail(temp,345);
        cout<<head<<endl;

        cout<<"insert at mid"<<endl;
        insertmid(mid,4500);
        cout<<head<<endl;


        cout<<"\n Delete at head"<<endl;
        deleteithead(head);
        cout<<endl<<head<<endl;

        cout<<"\n Delete at mid"<<endl;
        deleteitmid(mid);
        cout<<endl<<head<<endl;

        
        
        return 0;
    }
