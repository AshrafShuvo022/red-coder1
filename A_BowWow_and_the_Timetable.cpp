#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  string binaryNum;
  cin >> binaryNum;
  ll count = 0;
  for (int i = 0; i < binaryNum.length(); i++)
  {
    if (binaryNum[i] == '1')
    {
      count++;
    }
    if (count > 1)
    {
      break;
    }
  }
  //cout << count << endl ;
  //cout << binaryNum.length() << endl ; 
  if (count == 1)
  {
    cout << (binaryNum.length()) / 2 << endl;
    return;
  }
  else if (binaryNum == "0" )
  {
    cout << 0 << endl;
    return ;
  }
  else
  {
    cout << (binaryNum.length() +1) / 2 << endl;
    return ;
  }
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
