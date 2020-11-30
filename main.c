#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total, j = 1, num;
    puts("Enter your number:");
    scanf("%d", &num);
    while (!(num <1))
    {
        if ((num % 10) % 2 == 0)
        {
            total += (j * (num%10));
            j*=10;
        }
        num/=10;
    }
    printf("This is total: %d\n", total);
    return 0;
}
