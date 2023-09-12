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
    int search;
    printf("Enter the element to be searched: ");
    scanf("%d", &search);
    for (int i = 0; i < n; i++)
    {
        if (array[i] == search)
        {
            printf(" The location of element:%d\n", i);
            printf("The element is:%d\n", array[i]);
            index = 1;
        }
    }
    if (index == -1)
        printf("Element not found");

    return 0;
}
