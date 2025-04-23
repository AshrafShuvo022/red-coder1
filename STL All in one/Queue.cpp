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
  
  // For both stack and queue in C++, all their standard operations are O(1) (constant time)

  // Queue basically follows FIFO - First In First Out

  //## Declaration 
  queue<int> q;

  q.push(1); // {1}  | Time: O(1)
  q.push(2); // {1, 2}
  q.emplace(3); // {1, 2, 3} -> emplace is more efficient than push if you're constructing the element

  cout << q.front() << "\n"; // 1 -> gives the front element of the queue | Time: O(1)
  
  cout << q.back() ; // 3 -- the last entered value will be in the back

  q.pop(); // removes 1, now queue is {2, 3} | Time: O(1)

  cout << "Size: " << q.size() << "\n"; // prints current size of the queue

  if (q.empty()) {
    cout << "Queue is empty\n";
  } else {
    cout << "Queue is not empty\n";
  }

  // Swapping two queues
  queue<int> q1, q2;
  q1.push(10);
  q1.push(20);
  q2.push(100);
  q2.push(200);

  q1.swap(q2); // Now q1 contains {100, 200} and q2 contains {10, 20}

  return 0;
}
