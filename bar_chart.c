#include <stdio.h>

int main(void)
{
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