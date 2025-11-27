#include <stdio.h>
#include <math.h>

int f_ispowerof2(int x) {
    if(x <= 0) return 0;

    while(x > 1){
        double r=sqrt((double)x);
        int rint = (int)r;
        if ((double)rint != r) return 0;
        x = rint;
    }

    return 1;
}

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (f_ispowerof2(x))
        printf("%d is a power of 2\n        ", x);
    else
        printf("%d is not a power of 2", x);
    return 0;
}