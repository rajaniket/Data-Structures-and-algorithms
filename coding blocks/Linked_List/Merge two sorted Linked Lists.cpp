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

node* merge_list(node *a,node *b){
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    node *c;
    if(a->data<b->data){
        c=a;
        c->next=merge_list(a->next,b);
    }
    else{
        c=b;
        c->next=merge_list(a,b->next);
    }
    return c;
    }

int main(){
node *head1;
cin>>head1;
node *head2;
cin>>head2;   // 7 4 3 1 -1 10 8 2 0 -1 //(-1 for end of input)
node *new_head=merge_list(head1,head2);
cout<<new_head;
}
