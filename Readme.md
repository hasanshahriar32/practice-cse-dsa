# Data Structure & Algorithm Sessional

## 1. Write a program that finds the prime numbers using sieve method

Solution:

```c
#include <stdio.h>
int main()
{
    int number, i, j;
    printf("Enter the number:\n");
    scanf("%d", &number);

    int primes[number + 1];
    for (i = 2; i <= number; i++)
        primes[i] = i;

    i = 2;
    while ((i * i) <= number)
    {
        if (primes[i] != 0)
        {
            for (j = 2; j < number; j++)
            {
                if (primes[i] * j > number)
                    break;
                else
                    primes[primes[i] * j] = 0;
            }
        }
        i++;
    }

    for (i = 2; i <= number; i++)
    {
        if (primes[i] != 0)
            printf("%d\t", primes[i]);
    }
    printf("\n");
    return 0;
}
```

input

```
100
```

Sample Output:

```
Enter the number:
2	3	5	7	11	13	17	19	23	29	31	37	41	43	47	53	59	61	67	71	73	79	83	89	97
```

## 2. Write a program that finds the largest and smallest elements in an array

Solution:

```c
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
```

input

```
5
5
2
46
100
5
```

Sample Output:

```
Enter the size of array:
Enter the elements of array: The Maximum number is: 100
The Minimum number is: 2
```

## 3. An array A Containing N elements is given. Write a program that captures the sum of

array elements.

Solution:

```c
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
```

input

```
5
5
2
46
100
5
```

Sample Output:

```
Enter the size of array:
Enter the elements of array: The sum of elements of array is: 162
```

## 4. Write a program to find whether the array of integers contains a duplicate number.

```c
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
```

input

```
5
25
30
100
100
2
```

Sample Output:

```
Enter the size of array: Enter the elements of array: The duplicate number is : 100
```

## 5. Write a program to insert a number at a given location in an array.

```c
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
```

input

```
5
25
30
100
100
2
3
200
```

Sample Output:

```
Enter the size of array: Enter the elements of array: Enter the position where you want to insert the element: Enter the element you want to insert: 25	30	100	200	100	2
```

## 6. Write a program to delete a number from a given location in an array.

Solution:

```c
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
```

input

```
5
25
30
100
100
2
3
```

Sample Output

```
Enter the size of array:Enter the element of array:Enter the position:25	30	100	2
```

## 7) Write a program to merge two sorted arrays

```c
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter the size of first array: ");
    scanf("%d", &n1);
    printf("Enter the array elements: ");
    int a[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter the array elements: ");
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    n3 = n1 + n2;
    int c[n3];
    for (int i = 0; i < n1; i++)
        c[i] = a[i];
    for (int i = 0; i < n2; i++)
        c[i + n1] = b[i];

    printf("The merged array: ");
    for (int i = 0; i < n3; i++)
        printf("%d ", c[i]);

    printf("\nFinal array after sorting: ");
    for (int i = 0; i < n3; i++)
    {
        int temp;
        for (int j = i + 1; j < n3; j++)
        {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for (int i = 0; i < n3; i++)
        printf(" %d ", c[i]);
    return 0;
}
```

input

```
5
25
30
100
100
2
3
200
5
20
```

Sample Output

```
Enter the size of first array: Enter the array elements: Enter the size of second array: Enter the array elements: The merged array: 25 30 100 100 2 200 5 20
Final array after sorting:  2  5  20  25  30  100  100  200
```

## 8) Write programs for implementing the following sorting methods to arrange a list of integers/strings in ascending/descending order:

a) Bubble Sort

b) Selection Sort

c) Insertion Sort

1. **Bubble Sort**

Solution -1

```c
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the array element: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
}
```

solution- 2

```c
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer for the number of elements.\n");
        return 1;
    }

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using Bubble Sort
    bubbleSort(arr, n);

    // Print the sorted array
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```

input

```
5
25
30
100
100
2
```

Sample output

```
Enter the number of elements in the array: 5
Enter 5 elements:
30 10 50 20 40
Sorted array in ascending order:
10 20 30 40 50
```

1. **Selection Sort**

Solution;

```c
#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[i] and arr[minIndex]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer for the number of elements.\n");
        return 1;
    }

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using Selection Sort
    selectionSort(arr, n);

    // Print the sorted array
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```

input

```
5
25
30
100
100
2
```

Sample output

```
Enter the number of elements in the array: 5
Enter 5 elements:
30 10 50 20 40
Sorted array in ascending order:
10 20 30 40 50
```

1. **Insertion Sort**

```c
#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer for the number of elements.\n");
        return 1;
    }

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using Insertion Sort
    insertionSort(arr, n);

    // Print the sorted array
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```

input

```
5
25
30
100
100
2
```

Sample output

```
Enter the number of elements in the array: 5
Enter 5 elements:
30 10 50 20 40
Sorted array in ascending order:
10 20 30 40 50
```

## 9. Write programs for search an element from a list of integers/strings

a) Liner Search
b) Binary Search

a) **Liner Search**

Solution:

```c
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
```

input

```
5
25
30
100
100
2
100
```

Sample Output:

```
Enter the size of array: Enter the elements of array: Enter the element to be searched:  The location of element:2
The element is:100
 The location of element:3
The element is:100
```

