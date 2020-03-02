// Rotate the array element by k
#include<iostream>
#include<cstring>
using namespace std;
void rotate_arr(int k,char *arr){
int n=strlen(arr);
for(int i=n-1;i>=0;i--){
    arr[i+k]=arr[i]; // Shifting element forward by k
}
for(int i=0;i<k;i++){
    arr[i]=arr[n+i];  // bringing last k elements in begning
}
arr[n]='\0';
//cout<<arr;
}
int main(){
char arr[]="ANIKETRAJ ";
int k,n;
k=4;
rotate_arr(k,arr);
cout<<arr;
}
