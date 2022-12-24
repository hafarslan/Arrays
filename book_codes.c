// #include<stdio.h>

// int main(void){
//     int c[3];
    
//      c[1] = 2000;
//      c[2] = 12;
//      printf("%d\n", c[1] + c[2]);
//      printf("%d\n", c[1] / 100);

//      for (size_t i = 0; i < 3; i++)
//      {
        
//         c[i] = 0;
//      }
//      printf("%s%8s\n", "Element", "Value");
//         for (size_t i = 0; i < 3; i++)
//         {
            
//                 printf("%7zu%8d\n", i, c[i]);
//         }

//      return 0;
// }


// #include<stdio.h>
// #define SIZE 5
// int main(void){
//     int s[SIZE] = {0};
//     for (size_t i = 0; i < SIZE; i++)
//     {
//         s[i] = 2 + 2 * i;
//     }
//     printf("%s%8s\n", "Element", "Value");
//     for (size_t i = 0; i < SIZE; i++)
//     {
       
//         printf("%7zu%8d\n", i, s[i]);
//     }
    
    
//     return 0;
// }


// #include<stdio.h>
// #define RESPONSES_SIZE 14
// #define FREQUENCY_SIZE 6
// // int main(void){
//     int responses[RESPONSES_SIZE] = {1, 2, 3, 4, 5, 4, 3, 2, 1, 2, 3, 1, 4, 3};

//     int frequency[FREQUENCY_SIZE] = {0};

//     for (int i = 0; i < RESPONSES_SIZE; i++)
        
//     {
//         ++frequency[responses[i]];
//     }
//     printf("%s%12s\n", "Rating", "Frequency");
//     for (size_t rating = 1; rating < FREQUENCY_SIZE; rating++)
//     {
//         printf("%6zu%12d\n", rating, frequency[rating]);
//     }
    
//     return 0;
// }


// #include<stdio.h>
// #include<time.h>
// #include<stdlib.h>

// int main(void){
//     int freq[7] = {0};
//     srand(time(NULL));
//     for (size_t i = 0; i < 60000000; i++)
//     {
//         size_t face = rand() % 6 + 1;
//         ++freq[face];
//     }

//     printf("%s%12s\n", "Face", "Frequency");
//     for (int i = 1; i < 7;i++){
//         printf("%4d%12d\n", i, freq[i]);
//     }

//         return 0;
// }


#include<stdio.h>

int main(void){
    int a[3] = {6, 9, 2};
    printf("%s%13s%17s\n", "Element", "Value", "Bar Chart");
    
    for (size_t i = 0; i < 3; i++)
    {
        printf("%7zu%13d%17s", i, a[i], "");
        for (size_t j = 1; j <= a[i]; j++)
        {
            printf("%c", '*');
        }
        puts("");
    }
    
    return 0;
}