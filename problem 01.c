#include <stdio.h>
int main (){
int employee_id;
float basic_salary, overtime_hours, overtime_Rate, total_salary ;
printf("Enter employee ID:");
scanf("%d", &employee_id);
printf("Enter basic salary:");
scanf("%f", &basic_salary);
printf("Enter overtime hours:");
scanf("%f", &overtime_hours);
printf("Enter overtime rate:");
scanf("%f", &overtime_Rate);
if (basic_salary<= 0 || overtime_Rate <= 0 || (overtime_hours< 0 && overtime_hours != 0 ) ) {
    printf ("Invalid input . basic salary , overtime hours, and overtime rate must be positive.\n");
} else {
total_salary = basic_salary + (overtime_hours * overtime_Rate);
printf ("Employee ID :%d\n",employee_id);
printf ("Total salary :%.2f\n", total_salary);

}
return 0 ;


}
