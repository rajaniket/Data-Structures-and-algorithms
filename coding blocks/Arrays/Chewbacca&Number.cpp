//Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. 
//Inverting digit t means replacing it with digit 9 - t.
//Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. 
//The decimal representation of the final number shouldn't start with a zero.
//Output Format
//Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.
//Sample Input
//4545
//Sample Output
//4444

#include <iostream>
using namespace std;
int main() {
    char a[30] ;
    cin>>a;
    int i=0;
    if(a[i]=='9')
        i++;
    for(i;a[i]!='\0';i++){
        int p=a[i]-'0';
        if(p>(9-p))
            a[i]=9-p+'0';
    }
    for(int i=0;a[i]!='\0';i++)
        cout<<a[i];
}
