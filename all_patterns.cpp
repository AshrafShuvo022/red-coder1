#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back
void pattern4(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
       cout << i ;
    }
    cout << endl ;
  }
  
}
void pattern3(int n)
{
  for (int i = 1; i <= n; i++)
  {
  for (int j = 1; j <= i; j++)
  {
    cout << j ;
  }
  cout << endl ;
  }
  
}
void pattern2(int n )
{
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j <= n; j++)
      {
         cout << "*" ;
      }
      cout << endl ;
    }
    
}
void pattern5(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n-i ; j++)
    {
      cout << "*" ;
    }
    cout << endl ;
  }
}
void pattern6(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n-i+1 ; j++)
    {
      cout << j ;
    }
    cout << endl ;
  }
}
void pattern7(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n-i ; j++)
    {
      cout << " " ;
    }
    for (int j = 1; j <= 2*i-1 ; j++)
    {
      cout << "*" ;
    }
    for (int j = 1; j < n-i ; j++)
    {
      cout << " " ;
    }
    cout << endl ;
  }
}
void pattern8(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i-1 ; j++)
    {
      cout << " " ;
    }
    for (int j = 1; j <= 2*(n-i) + 1 ; j++)
    {
      cout << "*" ;
    }
    for (int j = 1; j <= i-1 ; j++)
    {
      cout << " " ;
    }
    cout << endl ;
  }
}
void pattern9(int n)
{
  /** Pattern 9 --
  we have to print half of a diamond shape pattern. let Assume N = 4,
  pattern should like this one-
  *
  **
  ***
  ****
  ***
  **
  *
*/
for (int i = 1; i <= 2*n -1; i++)
{
  int pointer = i ;
  if(i > n) 
  { 
    pointer = 2*n - i ;
  }
  for (int j = 1; j <= pointer; j++)
  {
    cout << "*" ;
  }
cout << endl ;
}
}
void pattern10(int n)
{
  /** Pattern 10 --
  we have to print pattern. let Assume N = 5,
  pattern should be like this one-
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/
  for (int i = 1; i <= n; i++)
  {
    int pointer = 1;
    if (i % 2 == 0)
    {
      pointer = 0;
    }
    for (int j = 1; j <= i; j++)
    {
      cout << pointer << " ";
      pointer = 1 - pointer;
    }
    cout << endl;
  }
}
void pattern11(int n)
{
  /** Pattern 10 --
  we have to print pattern. let Assume N = 4,
  pattern should be like this one-
1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1
*/
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
        cout << j ;
    }
    for (int j = 1; j <= 2*(n-i); j++)
    {
        cout << " "  ;
    }for (int j = i; j >= 1; j--)
    {
        cout << j ;
    }
    cout << endl;
  }
}
void pattern12(int n)
{
  /** Pattern 12 --
  we have to print pattern. let Assume N = 4,
  pattern should be like this one-
1
2 3
4 5 6
7 8 9 10
*/
  int x = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << x << " ";
      x++;
    }
    cout << endl;
  }
}
void pattern13(int n)
{
  /** Pattern 13 --
  we have to print pattern. let Assume N = 4,
  pattern should be like this one-
A
A B
A B C
A B C D
*/
  for (int i = 1; i <= n; i++)
  {
    for (char j = 'A'; j < 'A'+i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
void pattern14(int n)
{
  /** Pattern 14 --
  we have to print pattern. let Assume N = 4,
  pattern should be like this one-
A B C D E
A B C D
A B C
A B
A
*/
  for (int i = 1; i <= n; i++)
  {
    for (char j = 'A'; j <= 'A'+(n-i); j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
void pattern15(int n)
{
  /** Pattern 15 --
  we have to print pattern. let Assume N = 5,
  pattern should be like this one-  

A
BB
CCC
DDDD
EEEEE
*/
  for (int i = 1; i <= n; i++)
  {
    char x = 'A' + (i-1) ;
    for (int j = 1; j <= i; j++)
    {
      cout << x ;
    }
    cout << endl;
  }
}
void pattern16(int n)
{
  /** Pattern 16 --
  we have to print pattern. let Assume N = 5,
  pattern should be like this one-  

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n-i; j++)
    {
      cout << " " ;
    }
    int total = 2*i - 1 ;
    char ch = 'A' ;
     for (int j = 1; j <= 2*i - 1; j++)
    {
      if(j <= i){
        ch = 'A' + j -1 ;
        cout << ch ;
      }else{
        ch-- ;
        cout << ch ;
      }
    } 
    for (int j = 1; j <= n-i; j++)
    {
      cout << " " ;
    }
    cout << endl;
  }
}
void pattern17(int n)
{
  /** Pattern 17 --
  we have to print pattern. let Assume N = 5,
  pattern should be like this one-  

E
D E
C D E
B C D E
A B C D E

*/
  for (int i = 1; i <= n; i++)
  {
    char x = n + 'A' - i ;
    for (int j = 1; j <= i; j++)
    {
      cout << x << " ";
      x++ ;
    }
    cout << endl;
  } 
}
void pattern18(int n)
{
  /** Pattern 18 --
  we have to print pattern. let Assume N = 5,
  pattern should be like this one-  

 **********
 ****  ****
 ***    ***
 **      **
 *        *
 *        *
 **      **
 ***    ***
 ****  ****
 **********
*/
  for (int i = 1; i <= 2*n; i++)
  {
    int limit , boundary ;
    if(i > n){
     limit = 2*((2*n)-i) ;
     boundary = i-n ;
    }else{
      limit = 2*(i-1) ;
      boundary = n-i+1 ;
    }
    for (int j = 1; j <= boundary; j++)
    {
       cout << "*" ;
    }
    for (int j = 1; j <= limit; j++)
    {
       cout << " " ;
    }
    for (int j = 1; j <= boundary; j++)
    {
       cout << "*" ;
    }
    cout << endl;
  } 
}
void pattern19(int n)
{
  /** Pattern 19 --
  we have to print pattern. let Assume N = 5,
  pattern should be like this one-  


 *        *
 **      **
 ***    ***
 ****  ****
 **********
 ****  ****
 ***    ***
 **      **
 *        *
*/
  for (int i = 1; i <= 2*n-1; i++)
  {
    int limit , boundary ;
    if(i > n){
     limit = 2*(i-n) ;
     boundary = 2*n - i ;
    }else{
      limit = 2*(n-i)  ;
      boundary = i ;
    }
    for (int j = 1; j <= boundary; j++)
    {
       cout << "*" ;
    }
    for (int j = 1; j <= limit; j++)
    {
       cout << " " ;
    }
    for (int j = 1; j <= boundary; j++)
    {
       cout << "*" ;
    }
    cout << endl;
  } 
}
void pattern20(int n)
{
    /** Pattern 20 --
  we have to print pattern. let Assume N = 5,
  pattern should be like this one-  

 **********
 *        *
 *        *
 *        *
 *        *
 *        *
 *        * 
 **********
*/
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (j == 1 || j == n || i == 1 || i == n)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n = 6;
  pattern20(n) ;
  return 0;
}