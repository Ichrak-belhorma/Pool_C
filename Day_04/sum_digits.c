#include <stdio.h>

int sum_digits(int n){
    int sum=0;
    for (int i=0;i<=n;i++) {
        sum+=i;
    }
    return sum;
}

int main(void){
    int n;
    printf("Entrer n: ");
    scanf("%d", &n);

    printf("Sum = %d\n", sum_digits(n));
    return 0;
}