b) **Binary Search**

Solution:

```c
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
```

input

```
5
25
30
100
100
2
100
```

Sample Output

```
Enter the size of array:Enter the array of element:Enter the search of array element:The location is : 2
The element is : 100
```

## 10. Write a program to read and display a matrix

Solution:

```c
#include <stdio.h>
int main()
{
  int arr1[3][3],i,j;
  printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }

 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",arr1[i][j]);
  }
 printf("\n\n");
}
```

input

```
5
25
30
100
100
2
100
2
5
```

Sample Output:

```
Input elements in the matrix :
element - [0],[0] : element - [0],[1] : element - [0],[2] : element - [1],[0] : element - [1],[1] : element - [1],[2] : element - [2],[0] : element - [2],[1] : element - [2],[2] :
The matrix is :

5	25	30
100	100	2
100	2	5
```

## 11. Write a program to add and multiply two matrices

Solution:

```c
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3] = {0}, d[3][3] = {0};
    int i, j, k, m, n, p, q;
    printf("Enter no. of rows and columns in matrix A: ");
    scanf("%d%d", &m, &n);
    printf("Enter no. of rows and columns in matrix B: ");
    scanf("%d%d", &p, &q);
    if (m != p || n != q)
    {
        printf("Matrix Addition is not possible");
        return;
    }
    else if (n != p)
    {
        printf("Matrix Multiplication is not possible");
        return;
    }
    else
    {
        printf("Enter elements of matrix A: ");
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        printf("Enter elements of matrix B: ");
        for (i = 0; i < p; i++)
            for (j = 0; j < q; j++)
                scanf("%d", &b[i][j]);
        // Matrix Addition
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                c[i][j] = a[i][j] + b[i][j];
        printf("\nResult of Matirx Addition:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                printf("%d ", c[i][j]);
            printf("\n");
        }
        // Matrix Multiplication
        for (i = 0; i < m; i++)
            for (j = 0; j < q; j++)
                for (k = 0; k < p; k++)
                    d[i][j] += a[i][k] * b[k][j];
        printf("\nResult of Matirx Multiplication:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
                printf("%d ", d[i][j]);
            printf("\n");
        }
    }
    return 0;
}
```

input

```
3 3
3 3
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
```

Sample Output:

```
Enter no. of rows and columns in matrix A: Enter no. of rows and columns in matrix B: Enter elements of matrix A: Enter elements of matrix B:
Result of Matirx Addition:
2 4 6
8 10 12
14 16 18

Result of Matirx Multiplication:
30 36 42
66 81 96
102 126 150
```

## 12. Write a program that takes a matrix A and finds its transpose A^T and displays it

Solution:

```c
#include <stdio.h>

int main()

{
    int arr1[50][50], brr1[50][50], i, j, r, c;

    printf("\nInput the rows and columns of the matrix : ");
    scanf("%d %d", &r, &c);

    printf("Input elements in the first matrix :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nThe matrix is :\n");
    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < c; j++)
            printf("%d\t", arr1[i][j]);
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            brr1[j][i] = arr1[i][j];
        }
    }

    printf("\n\nThe transpose of a matrix is : ");
    for (i = 0; i < c; i++)
    {
        printf("\n");
        for (j = 0; j < r; j++)
        {
            printf("%d\t", brr1[i][j]);
        }
    }
    printf("\n\n");
}
```

input

```
3 3
1 2 3 4 5 6 7 8 9
```

Sample Output:

```
Input the rows and columns of the matrix : Input elements in the first matrix :
element - [0],[0] : element - [0],[1] : element - [0],[2] : element - [1],[0] : element - [1],[1] : element - [1],[2] : element - [2],[0] : element - [2],[1] : element - [2],[2] :
The matrix is :

1	2	3
4	5	6
7	8	9

The transpose of a matrix is :
1	4	7
2	5	8
3	6	9
```

## 13. Write a program that computes the sum of diagonal elements of a square matrix.

Solution:

```c
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
```

input

```
3 3
1 2 3 4 5 6 7 8 9
```

Sample Output:

```
Enter the number of Rows :
Enter the number of Columns :
Enter the Element a[0][0] :
Enter the Element a[0][1] :
Enter the Element a[0][2] :
Enter the Element a[1][0] :
Enter the Element a[1][1] :
Enter the Element a[1][2] :
Enter the Element a[2][0] :
Enter the Element a[2][1] :
Enter the Element a[2][2] :
Sum of Diagonal Elements in Matrix is: 15
```

## 14. Write a program to find the length of a string

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Assuming a maximum string length of 100 characters

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate the length of the string using the strlen() function
    int length = strlen(str);

    // Display the length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}
```

input

```
Hello
```

output

```
Enter a string:
Length of the string: 5
```

## 15. Write a program to concatenate two strings

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100]; // Assuming a maximum combined length of 100 characters for both strings
    char str2[50];  // You can adjust this size based on your input requirements

    // Input the first string from the user
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input the second string from the user
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Concatenate the two strings using the strcat() function
    strcat(str1, str2);

    // Display the concatenated string
    printf("Concatenated string: %s\n", str1);

    return 0;
}
```

input

```
hello-
buddy
```

output

```
Enter the first string: Enter the second string: Concatenated string: hello-buddy
```
