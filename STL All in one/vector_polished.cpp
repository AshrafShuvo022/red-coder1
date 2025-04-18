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

  // Vector is an updated container from array. We use it instead of using array for different facilities.
  // One of the main advantages is dynamic size. In array, we have to declare its size and that is fixed.
  // In case we need to store another data, we can't do it because size is fixed.
  // In vector, it can grow dynamically. Another benefit is better memory management.

  // Example:
  int arr[5] = {1, 2, 3}; 
  // Here the size is 5 but only 3 ints are stored. So, 2 blocks of memory are unused.

  vector<int> ar = {1, 2, 3}; 
  // Vector dynamically allocates memory only for given elements.

  // Declare vector
  vector<int> v; // vector<data_type> container_Name ;

  // Insert a data in a vector using two functions:
  v.push_back(1);       // O(1) amortized
  v.emplace_back(1);    // O(1) amortized, slightly faster than push_back

  // If we need to store group of data, we can use pair within vector:
  vector<pair<int,int>> vec;
  vec.push_back({1, 2});     // O(1)
  vec.emplace_back(2, 3);    // O(1)

  // Declare a vector with a specific size:
  vector<int> v2(5); // O(n)

  // Declare a vector with size n and initialize all with value m:
  vector<int> v1(5, 100); // v1 = {100,100,100,100,100}
  v1.push_back(1); // v1 = {100,100,100,100,100,1} O(1) amortized

  // Copy a full vector into a new vector:
  vector<int> v3(v1); // O(n)

  // Accessing vector elements using iterator
  auto itr = v1.begin(); // points to the beginning, O(1)
  cout << *itr << endl;  // output 100

  // Print all elements:
  for (auto itrr = v1.begin(); itrr < v1.end(); itrr++) {
    cout << *itrr << endl;
  }

  // Iterator functions:
  // let v1 = {1,2,3,4,5,6}
  v1.end();     // points to just after the last element, O(1)
  v1.rbegin();  // reverse begin, points to last element, O(1)
  v1.rend();    // reverse end, points before the first element, O(1)
  v1.rend() + 1; // points to index 0

  // Deletion from vector:
  vector<int> v5 = {10, 20, 12, 23, 26, 28, 30};
  v5.erase(v5.begin()); // delete 1st element, O(n)
  v5.erase(v5.begin() + 2, v5.begin() + 5); // delete range, O(n)

  // Insert function:
  vector<int> v6 = {100, 100}; // v = {100, 100}
  v6.insert(v6.begin(), 300); // v = {300, 100, 100} O(n)
  v6.insert(v6.begin() + 1, 40); // v = {300, 40, 100, 100} O(n)
  v6.insert(v6.begin() + 1, 3, 24); // insert 24 three times O(n)

  // Insert another vector into existing vector:
  vector<int> copy(3, 24); // copy = {24, 24, 24}
  v6.insert(v6.begin(), copy.begin(), copy.end()); // O(n + m)

  // Pop back
  vector<int> v7 = {20, 12, 30};
  v7.pop_back(); // removes last element, O(1)

  // Size
  v7.size(); // returns number of elements, O(1)

  // Swap
  vector<int> a = {12, 13, 14};
  vector<int> b = {10, 11};
  a.swap(b); // a = {10,11}, b = {12,13,14} O(1)

  // Clear
  a.clear(); // empties vector, O(n)

  // Check if empty
  a.empty(); // returns true if empty, O(1)

  return 0;
}
