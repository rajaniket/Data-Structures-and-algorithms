#include"iostream"
#include"cstring"
using namespace std;
void palindrom(const char *a)
{
    int l=strlen(a);
    char b[l];
    for(int i=0;i<l;i++)
        b[i]==a[l-1-i];
    int i;
    for(i=0;i<l;i++)
        if(a[i]!=b[i])
        break;
    if(i==l)
        cout<<"Palindrom"<<endl;
    else cout<<"Not a Palindrom"<<endl;
}
int main(){
char *a="raar";
palindrom(a);



}
