//Binary search implementation 
#include<iostream>
#include<string.h>
using namespace std;
void Binary_search(int key,int *a,int l){
int Start=0,End=l-1,Middle;
while(Start<=End){
Middle=(Start+End)/2;
if(a[Middle]==key)
{
    cout<<key<<" Found at index "<<Middle<<endl;
    return;
}
else if(a[Middle]>key)
    End=Middle-1;
else Start=Middle+1;
}
cout<<"Not found"<<endl;
}
int main(){
int a[7]={10,11,12,13,14,15,16};
int b[6]={10,11,12,13,14,15};
Binary_search(15,a,7); //(Key,array,length)
Binary_search(123,b,6);
}
