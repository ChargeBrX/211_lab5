#include <stdio.h>
int main()
{
    int n,m,i,j;

    scanf("%d",&n);
    scanf("%d",&m);

    int a[n][n],b[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            b[i][j] = a[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%2d ",b[i][j]);
        }
        printf("\n");
    }
}
