#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int using_set_m2(int a[],int n,int b[],int m)
{
   unordered_set<int> temp;
   for(int i=0;i<n;i++)
   {
       temp.insert(a[i]);
   }
   for(int i=0;i<m;i++)
   {
       temp.insert(b[i]);
   }
   return temp.size();
}

int sorting_search_m1(int a[],int n,int b[],int m)
{
    stack<int> temp;
    sort(a,a+n);
    sort(b,b+m);




}


int main()
{
unordered_set<int> temp;
int a[]={1,2,3,4,5};
int b[]={9,8,3,7,78};
int n=5;
int m=5;

   for(int i=0;i<n;i++)
   {
       temp.insert(a[i]);
   }

   for(int i=0;i<m;i++)
   {
       temp.insert(b[i]);
   }
//   for(auto i=temp.begin();i!=temp.end();i++)
//   {
//       cout<<*i<<" ";
//   }


}
