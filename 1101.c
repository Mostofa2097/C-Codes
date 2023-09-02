#include <stdio.h>
int main(){

 int s,e,i,sum,sup;

 while(1){

    scanf("%d%d",&s,&e);
    if(s==0){
        break;
    }
    if(e==0){
        break;
    }
    if(s>e){
        sup=s;
        s=e;
        e=sup;
    }
    sum=0;
    for(i=s;i<=e;i++){
        printf("%d ",i);
        sum+=i;
    }
    printf("Sum=%d\n",sum);



 }
 return 0;

}
