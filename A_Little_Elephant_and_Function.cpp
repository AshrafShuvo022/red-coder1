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
  int num;
  cin >> num;
  vector<int> permutation(num);
  int start = 1;
  for (int i = 0; i < num; i++)
  {
    permutation[i] = start;
    start++;
  }
  for (int i = num - 1; i > 0; i--)
  {
    swap(permutation[i - 1], permutation[i]);
  }
  for (int i = 0; i < num; i++)
  {
    cout << permutation[i] << " ";
  }
  cout << endl;
  return 0;
}
