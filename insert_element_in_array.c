#include<stdio.h>
#define MAX_SIZE 100
int main(void){
    int arr[MAX_SIZE]; 
    int size;
       int num;
       
       int position;
       printf("Enter array size: ");
       scanf("%d", &size);

       printf("Enter array elements: ");
       for (int i = 0; i < size; i++)
       {
           scanf("%d", &arr[i]);
    }
printf("Enter element to inset: ");
scanf("%d",&num);
printf("Enter the element position: ");
scanf("%d",&position);



        for (int i = size; i >= position; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[position - 1] = num;

    
    printf("new array: ");
    for (int i = 0; i < size + 1; i++)
    {
        printf("%d",arr[i]);
    }
    
    
    
    return 0;
}