#include <stdio.h>
int main()
{
    int a[] = {1, 5, 9, 10, 15};
    int b[] = {2, 3, 4, 5, 6, 7, 8};
    int i = 0, j = 0, k = 0, c[100];
    int num1 = 5;
    int num2 = 7;
    int num3 = num1 + num2;

    while (i < 5 && j < 7)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < 5)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < 7)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    printf("the merged and sorted array is:\n");
    for (int i = 0; i < 12; i++)
        printf("%d ", c[i]);
    return 0;
}