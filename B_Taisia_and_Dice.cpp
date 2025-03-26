#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  int n, s, r;
  cin >> n >> s >> r;
  vector<int> topNum(n);
  topNum[n - 1] = s - r;
  n = n - 1;
  int count = r / n;
  for (int i = 0; i < n; i++)
  {
    topNum[i] = count;
  }
  count = r % n;
  for (int i = 0; i < n; i++)
  {
    if (topNum[i] < topNum[n] && count > 0)
    {
      topNum[i]++;
      count--;
    }
    else if (count == 0)
    {
      break;
    }
    else
    {
      continue;
    }
  }
  for (int i = 0; i < n + 1; i++)
  {
    cout << topNum[i] << " ";
  }
  cout << endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int testCase;
  cin >> testCase;
  while (testCase--)
  {
    solve();
  }
  return 0;
}
