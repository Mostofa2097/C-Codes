#include<stdio.h>

int main()
{
  int n,array[100],g=0,p;

  for(int i=0;i<10;i++){
    scanf("%d",&array[i]);
  }
  for(int i=0;i<10;i++){
    if(array[i]>g){
        g==array[i];
        p=i+1;
    }
  }
  printf("%d\n", g);
 printf("%d\n", p);;
    return 0;
}
