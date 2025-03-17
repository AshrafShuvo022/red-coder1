#include <bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0) ;
int count , x , ch = 0 , bi = 0 , ba = 0; 
cin >> x ;
cout << x % 0 << endl ;
//cin >> count ;
for (int i = 1; i <=count; i++)
{
   cin >> x ;
   if(i%3 == 1){
    ch += x ;
   }else if(i%3 == 2){
    bi += x ;
   }else 
        ch += x ;
}

 if(ch > bi && ch > ba){
  //cout << "chest" << endl ;
 }else if (bi > ch && bi > ba ){
 //cout << "biceps" << endl ;
 }
 else  
   //cout << "back" << endl ;

  return 0 ;
}