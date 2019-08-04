#include <stdio.h>

void armstrong(int n)
{
    int rem;
    int temp = n;
    int sum=0;
    while(temp > 0)
    {
        rem = temp%10;
        temp = temp/10;
        sum = sum + rem*rem*rem;
    }
    if(sum == n)
        printf("%d is a armstrong number\n",n);
    else
        printf("%d not a armstrong number\n",n);
}
int main()
{
    int n;
    printf("Enter A number: ");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}
