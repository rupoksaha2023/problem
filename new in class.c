#include<stdio.h>
#include<math.h>
double function(double sideA,double sideB,double sideC,double sideD,double angleA,double angleB,double h)
{
    double radangleA =(3.1416*angleA)/180;
    double radangleB =(3.1416*angleB)/180;
    h = sideB*sin(radangleA);
    double area = .5*(sideA+sideD)*h;
    return area;

}
int main()
{
    double sideA,sideB,sideC,sideD,angleA,angleB,h;
    printf("Enter sides of acute trapizoid:");
    scanf("%lf %lf %lf %lf",&sideA,&sideB,&sideC,&sideD);
    printf("Enter angle A:");
    scanf("%lf",&angleA);
    printf("Enter angle B:");
    scanf("%lf",&angleB);
   double area =function(sideA,sideB,sideC,sideD,angleA,angleB,h);
    printf("The area is %.2lf:",area);



    return 0;
}
