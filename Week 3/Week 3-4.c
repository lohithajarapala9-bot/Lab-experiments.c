#include<stdio.h>
int main()
{
  float speed,time,distance;
printf("enter speed and time:");
scanf("%f%f",&speed,&time);
distance = speed * time;
printf("distance travelled = %.2f",distance);
}
