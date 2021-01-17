#include<iostream>
#include<algorithm>
using namespace std;

void counting_m1(int a[], int n)
{
   int temp[3]={0};
   for(int i=0;i<n;i++)
   {
      temp[a[i]]++;
   }
   int j=0;
   for(int i=0;i<3;i++){
       while(temp[i]>0)
       {
         a[j]=i;
         j++;
         temp[i]--;
       }
   }
}

void dutch_algo_m2(int a[], int n)
{
  int mid=0;
  int low =0;
  int high=n-1;

  while(mid<=high)
  {
      switch(a[mid])
      {
          case 0:
          swap(a[mid++],a[low++]);
          break;

          case 1:
          mid++;
          break;

          case 2:
          swap(a[mid],a[high--]);
          break;
      }
  }}

int main()
{
    int arr[6]={0,2,1,1,0,2};
    //counting_m1(arr,6);
    dutch_algo_m2(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i];
    }

}
