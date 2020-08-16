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

void insert_At_Head(node *&head,int d){

   if(head==NULL){
    head=new node(d);
    return;
   }

   node *n=new node(d);
   n->next=head;
   head=n;
}

void print(node *head){
  while(head!=NULL){
    cout<<head->data<<"-->";
    head=head->next;
    }
    cout<<endl;
}
void circular_through_tail(node *head,int d,int p){ // add a tail data and link its next to node at location p
    node *temp=head;
    node *tail;
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=new node(d);
    tail=head->next;
    for(int i=0;i<p-1;i++){
        temp=temp->next;
    }
    tail->next=temp;
}

bool cycle_detection(node *head){
node *slow=head;
node *fast=head;
while(fast!=NULL && fast->next!=NULL)
{
    slow=slow->next;
    fast=fast->next->next;
    if(fast==slow){
        return true;
    }
}
return false;
}
void remove_cycle(node *head){
node *slow=head;
node *fast=head;
while(fast!=NULL && fast->next!=NULL)
{
    slow=slow->next;
    fast=fast->next->next;
    if(fast==slow){
        break;
    }
}
fast=head;
while(fast->next!=slow->next)
{
    fast=fast->next;
    slow=slow->next;
}
slow->next=NULL;
}

int main(){
node *head=NULL;
insert_At_Head(head,1);
insert_At_Head(head,2);
insert_At_Head(head,3);
insert_At_Head(head,4);
insert_At_Head(head,5);
insert_At_Head(head,6);
print(head);
circular_through_tail(head,7,3);
//print(head); // if circular then 
if(cycle_detection(head)){
    cout<<"Cycle found so removing cycle"<<endl;
    remove_cycle(head);
    print(head);
}
else cout<<"Cycle not found"<<endl;
}





