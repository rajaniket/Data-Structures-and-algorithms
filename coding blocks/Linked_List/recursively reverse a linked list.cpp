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

void print(node *head){
  while(head!=NULL){
    cout<<head->data<<"-->";
    head=head->next;
    }
    cout<<endl;
}

node* take_input(){
node* head=NULL;
int d;
cin>>d;
while(d!=-1){
insert_At_Head(head,d);  // Insert_At_Head function argument is of pass by reference so head will update every time when a node is add.
cin>>d;
}
return head;  // finally returning address of 1st node (head) to head present in the int main()
}

ostream& operator<<(ostream &x,node *head){
print(head);
return x;
}
istream& operator>>(istream &x,node *&head){
head=take_input();
return x;
}

// method-1

//node* reverse_list(node *current,node *previous=NULL){
//  if(current==NULL){
//    return previous;
//  }
//  else{
//    node *next_node=current->next;
//    current->next=previous;
//    reverse_list(next_node,current);
//  }
//}

// method-2 

//node* reverse_recursively(node *head){
//if(head->next==NULL or head==NULL){
//    return head;
//}
//node *new_head=reverse_recursively(head->next);
//node* temp=new_head;
//while(temp->next!=NULL){
//    temp=temp->next;
//}
//head->next=NULL;
//temp->next=head;
//return new_head;
//}

// method-3

node* reverse_recursively(node *head){
if(head->next==NULL or head==NULL){
    return head;
}
node *shead=reverse_recursively(head->next);
node* temp=head->next;
head->next=NULL;
temp->next=head;
return shead;
}

int main(){
node *head1;
cin>>head1;
cout<<head1;
node *head=reverse_recursively(head1);
cout<<"reverse: "<<head<<endl;
}





