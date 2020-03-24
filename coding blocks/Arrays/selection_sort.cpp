//Binary search implementation
#include<iostream>
#include<string.h>
using namespace std;
void selection_sort_accending(int *a,int l){
    int Min;
for(int i=0;i<l;i++){
       Min=i;
    for(int j=i;j<l;j++){
        if(a[Min]>a[j])
           Min=j;
    }
    swap(a[i],a[Min]);
}
}
void print(int *a,int l){
for(int i=0;i<l;i++){
    cout<<a[i]<<",";
}
cout<<endl;
}
int main(){
int a[7]={10,21,2,13,4,25,16};
selection_sort_accending(a,7);
print(a,7);
}
