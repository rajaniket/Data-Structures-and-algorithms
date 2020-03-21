#include"iostream"
#include"cstring"
using namespace std;
void duplicate_remove(char *a,int l)
{
    for(int i=1;i<l;i++)
        if(a[i-1]==a[i]){
        for(int j=i+1;j<l;j++)
        a[j-1]=a[j];
        i--; // checking again from same location
        l--; // size gets reduced
        }
        a[l]='\0';
}
int main(){
char a[]="ccccoooooooodinnnnngggg__bloockksssss";
int l=strlen(a);
duplicate_remove(a,l);
cout<<a;
}
