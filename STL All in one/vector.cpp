#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  // vector is an updated container from array. we use it instead of using array for different facilities. One of the is - in array we have to declare its size and that is fixed. incase we need to store another data in that array we can't do it cz size is fixed. but in vector i can modify the size cz its nature is dynamic not static.so it will automatic create storage when it will be needed .another beneifit is good memory management.
  //let i declare of an array of size 5
  int arr[5] = {1,2,3}; 
  // here we can see its size is 5. but its holding 3 int, for that its consuming memories of system without any use of them which is not good.
  vector<int> ar = {1,2,3} ; 
  // its dynamicly allocating size of 3  for the given elements.

  // when we dont know the size of an array or need dynamic storage we use vector specially.

  //declaring a vector ->
  vector<int> v; //vector<data_type> container_Name ;
  // vector properties ->
  //other declaration ->

  // we can insert a data in a vector using this two fuction
  v.push_back(1);
  v.emplace_back(1) ;

  //if we need to store gourp of data .in that time we can use pair within vector
  vector<pair<int,int>> vec ;
  vec.push_back({1,2}) ;
  vec.emplace_back(2,3);

  //declare a vector with a size  
  vector<int> v2(5) ;

  //declare a vector with n size and m value
  vector<int> v1(5,100); //here a vector will be creat of size 5 where every element will be 100 // v1 = {100,100,100,100,100}
  //** lets add another value in v1;
  v1.push_back(1) ;
  // vector will be -> v1 = {100,100,100,100,100,1} , though it was declared with size 5. but now size of vector #v1 will be 6
  
  //copy a full vector into a new vector by doing this->
  vector<int> v3(v1) ;

  //accesing vector elements using iterator
  auto itr = v1.begin() ; // this  iterator point to the memory location
  // by using * we can access a data from a pointed memory location.->
  cout << *itr << endl ; // out put 100

  // printing all element from a vector 
  for (auto itrr = v1.begin() ; itrr < v1.end(); itrr++)
  {
    cout << *itrr << endl ;
  }
  // output -> 100 100 100 100 100 1

  //##some other iterator fuctions of a vector->
  //let , v1 = {1,2,3,4,5,6}
  v1.end() ; // end points to a location which is right after the last element of the vector v1 , that means its pointing after index 5 of v1
  v1.rbegin(); // 6 // rbegin points to the last element's location of the actual vector and here which value is 6  
  v1.rend() ; //rend (reverse end) points to a location which is right before of the first element of the vector v1 , that means its pointing before index 1;
  v1.rend()+1 ; // index 0 -- output will be 1

  // ##Deletation of elemnts from a vector
  vector<int> v5 = {10,20,12,23,26,28,30} ;
  v5.erase(v5.begin()) ; // deleting a single element // v5 = {20,12,23,26,28,30}

  //multi element delete , v5.erase(starting point,targeted last point plus 1).
  //want to del 23,26,28 from the vector v5
  v5.erase(v5.begin()+2,v5.begin()+5);
  // output -> {20,12,30}



  //## Insert function ->>
  // we can use it whenever we want to insert some values in a specific position of a existed vector
  vector<int> v = {100,100} ; // v ={100,100}
  v.insert(v.begin(),300); //v ={300,100,100}
  v.insert(v.begin()+1 , 40); // v ={300,40,100,100}
  v.insert(v.begin()+1,3,24) ; // v ={300,24,24,24,40,100,100} in this case its inserting 24 3 times in the posituin right after the first element or index

  //before that we have sseen how to copy a vector in a new vector while declaring that new vector.
  // **now we will see how we can insert a vector in a existing vector by insert function
  vector<int> copy(3,24) ; // copy ={24,24,24}
  //v = {300,24,24,24,40,100,100}
  v.insert(v1.begin(), copy.begin(),copy.end()) ; // v = {24,24,24,300,24,24,24,40,100,100} 

  // v = {20,12,30}
  v.pop_back() ;// output will be {20,12}
  //v = {20,30,40}
  v.size() ; // 3  // returns intiger

  //v1 = {12,13,14} v2 = {10,11}
  v1.swap(v2) ;// v1 ={10,11} , v2 ={12,13,14}

  v.clear(); // this void fuction erases the full vector and makes it empty ;

   v.empty() ; // its like a boolian function which says wheither this vector is empty or not
  return 0;
}
