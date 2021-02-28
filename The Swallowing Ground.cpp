#include<stdio.h>
int main()
{
    int t,n,flag,dy,y1,y2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        flag=0;
        scanf("%d %d",&y1,&y2);
        dy=y1-y2;
        n=n-1;
        while(n--)
        {
            scanf("%d %d",&y1,&y2);
            {
                if(dy!=y1-y2)
                    flag=1;
            }
        }
        if(flag==1)
            printf("no\n");

        else
            printf("yes\n");
        if(t)
            printf("\n");
    }
    return 0;
}
