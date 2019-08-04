#include <stdio.h>
void checkprime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%2 == 0)
        {
            printf("%d not a prime no",n);
            break;
        }
    }
    if(i == n || n==1)
        printf("%d is Prime No",n);
}
int main()
{
    int n;
    printf("Enter A number: ");
    scanf("%d",&n);
    checkprime(n);
    return 0;
}
