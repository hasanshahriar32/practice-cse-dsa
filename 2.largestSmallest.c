#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int max = array[0], min = array[0];
    for (int i = 0; i < n; i++)

    {
        if (max < array[i])

            max = array[i];

        if (min > array[i])

            min = array[i];
    }
    printf("The Maximum number is: %d\n", max);
    printf("The Minimum number is: %d\n", min);

    return 0;
}
