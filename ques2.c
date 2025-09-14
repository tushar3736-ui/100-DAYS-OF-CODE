// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    int a,b,sum,diff;
    printf("Enter the First & Second number : ");
    scanf("%d %d",&a,&b);
    sum = a + b ;
    diff = a - b ;
     printf("sum of %d and %d is %d and difference is %d",a,b,sum,diff);
    return 0;
}