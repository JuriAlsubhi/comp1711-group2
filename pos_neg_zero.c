#include <stdio.h>
int main() {
    int mark;

    printf ("Enter the mark: \n");
    scanf ("%d", &mark);
    if (mark > 0)
    {
        printf ("The mark of %d is positive\n", mark);
    }
    else if (mark < 0)
    {
        printf ("The mark of %d is negative\n", mark);
    }
    else if (mark == 0)
    {
        printf ("The mark of %d is zero\n", mark);
    }
    return 0;
}