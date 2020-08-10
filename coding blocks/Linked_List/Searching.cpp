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

void delete_At_head(node *&head){
    if(head==NULL){
        return;
    }
    node *temp=head->next;
    delete head;
    head=temp;
}

void delete_At_tail(node *&head){
    if(head==NULL){
    return;
   }
   node *temp=head;
   node *previous_node;
   while(temp->next!=NULL){
    previous_node=temp;
    temp=temp->next;
   }
   delete temp;
   previous_node->next=NULL;
}

void delete_At_middle(node *&head,int p){
if(head==NULL or p==0)
    return;
else if(p>length(head))
    return;
else if(p==1){
    delete_At_head(head);
    return;
    }
else if(p==length(head)){
    delete_At_tail(head);
    return;
}
else
{
    node *temp=head;
    node *previous_node;
    int jump=1;
    while(jump<p){
        previous_node=temp;
        temp=temp->next;
        jump++;
    }
    previous_node->next=temp->next;
    delete temp;
}

}

bool Search(node *head,int key){
    //node *temp=head;
    while(head!=NULL){
        if(head->data==key)
        return true;
        head=head->next;
    }
    return false;
}

int main(){
node *head=NULL;
insert_At_Head(head,5);
insert_At_Head(head,3);
insert_At_Head(head,2);
insert_At_Head(head,1);
insert_At_Head(head,0);
print(head);
if(Search(head,4))
    cout<<"Found"<<endl;
else cout<<"Not Found"<<endl;
}



