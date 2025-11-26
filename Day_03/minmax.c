#include <stdio.h>

int min_max(int arr[], int size, int* min, int* max){
    if(size<=0) return 1; // erreur
    *min=arr[0];
    *max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<*min){*min=arr[i];}
        if(arr[i]>*max){*max=arr[i];}
    }
    return 0;
}

int main(void){
    int arr[]={3,7,1,10,8};
    int minVal, maxVal;
    if(min_max(arr,5,&minVal,&maxVal)==0){
        printf("Max: %d, Min: %d\n",minVal,maxVal);
    } else{
        printf("Erreur\n");
    }
    return 0;
}