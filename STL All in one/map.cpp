#include <bits/stdc++.h>
using namespace std;

void multiimap(){
    //it will store duplicated keys and will keep it in the sorted order
}
void unorderedmapp(){
   // it will store  unique keys but will not be in the sorted order . it will be in random order

   //maximum cases time complexity is O(1)
}
void mapp(){
  //it will store unique keys and will keep it in the sorted order
 map <int , int > mpp ;
 map <int,pair<int, int>> mpp0 ;
 map<pair<int,int>, int> mpp1 ;

 //way of data insert in the mapp

 mpp[1] = 2 ; // {{1,2}}
 mpp[1]++ ; // {{1,3}}
 mpp.clear() ;
 mpp.insert({1,3}) ; // {{1,3}} 
 mpp.insert({1,4}) ; // it will be ignored because key "1" is allredy in the mpp ;


 mpp1[{2,3}] = 5 ; // {{{2,3},5}}
 mpp1[{1,3}] = 6 ; // {{{1,3},6},{{2,3},5}}
 // here we can see that the key is in pair , but we know in map key will be in the sorted order ,
 // C++ compares them lexicographically, just like words in a dictionary.
 // What does lexicographical mean here?
 //It compares:
 //First the .first of the pair
 //If they are equal, then .second

 auto it = mpp.find(1) ;
 //cout << *it <<  endl ; // prints 3

 //**accessing in the map 
 auto itp = mpp1.begin() ;
 int a = itp->first.first ; // a = 1


 for (auto it : mpp)
 {
   cout << "key" << it.first << "Value" << it.second << endl ; 
 }
 for(auto it : mpp1){
  cout << it.first.first ; // 1
  cout << it.first.second ; // 3
  cout << it.second ; // 6
 }

 
 //lower bounf , upper bound, erase,swap,size,empty are same as set
}

int main()
{
  /* 
  //Map ->
  1. map 
  2. multimap
  3. unorderedmap

    //decleration for different need->
  // map<data type, data type> mp ;
  // map<data type , pair<data type , datatype>> mp ;
  // map<pair<data type , data type>,data type> mpp ;

  //first portion is the "Key" and second portion is the "value"
  */
  return 0 ;
}