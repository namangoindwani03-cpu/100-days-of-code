*// Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
    int a,b,temp;       
    printf("enter first no");
    scanf("%d",&a); 
    printf("enter second no");
    scanf("%d",&b); 
    temp=a;
    a=b;
    b=temp;
    printf("after swapping first no is %d\n",a);
    printf("after swapping second no is %d\n",b);
    return 0;       

}