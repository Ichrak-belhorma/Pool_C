#include <stdio.h>

void remove_int(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arr[size-1] = 0;
            return;
        }
    }
}

int main(void){
    int arr[]={1,2,3,4,5};
    int n;
    printf("Entrer target:\n");
    scanf("%d",&n);
    remove_int(arr, 5, n);
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}