#include <stdio.h>
int ft_isalpha(int c)
{
    c += 36;
    //printf("%d", c);
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
    {
        return 1;
    }
    else return 0;
}

int main()
{
    int result = 0;
    char c = 'A';
    while (result == 0)
    {
        int a = ft_isalpha(c);
        result = a - 1;
        printf("%c", c);
        c++;
    }
   // printf("%c", (c - 1));
}