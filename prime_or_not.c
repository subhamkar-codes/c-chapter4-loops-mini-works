#include <stdio.h>

int main()
{
    int n, prime = 1;
    printf("Enter Your Number:\n ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)

        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    if (prime == 1)
    {

        printf("Your Number is a Prime number\n");
    }
    else
    {
        printf("Your Number is not a Prime Number");
    }

    return 0;
}