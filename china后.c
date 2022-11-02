#include <stdio.h>
int main()
{
    int max, min, sum, count = 0;
    int tmp;
    scanf("%d", &tmp);
    if (tmp == 0)return 0;
    max = min = sum = tmp;
    count++;
    while (tmp != 0)
    {
        scanf("%f", &tmp);
        if (tmp != 0)
        {
            sum += tmp;
            count++;
            if (tmp > max)
            {
                max = tmp;
            }
            if (tmp < min)
            {
                min = tmp;
            }

        }

    }
    printf("max=%d,min=%d,average=%d\n", max, min, sum / count);
}