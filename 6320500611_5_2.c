#include <stdio.h>
int main()
{
    int n,i,j,k,x,y,c,a,b;

    scanf("%d",&n);

    x = n - (n+1)%2;
    y = (x+1)/2;
    c = y;
    k = y;

    for(i=1; i<=n; i++)
    {
        if(i<=(n+1)/2)
        {
            for(j=1; j<=x; j++)
            {
                if(k!=j&&c!=j)
                {
                    printf("_");
                }
                else
                {
                    printf("*");
                }
            }
            a = k;
            b = c;
            k++;
            c--;
        }
        else
        {
            for(j=1; j<=x; j++)
            {
                if(a!=j&&b!=j)
                {
                    printf("_");
                }
                else
                {
                    printf("*");
                }
            }
            a--;
            b++;
        }
        printf("\n");
    }

}
