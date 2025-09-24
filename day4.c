*//Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;       
    printf("enter first no");
    scanf("%d",&a); 
    printf("enter second no");      
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping first no is %d\n",a);
    printf("after swapping second no is %d\n",b);
    return 0;       
}