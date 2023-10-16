#include <stdio.h>

int main() {

    int mark;

    // Add in:
    // checking the value is over 60 for a 2:1
    // check the value is over 70 for a first
    // check that the value is a valid mark (between 0 and 100, inclusive)
    

    printf ("Enter the mark: \n");
    scanf ("%d", &mark);

    if (mark == 0)
    {
        printf ("The mark of %d is zero\n", mark);
    }
    else if (mark >= 70 && <= 100)
    {
        printf ("The mark of %d is a first\n", mark);
    }
    else if (mark >=60)
    {
        printf ("The mark of %d is a 2:1\n", mark);
    }
    else if (mark < 40)
    {
        printf ("The mark of %d is a fail\n", mark);
    }
    else
    {
        printf ("The mark of %d is a pass\n", mark);
    }

    return 0;
}