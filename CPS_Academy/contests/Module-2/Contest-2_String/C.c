#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int result = 0;
    char input1[100];
    char input2[100];
    scanf("%s", input1);
    scanf("%s", input2);

    // Convert input strings to lowercase
    for (int i = 0; input1[i]; i++)
    {
        input1[i] = tolower(input1[i]);
    }
    for (int i = 0; input2[i]; i++)
    {
        input2[i] = tolower(input2[i]);
    }

    int compare = strcmp(input1, input2);

    if (compare > 0)
        result = 1;
    else if (compare < 0)
        result = -1;

    printf("%d", result);
    return 0;
}