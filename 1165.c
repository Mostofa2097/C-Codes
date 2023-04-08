#include<stdio.h>
int main()
{
    long long int i,n,c,j;
    scanf("%lld ",&i);
    while(i>0)
    {
        c=0;
        scanf("%lld",&n);
        if(n==1 || n==2 || n==3 || n==5 || n==7)
        {
            printf("%lld eh primo\n",n);
        }
        else if(n>=9)
        {
            for(j=2; j<9; j++)
            {
                if(n%j==0)
                    c++;
            }
            if(c>0)
            {
                printf("%lld nao eh primo\n",n);

            }
            else
            {
                printf("%lld eh primo\n",n);

            }
        }
        else
        {
            printf("%lld nao eh primo\n",n);

        }
        i--;
    }
}
