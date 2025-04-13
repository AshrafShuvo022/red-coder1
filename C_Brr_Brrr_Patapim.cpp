#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  int n;
  cin>>n;
  int x;
  vector<int> code(2*n+1);
  vector<bool> visited(2*n+1);
  for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
          cin>>x;
          code[i+j]=x;
          visited[x]=1;
      }
  }
  for(int i=1;i<=2*n;i++){
      if(!visited[i]) code[1]=i;
  }
  for(int i=1;i<=2*n;i++) cout<<code[i]<<" ";
  cout<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int testCase = 1;
  cin >> testCase;
  while (testCase--)
  {
    solve();
  }
  return 0;
}
