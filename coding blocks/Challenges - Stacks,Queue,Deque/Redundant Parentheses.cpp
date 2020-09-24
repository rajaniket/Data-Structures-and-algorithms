#include<iostream>
#include<stack>
using namespace std;
void isRedundant(string s) {
    stack<char> store;
  for(char i:s){
    if(i!=')'){
        store.push(i);
    }
    else{
        if(store.top()=='('){
            cout<<"Duplicate"<<endl;
            return;
        }
        else{
            while(store.top()!='('){
                store.pop();
            }
           store.pop(); // poping '('
        }}}
    cout<<"Not Duplicates"<<endl;
}
int main(){
int n;
cin>>n;
while(n>0){
    string input;
    cin>>input;
    isRedundant(input);
    n--;
}
}
