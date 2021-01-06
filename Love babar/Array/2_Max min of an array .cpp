#include<iostream>
#include<algorithm>
using namespace std;
class Result{
public:
    int Max;
    int Min;
};
// Iterative Solution (Linear Search)
Result Max_Min_iterative(int *arr,int n){
Result Temp;
Temp.Max=arr[0];
Temp.Min=arr[0];
for(int i=1;i<n;i++){
    if(Temp.Max<arr[i])
        Temp.Max=arr[i];
    else if(Temp.Min>arr[i])
        Temp.Min=arr[i];
}
return Temp;
}

// Divide and Conquer (Binary Search)
Result Max_Min_DC(int *arr,int n){
Result Temp;
if(n==1)
{
    Temp.Max=arr[0];
    Temp.Min=arr[0];
    return Temp;
}
if(n==2)
{
    if(arr[0]>arr[1])
    {
        Temp.Max=arr[0];
        Temp.Min=arr[1];
    }
    else
    {
        Temp.Max=arr[1];
        Temp.Min=arr[0];
    }
    return Temp;
}

int Mid=n/2;
Result Temp1=Max_Min_DC(arr,Mid);
Result Temp2=Max_Min_DC(arr+Mid,n-Mid);
if(Temp1.Max>Temp2.Max)
    Temp.Max=Temp1.Max;
else Temp.Max=Temp2.Max;

if(Temp1.Min<Temp2.Min)
    Temp.Min=Temp1.Min;
else Temp.Min=Temp2.Min;
return Temp;
}


// Using Sort Function
Result Max_Min(int *arr,int n){
Result Temp;
sort(arr,arr+n);
Temp.Max=arr[n-1];
Temp.Min=arr[0];
return Temp;
}

int main(){
Result k;
int arr[10]={-1,1000,11000,445,8,300,3000,7,54,0};
//k=Max_Min(arr,6);
k=Max_Min_DC(arr,10);
cout<<"Min:"<<k.Min<<endl;
cout<<"Max:"<<k.Max<<endl;
}
