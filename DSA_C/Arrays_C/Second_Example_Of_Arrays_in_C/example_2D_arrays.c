#include <stdio.h>

int main()
{
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    // Accessing elements of the array
    printf("Element at matrix[0][0]: %d\n", matrix[0][0]);
    printf("Element at matrix[1][2]: %d\n", matrix[1][2]);


    // Updating elements of the array
    matrix[1][1] = 0;
    printf("Element at matrix[1][1] after update: %d\n", matrix[1][1]);

    // Iterating over the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
