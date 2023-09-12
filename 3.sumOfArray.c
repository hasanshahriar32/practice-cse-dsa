#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    printf("The sum of elements of array is: %d\n", sum);
    return 0;
}
