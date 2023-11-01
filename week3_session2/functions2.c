#include <stdio.h>

float sum (int a, int b)
{
    float answer;
    answer = a + b;
    return answer;
}

int main () 
{
    float y = 2;
    float z = sum(5, y); // calling our new function
 // you don't have to change both of them just change the second one to float
    printf ("The sum of 5 and %f is %f\n", y, z);
}