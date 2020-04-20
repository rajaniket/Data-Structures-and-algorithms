#include<iostream>
#include<string.h>
using namespace std;
int main(){
char a;
cin>>a;
if(97<=a&&a<=122)
    cout<<"lowercase"<<endl;
else if(65<=a&&a<=90)
    cout<<"UPPERCASE"<<endl;
else cout<<"Invalid"<<endl;
}
