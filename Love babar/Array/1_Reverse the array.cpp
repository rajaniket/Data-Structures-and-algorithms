#include<iostream>
#include<stack>
using namespace std;
// Iterative Solution
void Reverse_Arr(int *a,int n){
int left=0;
int right=n-1;
while(left<right){
swap(a[left],a[right]);
left++;
right--;
}
}

// Recursive Solution
void Rec_Reverse(int *a,int left,int right){
if(left>=right)
    return;
swap(a[left],a[right]);
Rec_Reverse(a,left+1,right-1);  // Rec_Reverse(a,left++,right--); left++ and right-- will not work because it will take left and right after that it's value will increase/decrease
}

// Using Stack
void Stack_rev(int *a,int n){
stack<int> temp;
for(int i=0;i<n;i++)  // simple each loop won't work in case of stack
temp.push(a[i]);

int j=0;
for(int i=0;i<n;i++){
a[i]=temp.top();
temp.pop();
}
}

int main(){
int arr[6]={1,2,3,4,5,6};
for(int i:arr)
    cout<<i;
cout<<"\nIterative Solution"<<endl;
Reverse_Arr(arr,6);
for(int i:arr)
    cout<<i;
cout<<"\nRecursive Solution"<<endl;
Rec_Reverse(arr,0,5);
for(int i:arr)
    cout<<i;
cout<<"\nStack Solution"<<endl;
Stack_rev(arr,6);
for(int i:arr)
    cout<<i;
}

