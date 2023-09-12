#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n + 1];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int pos, element;
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    for (int i = n; i > pos; i--)
    {
        array[i] = array[i - 1];
    }
    array[pos] = element;
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}
