#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    t = n;
    while(t>0)
    {
        sum = sum + (t%10)*(t%10)*(t%10);
        //sum += (t%10)*(t%10)*(t%10);
        t = t/10;
        // t /= 10;
    }
    if(sum == n)
    {
        printf("%d is a Armstrong number\n",n);
    }
    else
        printf("%d is NOT a Armstrong number\n",n);
    return 0;
}