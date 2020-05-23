
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
pair<int,string> p;
p.first=100;   // or  pair<int,string> p(100,"Ram");
p.second="Ram";
cout<<p.first<<" , "<<p.second<<endl;

pair<int,string> g(p); // copy of p
cout<<g.first<<" , "<<g.second<<endl;

// take input from user
int a,b;
cin>>a>>b;
pair<int,int> p1=make_pair(a,b);
cout<<p1.first<<" , "<<p1.second<<endl;

}
