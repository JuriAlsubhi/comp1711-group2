#include <stdio.h>

int mian(){
    float width, length, area;

    printf("what is the width? ");
    scanf("%f", &width);
    printf("\nwhat is the width? ");
    scanf("%f", &length);

    area = width * length;

    printf("The area is: %g\n", area);

    return 0;
}