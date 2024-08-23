#include<stdio.h>
void main(){
    int basicsalary, hra, da ,ta,grosssalary;
    printf("Enter the basic salary:");
    scanf("%d",&basicsalary);

    hra = basicsalary*10/100;
    da = basicsalary*5/100;
    ta = basicsalary*8/100;
    grosssalary = basicsalary + hra + da + ta;

    printf("Gross salary is: %d",grosssalary);
}