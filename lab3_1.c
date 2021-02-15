#include<stdio.h>
int main()
{
    int b,c,max=0,i=0,e,d;
    for(b=0; b<5; b++)
    {
        c=0;
        for(e=0; e<4; e++)
        {
            scanf("%d",&d);
            c+=d;
        }
            if(max<c)
            {
                max=c;
                i=b+1;
            }
    }
    printf("%d %d",i,max);
    return 0;
}
