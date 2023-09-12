#include <stdio.h>
int main()
{
    int n, index = -1;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                printf("The duplicate number is : %d\n", array[i]);
                index = 1;
            }
        }
    }
    if (index == -1)
        printf("Element not found");

    return 0;
}
