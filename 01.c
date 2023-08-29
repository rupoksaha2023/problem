#include <stdio.h>
int main () {
int n;
printf ("Enter the value of n:");
scanf("%d", &n);
printf ("Numbers between 1 and %d that can not be divided by 7:\n",n);
for(int i=1; i<=n;i++){
    if (i%7 !=0) {
        printf("%3d", i);

    }
}
printf(" \n");
return 0 ;

}
