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
  int k ;
  cin >> k ;
  k = k*2 ;
  unordered_map<char,int> check ;
  for (int i = 0; i < 16; i++)
  {
    char ch ;
    cin >> ch ;
    if(ch != '.'){
      check[ch]++ ;
    }
  }
  for (auto& itr : check)
  {
    if(itr.second > k)
    {
      cout << "NO" << endl ;
      return 0 ;
    }else
       continue ;
  }
   cout << "YES" << endl ;
  return 0;
}
