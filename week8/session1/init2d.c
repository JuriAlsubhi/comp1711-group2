#include <stdio.h>

void printArray(int a[][3] ){
  for (size_t i = 0; i <= 1; ++i) {
     for (size_t j = 0; j <= 2; ++j) {
        printf("%d ", a[i][j]);
     }
     printf("\n"); // start new line of output 
     }
}

int main() { // after changing It still works which means that's good?
  int array1[2][3] = {{3, 5, 6}, {7, 9, 8}}; // activity change the number and data here it was 1, 2, 3 and 4, 5, 6.
  printf("Values in array1 by row are:\n"); // first method is easier than the other because we might do something wrong with it
  printArray(array1);

  int array2[2][3] = {1, 2, 3, 4, 5}; // add another number at the end
  printf("Values in array2 by row are:\n");
  printArray(array2);


  int array3[2][3] = {{1, 2}, {4}};
  printf("Values in array3 by row are:\n");
  printArray(array3);
  
  return 0;
}