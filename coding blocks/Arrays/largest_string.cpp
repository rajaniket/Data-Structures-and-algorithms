// remove consecutive duplicates(m-2 ,O(n) )
// "ccoodinggg__bloockksssss"===> coding_blocks
#include"iostream"
#include"cstring"
using namespace std;
int main(){
char largest[1000];
char current[1000];
int len_curr=0,len_lg=0;
int n;
cout<<"Enter number of strings"<<endl;
cin>>n;
cin.ignore();
for(int i=0;i<n;i++){
    cin.getline(current,1000);
    len_curr=strlen(current);
    if(len_curr<=len_lg){
        strcpy(largest,current);
    }
}
cout<<current;
}
