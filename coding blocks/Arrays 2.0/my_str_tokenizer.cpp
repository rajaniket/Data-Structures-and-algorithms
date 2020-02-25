#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
char *mystrtok(char a[],char delm){
static char *input=NULL;
if(a!=NULL)
    input==a;
char *output=new char[strlen(input)+1];
int i;
for(i=0;input[i]!='\0';i++){
if(input[i]!=delm){
        output[i]=input[i];
}
else {
    output[i+1]='\0';
    input=input+i+1;
    return output;

}}

}
int main(){
char a[]={"Hi, My name is Aniket, My roll number is 31"};
char *p;
p=mystrtok(a,' ');
while(p!=NULL){
cout<<p<<endl;
p=mystrtok(NULL,' ');
}
}

