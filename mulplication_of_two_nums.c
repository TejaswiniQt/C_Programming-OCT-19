#include<stdio.h>

int main()
{
    int a,b,prod=0,temp;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    temp = b;
    while(temp > 0)
    {
        prod = prod + a;
        temp--;
    }
    printf("The product of %d and %d is : %d\n",a,b,prod);
    return 0;

}