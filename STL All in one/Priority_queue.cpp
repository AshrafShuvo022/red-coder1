#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

int main(){

  priority_queue<int> pq ; // another name is Max_Heap
  pq.push(1) ; // {1}  | time : O(log n)
  pq.push(5) ; // {5,1}
  pq.push(3) ; // {5,3,1}
  pq.emplace(8) ; // {8,5,3,1}

  cout << pq.top() ; // prints 8 || time : O(1)

  cout << pq.size() ; // prints  4 ;
  
  pq.pop() ; // {5,3,1}  || time : O(log n)

  //swap and empty functions are same 
  
  // ##* Min_Heap
  //declaration important*
  priority_queue<int,vector<int>,greater<int>> pq ;
  pq.push(5) ; // {5}
  pq.push(10) ; // {5,10}
  pq.push(3) ; // {3,5,10}
  pq.push(4) ; // {3,4,5,10}

  cout << pq.top() ; // prints 3
}