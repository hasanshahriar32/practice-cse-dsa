#include <stdio.h>
int main()
{
    int i, j, matrix[10][10], row, col;
    int sum = 0;

    printf("\nEnter the number of Rows : ");
    scanf("%d", &row);

    printf("\nEnter the number of Columns : ");
    scanf("%d", &col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\nEnter the Element a[%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
                sum = sum + matrix[i][j];
        }
    }
    printf("\nSum of Diagonal Elements in Matrix is: %d", sum);
    return 0;
}
