#include <stdio.h>
int myfactorial(int n)
{
    int fact=1;
    for(;n>0;n--)
        fact *= n;
    return fact;
}
void check_strongno(int n)
{
    int sum=0,rem,temp = n;
    while(temp > 0)
    {
        rem = temp%10;
        temp = temp/10;
        sum += myfactorial(rem);
    }
    if(sum == n)
        printf("%d is a Strong No",n);
    else
        printf("%d not a strong no",n);
}
int main()
{
    int n;
    printf("Enter A number: ");
    scanf("%d",&n);
    check_strongno(n);
    return 0;
}
