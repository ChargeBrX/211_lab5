#include <stdio.h>
int main()
{
    int n,i,j=1,x,b[3]={2,3,5},u,o=1;

    scanf("%d",&n);

    int a[n];

    a[0] = 1;

    for(i=2;j<n;i++)
    {
        x = i;
        for(u=0;u<3;)
        {
            if(x%b[u]==0)
            {
                x /= b[u];
            }
            else
            {
                u++;
            }
        }
        if(x==1)
        {
            a[j] = i;
            j++;
        }
    }

    printf("%d",a[n-1]);
}
