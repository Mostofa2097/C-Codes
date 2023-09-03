#include <stdio.h>
int main()
{
    int x,y,i,j;
    scanf("%d %d",&x,&y);
    for(i=1;i<=y;i++)
	{

	    for(j=0;j<x;j++){
         printf("%d",i);
         printf('\n');
	    }

	}

    return 0;
}
