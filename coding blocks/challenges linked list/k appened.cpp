#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

 class ListNode {
     public:
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    int length(ListNode *head){
      int len=0;
      while(head!=NULL){
       head=head->next;
       len++;
      }
      return len;
    }

    void print(ListNode *head){
    while(head!=NULL){
    cout<<head->val<<" ---> ";
    head=head->next;
    }
    cout<<endl;
     }

ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0)
            return head;
        int len=length(head);
        cout<<len<<" "<<k<<endl;
        if(k>=len)
        k=k%len;
        if(k==0)
        return head;
        ListNode* new_head;
        ListNode* t1=head;
        ListNode* t2;
        //
        for(int i=1;i<(len-k);i++){
            t1=t1->next;
        }
        new_head=t1->next;
        t2=new_head;
        while(t2->next!=NULL){
            t2=t2->next;
        }
        t1->next=NULL;
        t2->next=head;
        return new_head;
      }
};

int main(){
//    ListNode *a=new ListNode(9);
//    ListNode *p=new ListNode(8,a);
//    ListNode *b=new ListNode(7,p);
//    ListNode *c=new ListNode(6,b);
//    ListNode *d=new ListNode(5,c);
//    ListNode *e=new ListNode(4,d);
    //ListNode *f=new ListNode(3);
    ListNode *g=new ListNode(2);
    ListNode *h=new ListNode(1,g);
    ListNode *head=NULL;
    Solution k;
   // for(int i=0;i<15;i++){
    head=k.rotateRight(head,1);
    k.print(head);


}



