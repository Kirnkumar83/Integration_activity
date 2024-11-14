#include <stdio.h>

int main()
{
    int count = 0;
    unsigned int iter = 0x77;

    while (iter)
    {
        if (iter & 1)
        {
            count++;
        }
      iter >> 1;
    }

    printf("The value of one's in the number is %d", count);

    return 0;
}
