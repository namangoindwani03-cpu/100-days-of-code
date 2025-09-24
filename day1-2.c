//*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


#include<stdio.h>
int main()
{
    int a,b;            
    int sum,diff,prod,quot;

    printf("enter first no");
    scanf("%d",&a);


    printf("enter second no");
    scanf("%d",&b);



    sum=a+b;
    diff=a-b;
    prod=a*b;
    quot=a/b;
    printf("sum is %d\n",sum);
    printf("difference is %d\n",diff);
    printf("product is %d\n",prod);
    printf("quotient is %d\n",quot);
    return 0;
}

