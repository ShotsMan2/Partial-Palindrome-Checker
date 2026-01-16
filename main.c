#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char str[99];
    int i, n, len, sum = 0, j, bas, son, palindrom;

    printf("str girin ");
    scanf("%s", &str);

    printf("n i girin ");
    scanf("%d", &n);

    len = 0;
    i = 0;

    while (str[i] != '\0')
    {
        len++;
        i++;
    }

    bas = n - 1;
    son = len - n;

    while (son > bas)
    {
        if (str[bas] != str[son])
        {
            palindrom = 0;
            break;
        }
        son--;
        bas++;
    }

    if (palindrom == 1)
    {
        printf("palindromdur.");
    }
    else
    {
        printf("palindrom degildir.");
    }
}
