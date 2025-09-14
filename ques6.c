// Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the numer First no & Second no : ");
    scanf("%d %d ",&a, &b);
    c = a;
    a = b;
    b = c;
    printf("First no is %d Second no is %d",a,b);
    return 0;
}