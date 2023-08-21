#include<stdio.h>
int main () {
double student_number ;
printf ("Input Student Number :");
scanf ("%lf", &student_number);
int intStudentNumber = (int)student_number;
switch(intStudentNumber)
{
case 80 ... 100:
printf("Grade A+\n");
break;
case 70 ... 79:
printf("Grade A\n");
    break;
    case 60 ... 69:
    printf("Grade B\n");
    break;
    case 50 ... 59:
    printf("Grade C\n");
    break;
    case 40 ... 49:
    printf("Grade D\n");
    break;
    case 0 ... 39:
    printf("Grade F\n");
    break;
    default:
        printf("Invalid input\n");
        break;
}
return 0 ;

}
