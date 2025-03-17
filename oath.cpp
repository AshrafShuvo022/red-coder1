#include<bits/stdc++.h>
using namespace std;

int main()

{
  long long x ,y ;
  cin >> x ;
  vector <long long> oath ;

  for (int i = 0; i < x; i++)
  {
     cin >> y ;
     oath.push_back(y) ;
  }
  y = 0 ;
  sort(oath.begin() , oath.end()) ;
  int m = oath.size();
  if(m < 3 )
  {
    cout << "0" << endl ;
  } 
  else
      {
        for (int i = 0; i < x; i++)
        {
           if(oath[i] > oath[0] && oath[i] < oath[x-1])
           {
            y++ ;
           }
        }
        cout << y << endl;
      }
  return 0 ;
}