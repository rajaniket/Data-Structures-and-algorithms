#include<iostream>
#include<algorithm>
#include<list>
// input 
//4 5
//0 1 4
//0 2 3
//0 3 8
//1 2 4
//2 3 6

using namespace std;
int main(){
list<pair<int,int>> *k;
int n;
cin>>n; // number of node;
k=new list<pair<int,int>>[n];

int link; // total number of link or can say path
cin>>link;
for(int i=0;i<link;i++){
    int x,y,dis;  // node-1,node-1,distance
    cin>>x>>y>>dis;
    k[x].push_back(make_pair(y,dis));
    k[y].push_back(make_pair(x,dis));
}

for(int i=0;i<n;i++){
    cout<<"Linked list "<<i<<": ";
    for(auto x:k[i])
        cout<<"("<<x.first<<","<<x.second<<") ";
    cout<<endl;
}
}

