#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n ;
    char x = 'a', y = 'A' , z ;
    int ct = 0  ;
   cin >> n ;
   set <char> mri ;
   for (int i = 0; i < n; i++)
   {
      cin >> z ;
      mri.insert(z) ;
   }
   
   if(mri.size() < 26)
   {
    cout <<"NO"<< endl ;
   }
   else{
   for (int i = 0; i < 26; i++)
   {
      if(mri.count(x) || mri.count(y))
      {
         ct+=1;
      }
      x++ , y++ ;
   }
  
    if(ct == 26){
    cout <<  "YES" << endl ;
    }
    else
    {
      cout <<"NO" << endl ;
    }   
   }
   
   return 0 ;
}