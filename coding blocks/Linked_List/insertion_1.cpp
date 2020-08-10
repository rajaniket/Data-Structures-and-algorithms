#include<iostream>
#include<algorithm>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int d){
    data=d;
    next=NULL;
    }
};
int length(node *head){
    int len=0;
    while(head!=NULL)
    {
        len++;
        head=head->next;
    }
    return len;
}


void insert_At_Head(node *&head,int d){

   if(head==NULL){
    head=new node(d);
    return;
   }

   node *n=new node(d);
   n->next=head;
   head=n;
}

void insert_At_tail(node *&head,int d){
    if(head==NULL){
       head=new node(d);
        return;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new node(d);
}

void insert_At_middle(node *&head,int d,int p){
    if(head==NULL || p==0){
        insert_At_Head(head,d);
    }
    else if(p>=length(head))
        insert_At_tail(head,d);
    else{
        int jump=1;
        node *temp=head;
        while(jump<p){
            temp=temp->next;
            jump++;
        }
        node *n=new node(d);
        n->next=temp->next;
        temp->next=n;
    }
}


void print(node *head){
  while(head!=NULL){
    cout<<head->data<<"-->";
    head=head->next;
    }
    cout<<endl;
}


int main(){
node *head=NULL;
insert_At_Head(head,3);
insert_At_Head(head,2);
insert_At_Head(head,1);
insert_At_Head(head,0);
cout<<"Before"<<endl;
print(head);
cout<<"Length: "<<length(head)<<endl;
insert_At_tail(head,5);
insert_At_middle(head,4,4);
cout<<"\n\nAfter Addition of nodes\n"<<endl;
print(head);
cout<<"Length: "<<length(head)<<endl;
}

