#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    while (i < 11)
    {
        sum += i;
        i++;
    }
    printf("The sum of first 10 natural number is %d\n", sum);

    return 0;
}