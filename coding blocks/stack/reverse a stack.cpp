#include<iostream>
#include<stack>
using namespace std;
void reverse_stack(stack<int> &s1){
stack<int> s2;
int n=s1.size();
for(int i=0;i<n-1;i++){
int temp=s1.top();
s1.pop();
// pop data from S1 and push it to S2
for(int j=i;j<n-1;j++){
s2.push(s1.top());
s1.pop();
}
// pop data from S1 and push it to S1
s1.push(temp);
for(int j=i;j<n-1;j++){
s1.push(s2.top());
s2.pop();
}
}
}
int main(){
stack<int> s;
for(int i=4;i>0;i--){
    s.push(i);
}
while(!s.empty()){
    cout<<s.top()<<",";
    s.pop();
}
cout<<endl;

for(int i=4;i>0;i--){
    s.push(i);
}

reverse_stack(s);
while(!s.empty()){
    cout<<s.top()<<",";
    s.pop();
}
}
