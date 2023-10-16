#include <stdio.h>
int main() {
    int value;

    printf ("Enter a value: \n");
    scanf ("%d", &value);
    if (value % 4)
    {
        printf ("The value of %d is divisible by 5\n", value);
    }
    else if (value % 5)
    {
        printf ("The value of %d is divisible by 4\n", value);
    }
    else if (value % 4 && 5)
    {
        printf ("The value of %d is divisible by both 4 and 5\n", value);
    }
    else
    {
        printf ("The value of %d is not divisible by 4 or 5\n", value);
    }
    return 0;
}