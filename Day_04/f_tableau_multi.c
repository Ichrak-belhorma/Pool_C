#include <stdio.h>

void f_tableau_multi(int n){
    for(int i=1;i<=10;i++){
        printf("%d",n*i);
    }
}

int main(void) {
    int n;
    printf("Entrez un entier: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Entrée invalide\n");
        return 1;
    }
    f_tableau_multi(n);
    return 0;
}