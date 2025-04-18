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

  // Pair is a part of the utility library in C++.
  // It allows us to store two heterogeneous objects as a single unit.
  // Useful when we want to associate one value with another.
  
  // pair<data_type, data_type>
  pair<int, int> firstPair = {2, 3};
  // Accessing elements of the pair:
  cout << firstPair.first << " and " << firstPair.second << endl; // Output: 2 and 3

  // Nested Pair Example:
  // Let's say in a school, each student has a unique ID and we want to store their name and phone number.
  // We can use nested pairs for this.
  pair<int, pair<string, string>> studentX = {123, {"Shuvo", "01681888062"}};
  pair<int, pair<string, string>> studentY = {124, {"Ashraf", "01681888063"}};

  if (studentX.first == 123) {
    cout << "Student Name: " << studentX.second.first << " "
         << "phone number: " << studentX.second.second << endl;
    // Output: Student Name: Shuvo phone number: 01681888062
  }
  if (studentY.first == 123) {
    cout << "Student Name: " << studentY.second.first << " "
         << "phone number: " << studentY.second.second << endl;
  }

  // The above part helps to understand how pair works and how we can use it to group related data.
  // Now let's consider a real-life case:
  // Suppose we want to store info of multiple students. Instead of declaring individual variables,
  // we can use vector of pairs.

  vector<pair<int, pair<string, string>>> student = {
    {123, {"Shuvo", "01681888062"}},
    {124, {"Ashraf", "01681888063"}}
  };

  // Now we want to get details of student with ID 124:
  for (int i = 0; i < student.size(); i++) {
    if (student[i].first == 124) {
      cout << "Student Name: " << student[i].second.first << " "
           << "phone number: " << student[i].second.second << endl;
    }
  }

  // Time Complexities:
  // pair creation: O(1)
  // accessing .first or .second: O(1)
  // vector traversal: O(n)

  return 0;
}
