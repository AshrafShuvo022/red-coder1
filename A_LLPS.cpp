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
  multiset<char> n;
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
    n.insert(s[i]);
  }
  s.clear() ;
  char maxx = *max_element(n.begin(), n.end());
  for (auto it : n)
  {
    if (it == maxx)
    {
      cout << maxx;
    }
  }
  cout << endl;
  return 0;
}
