#include <stdio.h>
#include <math.h>
void palidrome(int n)
{
    int newno=0,rem,temp = n;
    while(temp > 0)
    {
        rem = temp%10;
        temp = temp/10;
        newno = newno*10 + rem;
    }
    if(n == newno)
    {
        printf("Palidrome no ==  oldno ==> %d || newNO ===> %d",n,newno);
    }
    else
         printf("Not Palidrome no === oldno ==> %d || newNO ===> %d",n,newno);
}
int main()
{
    int n;
    printf("Enter A number: ");
    scanf("%d",&n);
    palidrome(n);
    return 0;
}

