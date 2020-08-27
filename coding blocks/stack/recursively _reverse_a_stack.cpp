#include<iostream>
#include<stack>
using namespace std;
void insert_at_bottom(stack<int> &s,int x){
 if(s.empty())
  {
    s.push(x);
      return;
  }
  int data=s.top();
  s.pop();
  insert_at_bottom(s,x);
  s.push(data);
}

void reverse_stack(stack<int> &s){
  if(s.empty())
  {
      return;
  }
  int x=s.top();
  s.pop();
  reverse_stack(s);
  insert_at_bottom(s,x);
}
int main(){
stack<int> s;
for(int i=4;i>0;i--){
    s.push(i);
}
reverse_stack(s);
while(!s.empty()){
    cout<<s.top()<<",";
    s.pop();
}
}
