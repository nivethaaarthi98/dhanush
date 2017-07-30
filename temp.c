#include<stdio.h>
int main()
{
double firstnumber,secondnumber,temporaryvariable;
printf("enter first number");
scanf("%lf",&firstnumber);
printf("enter second number");
scanf("%lf",&secondnumber);
temporaryvariable=firstnumber;
firstnumber=secondnumber;
secondnumber=temporaryvariable;
printf("after swapping,firstnumber=%.2lf",firstnumber);
printf("after swapping,secondnumber=%.2lf",secondnumber);
return 0;
}
