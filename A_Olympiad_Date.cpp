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
  int testCase ;
  cin >> testCase ;
  while (testCase--)
  {
    int n ;
    cin >> n ;
    vector<int> digits(n) ;
    for (int i = 0; i < n; i++)
    {
       cin >> digits[i] ;
       
    }
    int count0 = 0 , count1 = 0 , count2 = 0 , count3 = 0 , count5 = 0, flag = 0 ;
    for (int i = 0; i < n; i++)
    {
      if(digits[i] == 0 && count0 < 3){
        count0++ ;
      }else if(digits[i] == 1 && count1 < 1){
        count1++ ;
      }else if(digits[i] == 2 && count2 < 2){
        count2++ ;
      }else if(digits[i] == 3 && count3 < 1){
        count3++ ;
      }else if(digits[i] == 5 && count5 < 1){
        count5++ ;
      }

      if(count0 == 3 && count1 == 1 && count2 == 2 && count3 == 1 && count5 == 1){
        cout << i+1 << endl ;
        flag = 1 ;
        break ;
      }
    }
    if(flag == 0){
      cout << "0" << endl ;
    }
  }
  
  return 0;
}
