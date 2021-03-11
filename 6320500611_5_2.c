#include <stdio.h>
int main()
{
    int n,i,j,k,x,y,c,a,b,s;

    scanf("%d",&n);

    x = n - (n+1)%2;
    y = (x+1)/2;
    c = y;
    k = y;

    for(i=1; i<=(n+1)/2; i++)
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
        printf("\n");
    }

    if(n%2==0)
    {
        s = i-1;
    }
    else
    {
        s = i -2;
        a -=1;
        b +=1;
    }

    for(i=1;i<=s;i++)
    {
        for(j=1;j<=x;j++)
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
        printf("\n");
    }
}
