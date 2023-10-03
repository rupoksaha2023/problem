#include<stdio.h>
#include<math.h>
double function(double a,double b,double c)
{
    double radb =(3.1416*b)/180;
    double radc =(3.1416*c)/180;
    double area1 = a*a*sin(radb);
    return area1;
}
int main () {
double a,b,c ;
printf("Enter a side:");
scanf("%lf", &a);
printf("Enter a angle:");
scanf("%lf", &b);
printf("Enter a angle:");
scanf("%lf", &c);
if(b+c!=180)
{
    printf("Invalid angles.The sum of angleB and angleC must be 180 degrees.\n");
    return 1;
}
double area1=function(a,b,c);
if(area1>0){
    printf("Area is %lf",area1);
}
return 0;
}
