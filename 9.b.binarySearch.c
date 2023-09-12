#include <stdio.h>
int main()
{
    int i, n, element, begin, end;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int array[n];
    printf("Enter the array of element:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the search of array element:");
    scanf("%d", &element);
    begin = 0;
    end = n - 1;
    int mid = (begin + end) / 2;

    while (begin <= end)
    {
        if (array[mid] < element)
            end = mid + 1;
        else if (element == array[mid])
        {
            printf("The location is : %d\n", mid);
            printf("The element is : %d\n", array[mid]);
            break;
        }
        else
            end = mid - 1;
        mid = (begin + end) / 2;
    }
    if (begin > end)
        printf("Not found data");

    return 0;
}
