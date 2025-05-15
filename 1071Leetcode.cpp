#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  string s, t , r = "" , ans = "";
  int flag = 1 ;
  cin >> s >> t ;
  unordered_set<char> ss , tt ;
  for (int i = 0; i < s.size(); i++)
  {
    ss.insert(s[i]) ;
  }
  for (int j = 0;j < t.size(); j++)
  {
    tt.insert(t[j]) ;
  }
  if(ss.size() != tt.size()){
   flag = 0 ;
  }else{
  
   auto itt = tt.begin() ;
   auto its = ss.begin() ;
   int size = tt.size() ;
   while(size > 0){ 
     if(*itt != *its){
      flag = 0 ;
      break ;
     }
     itt++ ; its++ ;
     ans += *itt ;
     size-- ;
    }
  }
if(flag == 1){
  cout << ans << endl ;
}else{
  cout << r << endl ;
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
