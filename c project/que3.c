#include<stdio.h>
void main(){
    int angle1 , angle2 ,angle3;
    printf("Enter the first angle of triangle: ");
    scanf("%d",&angle1);
    printf("Enter the second angle of triangle: ");
    scanf("%d",&angle2);

    angle3 = 180 -(angle1 + angle2);
    printf(" third angle of tringle will be = %d",angle3);
 
}