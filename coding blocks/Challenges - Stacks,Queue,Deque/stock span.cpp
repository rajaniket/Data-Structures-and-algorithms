
// method-1: stack<pair<price,span>>
#include<iostream>
#include<stack>
using namespace std; //7 100 80 60 70 60 75 85 //5 30 35 40 38 35

int main(){
int n;
cin>>n;
int price[n];
for(int i=0;i<n;i++){
     cin>>price[i];
}
stack<pair<int,int>> s;
for(int i=0;i<n;i++){
    int span=1;
    while(!s.empty() && price[i]>=s.top().first){
        span+=s.top().second;
        s.pop();
    }
    cout<<span<<" ";
    s.push({price[i],span});
}
cout<<"END"<<endl;

}

// method-2: stack<pair<price,index>>
/*
#include<iostream>
#include<stack>
using namespace std; //7 100 80 60 70 60 75 85
//5 30 35 40 38 35
int main(){
int n;
cin>>n;
int price[n];
for(int i=0;i<n;i++){
     cin>>price[i];
}
stack<pair<int,int>> s;
s.push(make_pair(price[0],0));
cout<<1<<" ";
for(int i=1;i<n;i++){
    int span=1;
    while(!s.empty() && price[i]>=s.top().first){
        s.pop();
    }
    span=(s.empty())?i+1:i-s.top().second;
    cout<<span<<" ";
    s.push({price[i],i});
}
cout<<"END"<<endl;

}
*/
