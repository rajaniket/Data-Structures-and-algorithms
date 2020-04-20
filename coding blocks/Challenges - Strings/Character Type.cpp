/*

*/
#include<iostream>
#include<string.h>
using namespace std;
char check(char a){
if('a'<=a&&a<='z')
    return 'L';
else if('A'<=a&&a<='Z')
    return 'U';
else return 'I';
}

int main(){
char a;
cin>>a;
cout<<check(a);
}
