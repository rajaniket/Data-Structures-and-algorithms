#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Stack{
private:
    vector<int> v;
public:
    void push(int data){
        v.push_back(data);
    }
    bool empty(){
    return v.size()==0;
    }
    void pop(){
    v.pop_back();
    }
    int top(){
     return v[v.size()-1];
    }
};

int main(){
Stack s;
for(int i=1;i<=5;i++){
    s.push(i*i);
}
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}
}
