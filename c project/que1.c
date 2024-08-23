#include<stdio.h>
void main(){
    float celsius,fahrenheit;
    printf("Enter temperature in celsius:");
    scanf("%f",&celsius);

    fahrenheit=(celsius*9/5)+32;
    printf("Temperature in fahrenheit is:%.2f",fahrenheit);
}