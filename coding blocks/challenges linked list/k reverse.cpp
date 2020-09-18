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

    int length(node *head){
    int len=0;
    while(head!=NULL){
    len++;
    head=head->next;
    }
    return len;
    }

    node* reverse_list(node *head){
    if(head==NULL or head->next==NULL){
    return head;
    }
    node *new_head=reverse_list(head->next);
    head->next->next=head;
    head->next=NULL;
    return new_head; // 1 2 3 4 5 6 7
    }


    node* reverseKGroup(node *head, int k){
    int len=length(head);
    if(head==NULL || head->next==NULL || k==1)
    return head;
    else if(k==len){
    return reverse_list(head);
    }
    node *previous_window=NULL;
    node *window_start=head;
    node *window_end;
    node *after_window;

    for(int i=0;i<(len/k);i++){
    int k_temp=k-1;
    // making a window of size k , where window_start indicates start of the window and window_end indicates end of the window
    window_end=window_start;
    while(k_temp!=0){
     window_end=window_end->next;
    k_temp--;
    }
    // reversing the window
    after_window=window_end->next;
    window_end->next=NULL;
    window_end=reverse_list(window_start);
    // Linking that reversed window with previous and sfter nodes (after reversing)
    if(previous_window==NULL)
        head=window_end;
    else
        previous_window->next=window_end;

    window_start->next=after_window;
    previous_window=window_start;
    window_start=after_window;
    }
    return head;
    }
    void print(node *head){
    while(head!=NULL){
    cout<<head->val<<" ---> ";
    head=head->next;
    }
    cout<<endl;
    }

    void insert_at_head(node *&head,int d){
    if(head==NULL){
        head=new node(d);
        return;
    }
    node *n=new node(d);
    n->next=head;
    head=n;
    }

    int main(){
    node *head=NULL;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        insert_at_head(head,d);
    }
    print(head);
    head=reverseKGroup(head,k);
    print(head);
    }

// manual
// int main(){
//    node *a=new node(0);
//    node *p=new node(8,a);
//    node *b=new node(7,p);
//    node *c=new node(6,b);
//    node *d=new node(5,c);
//    node *e=new node(4,d);
//    node *f=new node(3,e);
//    node *g=new node(2,f);
//    node *h=new node(1,g);
//   node *head=new node();
//    Solution k;
      //k.print(h);
//    head=k.reverseKGroup(head,1);
//    k.print(head);
    //cout<<head->val;
}





