#include<stdio.h>

int main(void){
    int arr[3] = {1,2,3};
    int copyArr[3] = {0};
printf("Original Array:");
    for(int i = 0; i < 3; i++){
        printf(" %d\t",arr[i]);
        copyArr[i] = arr[i];
    }
    printf("Copy array: ");
    for (size_t i = 0; i < 3; i++)
    {
       printf("%zu\t",copyArr[i]);
    }
    
    return 0;
}