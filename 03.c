#include <stdio.h>
int main() {
int n,q;
printf("Enter the 1st number: ");
scanf("%d", &n);
printf("Enter the 2nd number:");
scanf("%d", &q);
for (int i=n ; i<=q ;i++){
    int is_prime=1;
    for(int j=2; j<=i/2;j++){
        if( i%j == 0){
            is_prime =0;
            break;
        }
    }
    if (is_prime && i !=1){
        printf(" %d",i);
    }
}
return 0;

}
