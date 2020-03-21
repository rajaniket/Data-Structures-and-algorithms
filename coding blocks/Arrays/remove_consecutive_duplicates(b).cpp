// remove consecutive duplicates(m-2 ,O(n) )
// "ccccoooooooodinnnnngggg__bloockksssss"===> coding_blocks
#include"iostream"
#include"cstring"
using namespace std;
void duplicate_remove(char *a)
{
    int l=strlen(a);
    for(int i=1;i<l;i++){
        if(a[i-1]==a[i]){
    //    cout<<","<<a[i-1]<<","<<a[i];
         a[i-1]=a[i];
         i--;
         l--;
        }
}}
int main(){
char a[]="coodinngbloockksssss";
duplicate_remove(a);
cout<<a;
}
