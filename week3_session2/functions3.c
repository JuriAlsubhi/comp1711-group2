#include <stdio.h>
float sum (float a, float b);

float sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;  // means that the answer has to return to a float
}

int main () 
{
    float y = 2;
    float z = sum(5, y); // calling our new function

    printf ("The sum of 5 and %f is %.2f\n", y, z); // if we want to 2dp then add .2 after the precentage

    return 0;
}