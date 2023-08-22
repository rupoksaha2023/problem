#include <stdio.h>
int main () {
int m, i=2;
int isprime = 1 ;
printf("Enter a number :");
scanf("%d", &m);
if (m<=1){
    isprime = 0;
} else {
while (i<=m/2){
    if (m%i == 0){
        isprime = 0;
        break;
    }
    i++;
}
}
if(isprime){
    printf("%d is a prime number.\n",m);
} else {
printf("%d is not a prime number.\n",m);
}
    return 0;



}
