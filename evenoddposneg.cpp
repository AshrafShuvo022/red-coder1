#include <bits/stdc++.h>
using namespace std;

int main()
{
  
int n , p , count1 = 0, count2 = 0, count3 = 0, count4 = 0;
cin >> n ;
for(int i = 0 ; i < n ; i ++ )
{
   cin >> p ;
if(p % 2  == 0)
{
  count1++ ;
}

else
{
   count2++ ;
}

if(p < 0)
{
  count4++ ;
}
else if (p > 0)
{
  count3++ ;
}
}
cout << "Even: " << count1 << endl ;
cout << "Odd: " << count2 << endl ;
cout << "Positive: " << count3<< endl ;
cout << "Negative: " << count4 << endl ;

 return 0 ;
}