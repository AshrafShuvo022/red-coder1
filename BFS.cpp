#include <bits/stdc++.h>
using namespace std;

int main ()
{
   
  int node ; queue <int> q ;
  int i = 3 ;
  int visited[7] = {0,0,0,0,0,0,0} ;
  int graph[7][7] ={
   {0,1,1,0,0,0,0},
   {1,0,0,0,0,0,0},
   {1,0,0,1,1,1,0},
   {0,0,1,0,0,0,0},
   {0,0,1,0,0,0,0},
   {0,0,1,0,0,0,1},
   {0,0,0,0,0,1,0}
  };
 cout << i << endl ;
 visited[i] = 1 ;
 q.push(i) ;
 while(!q.empty())
 {
  node = q.front() ;
  q.pop() ;
 for (int j = 0; j < 8; j++)
 {
    if(graph[node][j] == 1 && visited[j] == 0)
    {
      cout << j << endl ;
      visited[j] = 1 ;
      q.push(j) ;
    }
 }
 }
  return 0 ;

}