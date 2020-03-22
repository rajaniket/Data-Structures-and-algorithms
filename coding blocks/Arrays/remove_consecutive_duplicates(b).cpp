// remove consecutive duplicates(m-2 ,O(n) )
// "ccoodinggg__bloockksssss"===> coding_blocks
#include"iostream"
#include"cstring"
using namespace std;
void duplicate_remove(char *a)
{
    int l=strlen(a);
   int previous=0;
    for(int i=1;i<l;i++){
        if(a[previous]!=a[i]){
        previous++;
        a[previous]=a[i];
        }}
    a[previous+1]='\0';
}
int main(){
char a[]="c";
duplicate_remove(a);
cout<<a;
}
