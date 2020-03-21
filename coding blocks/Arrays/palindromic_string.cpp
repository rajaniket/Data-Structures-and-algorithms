// Check string is palindromic or not
#include"iostream"
#include"cstring"
using namespace std;
void palindrom(const char *a)
{
    int l=strlen(a);
    l--;
    for(int i=0;i<=l-i;i++){
            if(a[i]!=a[l-i]){
                cout<<a<<" is not a Palindrom"<<endl;
                return;
            }
    }
        cout<<a<<" is a Palindrom"<<endl;
}
int main(){
char *a="123454321";
palindrom(a);
char *a1="abcdcba";
palindrom(a1);
char *a2="aniket";
palindrom(a2);
}
