#include <bits/stdc++.h>
using namespace std;

void unorderedSet(){
   // lower bound and upper bound function dose not works , rest of alll functions are same as set 
   //its stores data randomly which means its not store data sorted 
}
void multiiset(){
   // Everything is same as Set
   //Stores duplicates elements also


   multiset<int> st ;

   st.insert(1) ; // {1}
   st.insert(1) ;  //{1,1}
   st.insert(1) ; //{1,1,1}
   st.emplace(2) ; // {1,1,1,2}

   st.erase(1) ; // {2}
   //when we use erase function in multiset we earse no only that value also dlts all duplicate copy

   int cnt = st.count(1) ; // cnt = 3 

   //only a single value want to erase ? ->
   // erase(that particular value's memory adreess (iterator))
   auto it = st.find(1) ;
   st.erase(st.find(1)) ; // {1,1,2}

  // rest all function same as set
}
void sett(){
  set<int> st ;
  
  st.insert(1) ; // {1}
  st.insert(3) ; //{1,3}
  st.insert(5) ; // {1,3,5}
  st.insert(1) ; // {1,3,5,} , data repetation happens so ignore
  st.emplace(5) ; //{1,3,5,} , data repetation happens so ignore
  
  //begin() , end() , rbegin() , rend() , size(),empty() , swap()  are same as vector file explanation 

  // {1,2,3,4,5}
  auto it = st.find(3) ; // it is pointing the memory address or location of where the value 3 is stored 
  
  // {1,2,3,4,5}
  auto it = st.find(6) ;
  // in this case there is no 6 in the set container so that it will return an iteraTOR which is actually st.end()

  st.erase(5) ; // {1,2,3,4} ;

  // as in the set it only contains unique values .so that while using count funtion it will return either 1 or 0 .  
  int countt = st.count(4); // countt = 1 
  countt -= st.count(5) ; // countt  = 0 
}
int main(){
   /*
   set is basicaly made with tree data structure 
   1. set 
   2. multiset
   3. unordered_set
   4. unordered_multiset 

  //set stores values in the sorted order and only contain unique or distinct value 

  // multiset stores value in the sorted order but contains duplicate data

  //unordered_set stores values randomly (not sorted )but only contain unique or distinct values.
  */
}