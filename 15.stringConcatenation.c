#include <stdio.h>
#include <string.h>

int main()
{
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