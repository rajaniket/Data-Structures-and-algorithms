#include<iostream>
#include<algorithm>
#include<math.h>
#include<stack>
using namespace std;
int* generate_prime(int n_i){ // n_i is number of iteration
        int count_prime=0;
        int *prime=new int[n_i];
        int isprime=1;
        int Max=INT_MAX;
        for(int i=2;i<Max;i++){
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                isprime=0;
                break;
                }
            else isprime=1;
                }
        if(isprime){
        prime[count_prime++]=i;
        }
        if(count_prime==n_i){
        break;
        }
        }
        return prime;
}
int main(){
    int n,itr;
    cin>>n>>itr;
int *p=generate_prime(itr);
 stack<int> A[n+100];  // for the safe side , taking 100 extra
 stack<int> B[n+100];
 for(int i=0;i<n;i++){
   int d;
   cin>>d;
   A[0].push(d);
  }
 int count_AB=0;
 for(int i=0;i<itr;i++){
         while(!A[count_AB].empty()){
        if(A[count_AB].top()%p[i]!=0)
        {
            A[count_AB+1].push(A[count_AB].top());
            A[count_AB].pop();
        }
        else{
            B[count_AB].push(A[count_AB].top());
            A[count_AB].pop();
        }
    }
    count_AB++;
 }
 // printing stacks of B
 for(int i=0;i<count_AB;i++){
    while(!B[i].empty()){
        cout<<B[i].top()<<endl;;
        B[i].pop();
    }
 }
 // printing stacks of A
 while(!A[count_AB].empty()){
       cout<<A[count_AB].top()<<endl;
        A[count_AB].pop();
       }
}

