#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100]; // Assuming a maximum combined length of 100 characters for both strings
    char str2[100]; // You can adjust this size based on your input requirements

    // Input the first string from the user
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input the second string from the user
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare the two strings using the strcmp() function
    int result = strcmp(str1, str2);

    if (result == 0)
    {
        printf("The strings are equal.\n");
    }
    else if (result < 0)
    {
        printf("The first string is less than the second string.\n");
    }
    else
    {
        printf("The first string is greater than the second string.\n");
    }

    return 0;
}