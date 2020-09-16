#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
 node* Insert(node *head,int d){
       if(head==NULL){
        head=new node(d);
        head->next=head;
        return head;
       }
       node *temp=new node(d);
       temp->next=head;
       while(head->next!=temp->next){
        head=head->next;
       }
       head->next=temp;
       return temp;
 }
 void print(node *head){
  node *temp=head;
 while(temp->next!=head){
    cout<<temp->data<<"-->";
    temp=temp->next;
 }
 cout<<temp->data<<endl;
 }

 node* get_node(node *head, int data){
 node *temp=head;
 while(temp->next!=head){
    if(temp->data==data){
        return temp;
    }
    temp=temp->next;
 }
 if(temp->data==data)
    return temp;
 else return NULL;
 }

 node* Delete(node *head,int d){ 
 node* del=get_node(head,d);
 node *temp=head;
  if(del==head){
    head=head->next;
 }
 while(temp->next!=del){
    temp=temp->next;
 }
 temp->next=del->next; // also work for head condition because in while loop condition , it is starting from temp->next
 delete del;
 return head;
 }

 int main(){
 node *head=NULL;
 head=Insert(head,5);
 head=Insert(head,4);
 head=Insert(head,3);
 head=Insert(head,2);
 head=Insert(head,1);
 print(head);
 head=Delete(head,3);
 print(head);
 }
