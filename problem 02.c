#include <stdio.h>
int main (){
float angle1, angle2, angle3 ;
printf ("Enter angle 1:");
scanf ("%f",&angle1);
printf ("Enter angle 2:");
scanf ("%f",&angle2);
printf ("Enter angle 3:");
scanf ("%f",&angle3);
if (angle1<= 0 || angle2<= 0 || angle3<= 0 || angle1>= 180 || angle2>= 180 || angle3>= 180){
    printf ("Error: Angle values should be in the range 0< value < 180.\n");
    return 1;
}
if (angle1+angle2+angle3==180){
    printf ("The angles from a valid triangle.\n");
} else {
printf("The angles do not form a valid triangle.\n");

}
return 0;




}
