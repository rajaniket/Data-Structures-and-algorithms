//Mytokenizer function (like tokenizer function which is predefined)
//How tokenizer function works?
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
char *mystrtok(char arr[],char del[]){
static char *input=NULL;  //  static input 
    if(arr!=NULL){ // if input is equal to null it will print from start every time
      input=arr;
    }
char *output=new char[strlen(input)+1]; //it will store string to be print
int i; // i is defining outside ,we don't want i locally as it required outside loop for adding to input
for(i=0;input[i]!='\0';i++){ // here input starting address changes every time (see line 21)
        for(int k=0;k<strlen(del);k++) // for every character we are checking whether it is one of the delimiter or not
        if(input[i]!=del[k])
    output[i]=input[i];// copying input data to output 
else{
    output[i]='\0'; // when input is equal to one of the delimiter the last element of the array ended with NULL(or '\0')
input=input+i+1; // changing input address to next of delimiter 
return output;
}
}
output[i]='\0'; // at last null character has to be returned for breaking the while loop in the int main ()
input=NULL;
return output;
}

int main(){
char a[]={"Hi,My name is Aniket, My roll number is 31"};
char *p;
p=mystrtok(a,",");
while(p!=NULL){
cout<<p<<endl;
p=mystrtok(NULL,",");
}
}

