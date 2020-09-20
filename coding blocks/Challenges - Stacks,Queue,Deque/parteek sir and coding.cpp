#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int main(){
int n;
cin>>n;
stack<int> a;
for(int i=0;i<n;i++){
  int query;
  cin>>query;
  if(query==2){
    int price;
    cin>>price;
    a.push(price);
  }
  else if(!a.empty()){
    cout<<a.top()<<endl;
    a.pop();
  }
  else cout<<"No Code"<<endl;
}
}

