#include <bits/stdc++.h>
using namespace std;

int main()
{
 int x, y,i;

 cin>>x>>y;
 int k;
 if(y<x){
    k=x;
    x=y;
    y=k;
 }



 for(i = (x + 1); i < y; ++i)
 {
  if(i % 5 == 2 || i%5==3){
   cout<<i<<endl;
  }
 }



 return 0;
}
