//Write a program to input two numbers and display their sum.
#include<stdio.h>
int main(){
    int a,b,sum;
    printf("Enter the First & Second number : ");
    scanf("%d %d",&a,&b);
    sum = a + b ;
    printf("sum of %d and %d is %d",a,b,sum);
    return 0;
}
