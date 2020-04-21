#include<iostream>
#include<string.h>
using namespace std;
char check(char a){
if(islower(a))
    return 'L';
else if(isupper(a))
    return 'U';
else return 'I';
}

int main(){
char a;
cin>>a;
cout<<check(a);
}
