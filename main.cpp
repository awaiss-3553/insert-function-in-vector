#include <iostream>
#include<string>
#include <vector>
using namespace std;
int main(){

   vector<int> vec={1,2,3,4,5};
   // if we want to insert any value from vec
   // lets suppose we want to insert 20 at start
   vec.insert(vec.begin(),20);
   // if we want to add at mid
   vec.insert(vec.begin()+3,9);

   for(int val :vec){
    cout<<val<<" ";
   }
}
