// Q5: Write a program to convert temperature from Celsius to Fahrenheit.


#include<stdio.h>
int main(){
    int C;
    printf("Enter the C ");
    scanf("%d",&C);
    float f;
    f = (9.0/5)*C+32;
    printf("\nF is %f",f);
    return 0;

}