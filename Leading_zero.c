#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    while(m<=n)
    {
        printf("%.2d ",m);
        m++;
    }
    return 0;
}
