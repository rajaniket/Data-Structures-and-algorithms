#include<iostream>
#include <string.h>
using namespace std;
int main ()
{
 string str ="- This, a sample string.";
 const char* temp = str.c_str();  //c_str() gives pointer to an array
 char *token = strtok((char*)temp," ");
 while(temp)
 {
    cout<<token<<endl;
    token=strtok(NULL," ");
 }

}
