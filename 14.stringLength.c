#include <stdio.h>
#include <string.h>

int main()
{
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