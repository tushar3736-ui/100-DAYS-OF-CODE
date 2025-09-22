// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


#include<stdio.h>
int main(){
    int h,m,s,n;
    printf("Enter the Second : ");
    scanf("%d",&n);
    s = n%60;
    n = n/60;
    m = n%60;
    h = n/60;
    printf("Hour %d minute %d second %d",h,m,s);
    return 0;
}