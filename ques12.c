//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    if(n>0)
    printf("Number %d is positive ",n);
    else if(n<0)
    printf("Number %d is negative",n);
    else if(n==0)
    printf("Number is not positive nor negative");
    return 0;
}