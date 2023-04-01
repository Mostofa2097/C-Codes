#include <stdio.h>
int main(){

  int d,m,y;
  scanf("%d/%d/%d",&d,&m,&y);

   if(m<10)printf("0");
  printf("%d/",m);
    if(d<10)printf("0");
  printf("%d/",d);
   if(y<10)printf("0");
  printf("%d\n",y);

  if(y<10)printf("0");
  printf("%d/",y);
  if(m<10)printf("0");
  printf("%d/",m);
  if(d<10)printf("0");
  printf("%d\n",d);

    if(d<10)printf("0");
  printf("%d-",d);
   if(m<10)printf("0");
  printf("%d-",m);
   if(y<10)printf("0");
  printf("%d\n",y);

  return 0;

}
