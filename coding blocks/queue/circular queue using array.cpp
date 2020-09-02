#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int n;
    int current_space;
    int front;
    int rear;
public:
    Queue(int size=5){
    arr=new int[size];
    n=size;
    front=0;
    rear=n-1;
    current_space=0;
    }
    bool Empty(){
    return current_space==0;
    }
    bool Full(){
        return current_space==n;
    }
    void push(int data){
    if(!Full()){
    rear=(rear+1)%n; // upgrading rear also
    arr[rear]=data;
    current_space++;
    }
    }

    void pop(){
    if(!Empty())
    {
        front=(front+1)%n;
        current_space--;
    }
    }

    void print(){
    if(!Empty()){
            int i=front;
            int j=rear;
        while(i!=j){
            cout<<arr[i]<<" ";
            i=(i+1)%n;
    }
    cout<<arr[i]<<endl;
    }
    }
};
int main(){
Queue a(6);
for(int i=1;i<=6;i++){
a.push(i);
}
a.print();
a.pop();
a.pop();
a.print();
a.push(9);
a.print();
}

