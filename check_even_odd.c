#include <stdio.h>

void check(int n)
{
    if(n%2 == 0)
        printf("%d is even",n);
    else
        printf("%d is odd",n);
}
int main()
{
    int n;
    printf("Enter A number: ");
    scanf("%d",&n);
    check(n);
    return 0;
}
