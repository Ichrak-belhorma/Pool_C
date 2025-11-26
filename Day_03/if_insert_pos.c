#include <stdio.h>

int if_insert_pos(int arr[], int size, int n) {
    for (int i=0; i < size; i++) {
        if (arr[i] >= n) {
            return i;
        }
    }
    return size;
}

int main(void){
    int arr[]={1,2,5,9};
    int nbr;
    printf("Entrez un nombre:\n");
    scanf("%d",&nbr);
    printf("%d",if_insert_pos(arr, 4, nbr));
    return 0;
}