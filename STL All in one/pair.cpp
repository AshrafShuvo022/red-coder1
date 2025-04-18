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
  // pair is a part of utility library
  //pair<data type , data type>
  //example ->
  pair<int , int> firstPair = {2,3} ;
  //accesing its element -
  cout << firstPair.first << "and " << firstPair.second << endl ; // output will be -> 2 and 3

   
  //we can use nested propertity of pair. let assume in a school in a class, every student have unique id number,its actually a primary key here. we want to keep track a student's name and phonenumber . we can easily find it by using that primary key which is his id no. now we will see how nested property of pair  helps us in this case.
  pair<int, pair<string,string>> studentX = {123,{"Shuvo","01681888062"}} ; 
  pair<int, pair<string,string>> studentY = {124,{"Ashraf","01681888063"}} ;
  //accesing its element of id 123-

  if(studentX.first == 123){
    cout << "Student Name: " << studentX.second.first <<" " << "phone number : " << studentX.second.second << endl ;
    // output will be -> Student Name: Shuvo phone number: 01681888062
  }
  if(studentY.first == 123){
    cout << "Student Name: " << studentY.second.first <<" " << "phone number : " << studentY.second.second << endl ;
  }
// this above part was meant for understanding that like how pair is actually working and how it can be use . basically we use it to collect or have same catagory's group of data

// now lets come into a actual real life case.in a class there are many student . its impossible to declare seperate variable will seperate data for every student . So here we will see how pair can be use with vector for collecting this data.
vector<pair<int,pair<string,string>>> student = {{123,{"Shuvo","01681888062"}},{124,{"Ashraf","01681888063"}}};
// now we want details of id 124 ,lets try 
for (int i = 0; i < student.size(); i++)
{
  if(student[i].first == 124){
    cout << "Student Name: " << student[i].second.first <<" " << "phone number : " << student[i].second.second << endl ; 
  }
}
  return 0;
}
