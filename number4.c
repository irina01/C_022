#include <stdio.h>

int c (int num, int d);
int main(void)
{
    int num, d;
    puts("Введите целое число:");
    scanf("%d", &num);
    puts("Введите бит, который Вы хотите проверить:");
    scanf("%d", &d);
    printf("%d\r\n", c (num, d));
    return 0;
}

int c (int num, int d)
{
    int mask = 1;
    mask <<= d;
    return(num & mask);
}
