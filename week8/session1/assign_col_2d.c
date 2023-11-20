#include <stdio.h>
// using a switch to give two differnt options after or before
void printColumn(int a[][4], int colIndex, int rows, char when) { // showing a column etc
    switch (when) {
        case 'B':
            printf("Values in column %d before change:\n", colIndex); break;

        case 'A':
            printf("Values in column %d after change:\n", colIndex); break;

        default: 
            printf("Invalid option\n");
            return;
    }
// having an if statement here
    for (int i = 0; i < rows; ++i) {
        printf("%d\n", a[i][colIndex]);
    }
}
// using a loop here 
void changeColumn(int a[][4], int colIndex, int rows, int newValue) { // single integer so only one value
    for (int i = 0; i < rows; ++i) {
        a[i][colIndex] = newValue;
    }
}
// having 2d arrays here
int main() {
    int array1[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int colIndexToChange = 2; // Change the values in the third column (column at index 2) if we put 4 c will let me do it but wrong
    int newValue = 20;

    printColumn(array1, colIndexToChange, 3, 'B'); // 'B' stands for Before
    changeColumn(array1, colIndexToChange, 3, newValue);
    printColumn(array1, colIndexToChange, 3, 'A'); // 'A' stands for After

    return 0;
} // what we are doing is outside the course work so no worries about it