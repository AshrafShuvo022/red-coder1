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
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> points(n);
  for (int i = 0; i < n; i++)
  {
    cin >> points[i].first >> points[i].second;
  }
  long double distance = 0;
  for (int i = 0; i < n - 1; i++)
  {
    int temp1 = pow((points[i].first - points[i + 1].first), 2);
    int temp2 = pow((points[i].second - points[i + 1].second), 2);
    distance += sqrt(temp1 + temp2);
  }

  long double timeWasted = (distance * k) / 50;
  cout << fixed << setprecision(9) << timeWasted << endl;
  return 0;
}
