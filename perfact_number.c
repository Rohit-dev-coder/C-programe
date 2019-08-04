//a perfact number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.
#include <stdio.h>
void perfact(int n)
{
    int i,sum=0;
    for(i=1; i<n ;i++)
        if(n%i == 0)
            sum+=i;
    if(sum == n)
        printf("%d is a perfact number\n",n);
    else
        printf("%d not a perfact number",n);
}
int main()
{
    int n,i=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    perfact(n);
    return 0;
}
