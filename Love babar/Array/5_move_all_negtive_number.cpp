//https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

#include<iostream>
#include<algorithm>
using namespace std;
// m-1 just sort
// m-2 ,two pointer approach

int two_pointer(int *arr,int n){
int left=0;
int right=n-1;
while(left<=right){
   if(arr[left]<0 && arr[right]<0)
   {
       left++;
   }
   else if(arr[left]>0 && arr[right]>0)
   {
       right--;
   }
   else if(arr[left]<0 && arr[right]>0)
   {
       left++; right--;
   }
   else if(arr[left]>0 && arr[right]<0)
   {
       swap(arr[left++],arr[right--]);
   }
}
}


int main()
{
    int arr[9]={-12, 11, -13, -5, 6, -7, 5, -3, 11};
    two_pointer(arr,9);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }

}
