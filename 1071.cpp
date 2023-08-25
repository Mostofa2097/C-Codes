#include <bits/stdc++.h>
using namespace std;

int main()
{
 int a,b,mx,mn,sum=0,i;


 cin>>a>>b;
if(a<b){
    mx=b;
    mn=a;
}
else{
    mx=a;
    mn=b;
}

for(i=(mn+1);i<mx;++i){
        if(i%2!=0){
           sum = sum+i;
        }

}

cout<<sum<<endl;

 return 0;

}
