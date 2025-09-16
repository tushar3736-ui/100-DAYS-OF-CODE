// Q7: Write a program to swap two numbers without using a third variable.


#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first no and second no : ");
    scanf("%d %d", &a, &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("swap first no %d and second no is %d", a,b);

    return 0;
}