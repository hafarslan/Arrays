#include<stdio.h>

int main(void){
    int arr[4];
    for (size_t i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (size_t i = 0; i < 4; i++)
    {
        if (arr[i] < 0 )
        {
            printf("%d\n", arr[i]);
        }
        
    }
    
    return 0;
}