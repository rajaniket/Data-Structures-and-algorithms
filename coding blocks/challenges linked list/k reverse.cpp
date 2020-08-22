#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

 class node {
     public:
      int val;
      node *next;
      node() : val(0), next(nullptr) {}
      node(int x) : val(x), next(nullptr) {}
      node(int x, node *next) : val(x), next(next) {}
 };

class Solution {
public:
    int length(node *head){
      int len=0;
      while(head!=NULL){
       head=head->next;
       len++;
      }
      return len;
    }

    void print(node *head){
    while(head!=NULL){
    cout<<head->val<<" ---> ";
    head=head->next;
    }
    cout<<endl;
     }

    node* reverse_list(node *head){
     if(head==NULL || head->next==NULL)
        return head;
     node *new_head=reverse_list(head->next);
     node *temp=head->next;
     temp->next=head;
     head->next=NULL;
     return new_head;
    }

    node* reverseKGroup(node* head, int k) {
        int len=length(head);
        if(head==NULL || head->next==NULL || k>len)
            return head;
        else if(k==0){
            return reverse_list(head);
            }
        else {
            node *t1=head;
            node *t2=head;
            for(int i=0;i<k-1;i++){
                t2=t2->next;
            }
            node *temp=t2->next;
            t2->next=NULL;
            head=reverse_list(t1);
            t1->next=temp;
            node *prev=t1;
            t1=temp;
            t2=temp;
            len=len-k;
            while(len>=k){
             for(int i=0;i<k-1;i++){
                t2=t2->next;
             }
             temp=t2->next;
             t2->next=NULL;
             t2=reverse_list(t1);
             t1->next=temp;
             prev->next=t2;
             prev=t1;
             t1=temp;
             t2=temp;
             len=len-k;
            }
            return head;
        }
    }
};

int main(){
//    node *a=new node(0);
//    node *p=new node(8,a);
//    node *b=new node(7,p);
//    node *c=new node(6,b);
//    node *d=new node(5,c);
//    node *e=new node(4,d);
//    node *f=new node(3,e);
//    node *g=new node(2,f);
//    node *h=new node(1,g);
    node *head=new node();
    Solution k;
      //k.print(h);
    head=k.reverseKGroup(head,1);
    k.print(head);
    //cout<<head->val;
}





