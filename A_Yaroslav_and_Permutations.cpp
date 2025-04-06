#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  int n, temp;
  cin >> n;
  map<int, int> checkingFreq;
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    checkingFreq[temp]++;
    if (checkingFreq[temp] > (n + 1) / 2)
    {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int testCase = 1;
  // cin >> testCase;
  while (testCase--)
  {
    solve();
  }
  return 0;
}