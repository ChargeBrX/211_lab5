#include <stdio.h>
int main()
{
    int n,i,j,k,x,y;

    scanf("%d",&n);

    x = n - (n+1)%2;
    y = (x+1)/2;

    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(j%y!=0)
            {
                printf("_");
            }
            else
            {
                printf("*");
            }
        }

        printf("\n");
    }
}
