//order string
//question link =>   https://www.hackerrank.com/contests/morgan-stanley-codeathon-2017/challenges/shell-sort-command

#include<iostream>
#include<string>
#include<cstring>
#include"algorithm"
using namespace std;
string extract(string a,int k)
{
    char *p=strtok((char *)a.c_str()," ");
    while(k>1){
        p=strtok(NULL," ");
        k--;
    }
    return (string)p;
    }
    bool numeric(pair<string,string>s1,pair<string,string>s2){
    int key1=stoi(s1.second);
    int key2=stoi(s2.second);
    return key1<key2;
    }
     bool lexicographic(pair<string,string>s1,pair<string,string>s2){
      return s1.second<s2.second;
    }

int main(){
    int n;
    cin>>n;
    cin.ignore();
    string a[n];
    for(int i=0;i<n;i++){
        getline(cin,a[i]);
    }
    int key;
    string reversal,ordering;
    cin>>key;
    cin.ignore();
    cin>>reversal>>ordering;
    pair<string,string>strpair[n];
    for(int i=0;i<n;i++){
        strpair[i].first=a[i];
        strpair[i].second=extract(a[i],key);
    }
    //ordering
    if(ordering=="numeric"){
        sort(strpair,strpair+n,numeric);
    }
    else sort(strpair,strpair+n,lexicographic);

    //reversing
    if(reversal=="true"){
        for(int i=0;i<n/2;i++)
            swap(strpair[i],strpair[n-i-1]); //here we can't use sort because we are reversing result and it may be lexicographical or numerical so it's easy to swap
    }
    for(int i=0;i<n;i++){
        cout<<strpair[i].first<<endl;
    }
}
