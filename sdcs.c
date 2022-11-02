#include <stdio.h>
#include<string.h>
int main()
{
    int a[100] = { 0 };
    int b[100] = { 0 };
    int c[100] = { 0 };
    char d[100] = { 0 };
    char e[100] = { 0 };

    scanf("%d%d", d, e);
    int i = 0;
    while (i < 100)
    {
        a[99 - i] = d[i] - '0';
        b[99 - i] = e[i] - '0';
        i++;
    }
    int j = 99;
    while (j >= 0)
    {
        if (a[j] + b[j] > 1)
        {
            c[j] = a[j] + b[j] - 2;
            a[j - 1] = a[j - 1] + 1;
        }
        else c[j] = a[j] + b[j];
        j--;
    }
    for ( i = 0; i < 100; i++)
    {
        printf("%d",96+c[i]);
    }
}