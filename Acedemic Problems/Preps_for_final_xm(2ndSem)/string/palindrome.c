#include <stdio.h>
#include <string.h>
int main()
{
    char text[100];
    scanf("%s", text);
    int len = strlen(text);
    int ans = 0, i;
    for (i = 0; i < len / 2; i++)
    {
        if (text[i] == text[len - i - 1])
        {
            ans++;
        }
    }
    if (ans == i)
    {
        printf("The number is palindrom!");
    }
    else
    {
        printf("Not Palindrome!");
    }
    return 0;
}