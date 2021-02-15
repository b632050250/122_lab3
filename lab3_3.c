#include<stdio.h>
int main()
{
    int k,i,a;
    scanf("%d",&k);
    for(i=2; k!=1; i++)
    {
        while(k%i==0)
        {
            printf("%d\n",i);
            k=k/i;
            if(k/i==0)
                printf("%d",k/i);
        }
    }
    return 0;
}
