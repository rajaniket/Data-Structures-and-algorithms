#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s) {
        int size=s.size();
        stack<int> store;
        for(int i=0;i<size;i++){
            if(s[i]=='{'||s[i]=='['||s[i]=='('){
                store.push(s[i]);
            }
            else if(s[i]=='}'||s[i]==']'||s[i]==')')
            {
                if(store.empty())
                    return false;

                if(s[i]=='}' && store.top()=='{')
                    store.pop();
                else if(s[i]==']'&& store.top()=='[')
                    store.pop();
                else if(s[i]==')' && store.top()=='(')
                    store.pop();
                else return false;
                }
            }
         return store.empty();
    }
    int main(){
    string s;
    cin>>s;
    if(isValid(s))
        cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
