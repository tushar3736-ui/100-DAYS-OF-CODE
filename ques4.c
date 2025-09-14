// Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(){
    float r;
    float area, circumference;
    float pi = 3.14;
    printf("Enter the Radius ");
    scanf("%f",&r);
    area = pi*r*r;
    circumference = 2*pi*r;
    printf("Area of circle is %f and circumference is %f",area,circumference);
    return 0;
}