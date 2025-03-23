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
  int n, m;
  cin >> n >> m;
  int count = 0;
  for (int a = 0; a * a <= n; a++)
  {
    for (int b = 0; b * b <= m; b++)
    {
      if (a * a + b == n && a + b * b == m)
      {
        count++;
      }
    }
  }
  cout << count << endl;
  return 0;
}
