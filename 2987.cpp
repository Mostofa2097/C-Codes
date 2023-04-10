#include <iostream>
using namespace std;

 int main(){
       char ch;
       cin>>ch;

   char start ='A';
   if(ch>='a'&&ch<='z'){
    start = 'a';
   }

   cout<<ch - start +1;
return 0;

}
