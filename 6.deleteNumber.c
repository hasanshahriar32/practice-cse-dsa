#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int array[n];
    printf("Enter the element of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int pos;
    printf("Enter the position:");
    scanf("%d", &pos);
    for (int i = pos; i < n; i++)
    {
        array[i] = array[i + 1];
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}
