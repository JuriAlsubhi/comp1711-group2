#include <stdio.h>

int main() {

    int mark = 40;

    if (mark >= 40 && mark <= 70)
    {
        printf ("The mark of %d is a pass\n", mark);
    }
    else if (mark >= 40)
    {
        printf ("The mark of %d is a fail\n", mark);
    }

    return 0;
}