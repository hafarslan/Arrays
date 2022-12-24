#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int freq[7] = {0};
    srand(time(NULL));
    for (size_t i = 0; i < 60000000; i++)
    {
        size_t face = rand() % 6 + 1;
        ++freq[face];
    }

    printf("%s%12s\n", "Face", "Frequency");
    for (int i = 1; i < 7;i++){
        printf("%4d%12d\n", i, freq[i]);
    }

        return 0;
}