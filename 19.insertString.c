#include <stdio.h>
#include <string.h>

int main()
{
    char text[1000];     // Assuming a maximum main text length of 1000 characters
    char insertStr[100]; // Assuming a maximum insert string length of 100 characters
    int position;

    // Input the main text from the user
    printf("Enter the main text: ");
    scanf(" %[^\n]", text); // Read the entire line, including spaces

    // Input the string to be inserted
    printf("Enter the string to insert: ");
    scanf(" %[^\n]", insertStr); // Read the entire line, including spaces

    // Input the position to insert the string
    printf("Enter the position to insert the string (0-based index): ");
    scanf("%d", &position);

    // Calculate the length of the main text and the insert string
    int textLength = strlen(text);
    int insertLength = strlen(insertStr);

    // Check if the position is valid
    if (position < 0 || position > textLength)
    {
        printf("Invalid position. Please enter a valid position within the main text.\n");
        return 1;
    }

    // Shift characters in the main text to make space for the insert string
    for (int i = textLength; i >= position; i--)
    {
        text[i + insertLength] = text[i];
    }

    // Insert the string into the main text
    for (int i = 0; i < insertLength; i++)
    {
        text[position + i] = insertStr[i];
    }

    // Display the main text with the inserted string
    printf("Modified main text: %s\n", text);

    return 0;
}