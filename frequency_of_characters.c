#include<stdio.h>
#define RESPONSES_SIZE 14
#define FREQUENCY_SIZE 6
// int main(void){
    int responses[RESPONSES_SIZE] = {1, 2, 3, 4, 5, 4, 3, 2, 1, 2, 3, 1, 4, 3};

    int frequency[FREQUENCY_SIZE] = {0};

    for (int i = 0; i < RESPONSES_SIZE; i++)

    {
        ++frequency[responses[i]];
    }
    printf("%s%12s\n", "Rating", "Frequency");
    for (size_t rating = 1; rating < FREQUENCY_SIZE; rating++)
    {
        printf("%6zu%12d\n", rating, frequency[rating]);
    }

    return 0;
}