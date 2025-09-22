// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.


#include<stdio.h>
int main(){
    int p,r,t;
    float si;
    printf("Enter the principle rate time : ");
    scanf("%d %d %d",&p ,&r, &t);
    si = (p*r*t)/100.0;
    printf("simple interest is %f",si);
    return 0;
}