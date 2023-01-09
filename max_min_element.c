#include<stdio.h>
#define count 5
int main(void){
    int array[count];
    printf("Enter array elements: ");
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        scanf("%zu", &array[i]);

    }
    int max = 0;
    for (size_t i = 0; i < count; i++)
    {
        if (max < array[i])
        {
            /* code */
            max = array[i];
        }

        
    }
    printf("Max: %d\n", max);

    int min;
    for (size_t i = 0; i < count; i++)
    {
        if (min > array[i])
        {
          
            min = array[i];
        }
        
       
    }
            printf("Min: %d", min);
    
    return 0;
}