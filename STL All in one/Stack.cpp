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
  
  //for both stack and queue in C++, all their standard operations are O(1) (constant time)
  
  
  // Stack is basiccaly follow LIFO - last in first out . 

  //## Declaration 
  stack<int> st;
  st.push(1) ; // {1}  | Time: O(1)
  st.push(2) ; // {2,1}
  st.emplace(3) ; // {3,2,1}

  st.top() ; // 3 -> it will give the top value of the stack which was last put in in the stack  | Time: O(1)

  st.pop() ; // {2,1} -> the top most value or the last in value will be poped out from the stack  | Time : O(1)
  st.size() ; // 3
 
  st.empty() ; // like a boolian function. is the stack is empty or not , yes or not in return
  
  stack<int> st1 , st2 ;
  st1.swap(st2) ;
  return 0;
}
