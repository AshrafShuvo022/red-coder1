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

  // List container, similar to vector.
  // But it's implemented as a doubly linked list.
  // It allows constant time insertion and deletion from both ends and at any position using iterators.

  // # List declaration
  list<int> ls; // list<data_type> variable name

  ls.push_back(1);        // ls = {1}    | Time: O(1)
  ls.emplace_back(5);     // ls = {1,5}  | Time: O(1)

  // In list, we use push_front or emplace_front instead of insert.
  // Insert is costly in vectors (O(n)), but push_front in list is cheap (O(1))
  // because list is built using doubly linked list.
  ls.push_front(3);       // ls = {3,1,5}  | Time: O(1)
  ls.emplace_front(56);   // ls = {56,3,1,5} | Time: O(1)

  // Access to front and back elements
  cout << "Front: " << ls.front() << endl; // 56 | Time: O(1)
  cout << "Back: " << ls.back() << endl;   // 5  | Time: O(1)

  // Remove elements from both ends
  ls.pop_front();  // Removes 56 | Time: O(1)
  ls.pop_back();   // Removes 5  | Time: O(1)

  // Insert and erase using iterator
  auto it = ls.begin();
  advance(it, 1); // Move iterator to second position | Time: O(n) (cz bidirectional)
  // advance function is used to move more then 1 step in a single move
  ls.insert(it, 99); // Insert 99 before second element | Time: O(1)
  ls.erase(--it);    // Erase 99                        | Time: O(1)

  // The rest functions are similar to vector:
  // begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap(), etc.

  // Check if list is empty
  if (ls.empty()) {
    cout << "List is empty" << endl;
  } else {
    cout << "List size: " << ls.size() << endl;
  }

  return 0;
}
