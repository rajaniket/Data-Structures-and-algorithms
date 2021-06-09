#include<iostream>
using namespace std;
// input : 1,2,5,6,8,8,8,10,12,15 , o/p : 4,6
void first_occurrence(int *arr,int n,int key)
{
    int left=0;
    int right=n-1;
    int mid;
    int first_occ;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==key)
        {
         first_occ=mid;
         right = mid-1;
        }
        else if(arr[mid]>key)
           right = mid-1;
        else if(arr[mid]<key)
           left = mid+1;
    }
    cout<<"First occurrence: "<<first_occ<<endl;

}
void last_occurrence(int *arr,int n,int key)
{
    int left=0;
    int right=n-1;
    int mid;
    int last_occ;

    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==key)
        {
            last_occ=mid;
            left=mid+1;
        }
        else if(arr[mid]>key)
           right = mid-1;
        else if(arr[mid]<key)
           left = mid+1;
    }
    cout<<"Last occurrence: "<<last_occ<<endl;;
}

int main()
{
int a[]={8,8,8,8,8,8,8};
int n=sizeof(a)/sizeof(int);
cout<<"n="<<n<<endl;
first_occurrence(a,n,8);
last_occurrence(a,n,8);
}
