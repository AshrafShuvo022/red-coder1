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
  int n;
  cin >> n;
  vector<int> holds(n);
  for (int i = 0; i < n; i++)
  {
    cin >> holds[i];
  }
  int minT = INT_MIN;
  int minT2 = INT_MAX;
  for (int i = 1; i < n; i++)
  {
    minT = max(minT, holds[i] - holds[i - 1]);
  }
  for (int i = 1; i < n - 1; i++)
  {
    minT2 = min(minT2, holds[i + 1] - holds[i - 1]);
  }

  cout << max(minT, minT2) << endl;
  ;
  return 0;
}
