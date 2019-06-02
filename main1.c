#include <stdio.h>
long int fact(int);
int main()
{
    int a,b;
    printf ("Enter the number to find the factorial ");
    scanf ("%d",&a);
    b=fact(a);
    printf ("The factorial is %ld",b);
}
long int fact(int n)
{
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}
