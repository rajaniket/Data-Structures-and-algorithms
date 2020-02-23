//Write Bubble Sort on 2-D array of string to sort it.
#include<iostream>
#include<string.h>
using namespace std;
void swap_2d(char *a1,char *a2){
char temp[50]={0};
strcpy(temp,a1);
strcpy(a1,a2);
strcpy(a2,temp);
}
int main(){
char a[][50]={"potato","zebra","banana","apple","mango","radish","sweet_potato"};
int n=sizeof(a)/sizeof(a[0]); // n=number_of_string, 50 is length of a string
for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
for(int j=0;j<n-1;j++)
for(int i=0;i<n-1;i++){
if(a[i][0]>a[i+1][0])
    swap_2d(a[i],a[i+1]);  // or you can use swap(a[i],a[i+1]) function directly
}
cout<<"\nafter sorting"<<endl<<endl;
for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
}
