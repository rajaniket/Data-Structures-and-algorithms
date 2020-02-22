//Write Bubble Sort on 2-D array of string to sort it.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
char a[3][100]={"decba","fighj","lknmp"};
for(int i=0;i<3;i++)
    cout<<a[i]<<endl;
sort(a,a+2);
cout<<"After sorting"<<endl;
//for(int i=0;i<3;i++)
//{
//sort(a;
//
//}
for(int i=0;i<3;i++)
    cout<<a[i]<<endl;
}
