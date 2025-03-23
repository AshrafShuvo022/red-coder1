#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

int vowelCount()
{
  string phrase;
  getline(cin, phrase);
  //cin >> phrase ;
  int vowelCount = 0;
  for (int i = 0; i < phrase.length(); i++)
  {
    if (phrase[i] == 'a' || phrase[i] == 'e' || phrase[i] == 'i' || phrase[i] == 'o' || phrase[i] == 'u')
    {
      vowelCount++;
    }
  }
  return vowelCount;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  if (vowelCount() == 5 && vowelCount() == 7 && vowelCount() == 5)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}
