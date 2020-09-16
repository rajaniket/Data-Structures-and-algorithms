#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
int main(){
list<int> k={1,2,3,4,5,6};  // just like vector
list<string> j={"apple","banana","radish","pineapple"}; // apple is head and pineapple is tail
j.push_back("guava"); //add at tail.  //apple-->banana-->radish-->pineapple-->guava-->
j.sort(); //sorting lexicographically  // apple-->banana-->guava-->pineapple-->radish-->
j.reverse();//radish-->pineapple-->guava-->banana-->apple-->
//j.pop_front(); // head element deleted  // pineapple-->guava-->banana-->apple-->
//j.push_front("potatao"); // add at head; // potatao-->pineapple-->guava-->banana-->apple-->
//j.pop_back(); // potatao-->pineapple-->guava-->banana-->
//j.push_back("orange");
//j.push_back("lemon");
//j.remove("banana"); // will remove all banana present in the list
for(string i:j){
    cout<<i<<"-->";
}
cout<<endl;
// to remove some particular node from the list
      //auto it=j.begin()+3; // this will not work because it is not linear
auto it=j.begin();
it++;
it++;
j.erase(it); //it targets 3rd node
for(auto it=j.begin();it!=j.end();it++)  // we can also print like this
    cout<<(*it)<<"-->";
cout<<endl;

// for inserting elements in the list
it=j.begin();
it++;
j.insert(it,"juice");  // inserting at 2nd position
for(string i:j){
    cout<<i<<"-->";
}
cout<<endl;
}
