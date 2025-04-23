#include <bits/stdc++.h>
using namespace std;

//----------------------------------------
// 🌳 SET
//----------------------------------------
void sett() {
  set<int> st;

  st.insert(1);       // {1}
  st.insert(3);       // {1,3}
  st.insert(5);       // {1,3,5}
  st.insert(1);       // {1,3,5} - duplicates are ignored
  st.emplace(5);      // {1,3,5} - also ignores duplicates

  // Useful functions: begin(), end(), rbegin(), rend(), size(), empty(), swap()

  auto it = st.find(3);   // Returns iterator to element 3 if found, else st.end()
  auto it2 = st.find(6);  // Not found → returns st.end()

  st.erase(5);        // Removes value 5 → {1,3}

  int countt = st.count(4);  // 1 if exists, else 0 (always 0 or 1 in set)
  countt -= st.count(5);     // subtract if 5 exists

  // Bounds (only work in ordered containers)
  auto lb = st.lower_bound(2); // First element >= 2
  auto ub = st.upper_bound(3); // First element > 3
}

/*
🕒 Time Complexities for set:
- insert(), erase(), find(), count(), lower_bound(), upper_bound() → O(log n)
- size(), empty(), begin(), end() → O(1)
*/

//----------------------------------------
// 🌳 MULTISET
//----------------------------------------
void multiiSet() {
  multiset<int> st;

  st.insert(1);   // {1}
  st.insert(1);   // {1,1}
  st.insert(1);   // {1,1,1}
  st.emplace(2);  // {1,1,1,2}

  st.erase(1);    // Erases **all occurrences** of 1 → {2}

  st.insert(1);
  st.insert(1);
  st.insert(1);   // {1,1,1,2}
  int cnt = st.count(1); // cnt = 3

  // To erase only one occurrence of 1
  st.erase(st.find(1)); // {1,1,2}

  // lower_bound and upper_bound also work
  auto lb = st.lower_bound(1); // First element >= 1
  auto ub = st.upper_bound(1); // First element > 1
}

/*
🕒 Time Complexities for multiset:
- insert(), erase(iterator), find(), count(), lower_bound(), upper_bound() → O(log n)
- erase(value) → O(log n) per value (erases all occurrences)
- size(), empty() → O(1)
*/

//----------------------------------------
// 🔀 UNORDERED SET
//----------------------------------------
void unorderedSet() {
  unordered_set<int> us;

  us.insert(3);
  us.insert(1);
  us.insert(5);
  us.insert(3); // duplicates ignored

  // Cannot use lower_bound or upper_bound → no ordering
  // Elements are stored in random order (hash table based)

  us.erase(1);         // Removes value 1 if exists
  us.find(3);          // Returns iterator to 3 if exists
  bool exists = us.count(5); // 1 if exists, 0 if not
}

/*
🕒 Time Complexities for unordered_set (Average Case):
- insert(), erase(), find(), count() → O(1)
- Worst case → O(n) (rare, due to hash collisions)

❌ Does NOT support:
- lower_bound()
- upper_bound()
- sorted iteration
*/

//----------------------------------------
// 💡 Main Notes
//----------------------------------------
int main() {
  /*
  STL SET FAMILY OVERVIEW:
  --------------------------
  1. set              → Sorted + Unique
  2. multiset         → Sorted + Allows duplicates
  3. unordered_set    → Unsorted + Unique
  4. unordered_multiset → Unsorted + Allows duplicates

  ✅ Use set/multiset when order matters or you need lower/upper bound
  ✅ Use unordered_set when fast lookups matter and order doesn't
  ✅ Use multiset/unordered_multiset when duplicates are needed
  */
}
