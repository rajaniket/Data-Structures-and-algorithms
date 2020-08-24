/*
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
     if(!empty())
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
*/
// generalize the code (will work for all data type) possible using template , just you have to pass the data type while creating an object.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
template<typename T>
class Stack{
private:
    vector<T> v;
public:
    void push(T data){
        v.push_back(data);
    }
    bool empty(){
    return v.size()==0;
    }
    void pop(){
    if(!empty())
    v.pop_back();
    }
    T top(){
     return v[v.size()-1];
    }
};

int main(){
Stack<int>s;
for(int i=1;i<=5;i++){
    s.push(i*i);
}
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}
}
