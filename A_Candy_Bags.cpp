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
  int count, first = 1;
  cin >> count;
  int bags = count * count;
  for (int i = 1; i <= count; i++)
  {
    for (int j = 1; j <= count / 2; j++)
    {
      cout << first << " " << bags << " ";
      bags--;
      first++;
    }
    cout << endl;
  }
  return 0;
}
