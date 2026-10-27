#include<stdio.h>
int main()
{
  float f,c,celsius,fahrenheit;
printf("enter the temperature in fahrenheit:");
scanf("%f",&f);
celsius = (f - 32) *5.0/9.0;
printf("%.2f F =%.2f C\n",f,celsius);
printf("enter temperature in celsius:");
scanf("%f",&c);
fahrenheit = (c * 9.0/5.0) + 32;
printf("%.2f c =%.2f F\n",c,fahrenheit);
return 0;
}
