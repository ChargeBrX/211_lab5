#include <stdio.h>
int main()
{
    int n,i,j,k,x;

    scanf("%d",&n);

    x = n - (n+1)%2;

    printf("%d",x);
}
