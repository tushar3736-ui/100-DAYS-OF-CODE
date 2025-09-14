// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
    int length,breadth,area,perimeter;
    printf("Enter Length & Breadth : ");
    scanf("%d %d",&length,&breadth);
    area= length*breadth;
    perimeter = 2*(length+breadth);
    printf("Area and Perimeter of rectangle is %d and %d",area,perimeter);
    return 0;
}
