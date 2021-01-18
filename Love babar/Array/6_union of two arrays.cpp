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
    vector<int> temp;
    sort(a,a+n);
    sort(b,b+m);

    int x1=0;
    int x2=0;
    int Count=0;
    while(x1<n && x2<m)
    {
        if(a[x1]<b[x2])
        {
          temp.push_back(a[x1++]);
          Count++;
        }
        else if(a[x1]>b[x2])
        {
            temp.push_back(b[x2++]);
            Count++;
        }
        else if(a[x1]==b[x2])
        {
            temp.push_back(a[x1]);
            Count++;
            x1++;
            x2++;
        }
    }


    while(x1<n)
    {
        temp.push_back(a[x1++]);
        Count++;
    }
    while(x2<m)
    {
        temp.push_back(b[x2++]);
        Count++;
    }



   // for removing duplicates from sorted array
   int j=0;
    for(int i=0;i<temp.size()-1;i++)
    {
        if(temp[i]!=temp[i+1])
        {
            temp[j]=temp[i];
            j++;
        }
    }
    temp[j]=temp[temp.size()-1];

    return j+1;
}


int main()
{
int a[]={1,9,3,6,11,5};
int b[]={4,8,3,1,7,8};
int n=6;
int m=6;
cout<<using_set_m2(a,n,b,m)<<endl;
cout<<sorting_search_m1(a,n,b,m)<<endl;
}
