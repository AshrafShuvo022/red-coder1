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
  int p, n, x;
  cin >> p >> n;
  vector<bool> hashBuckets(p, false);
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    x = x % p;
    if (hashBuckets[x] == false)
    {
      hashBuckets[x] = true;
    }
    else
    {
      cout << ++i << endl;
      return 0;
    }
  }
  cout << "-1" << endl;

  return 0;
}
