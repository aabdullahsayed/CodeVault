//codeforces.com/problemset/problem/71/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a ;
  int n;
  cin>>n;
  for(int i = 0 ; i<n ; i++)
  {
  cin>>a;
  int x = a.size();
 
  if(a.size() > 10 )
    {
  a.erase(1, a.size()-2 );
  a.insert(1, to_string(x - 2) );
  cout<<a<<endl;
}
else cout<<a<<endl;
  }
  return 0 ;
}
