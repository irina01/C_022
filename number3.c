#include <stdio.h>
int f(int num);
int main(void)
{
    int number, count;

    puts("Введите целое число:");
    while(scanf("%d", &number) == 1)
    {
        count = f (number);
        printf("%d bits opened\r\n", count);
        puts("Введите следующее целое число:");
    }
    puts("Удача");
    return 0;
}
int f (int num)
{
    int mask = 1;
    int count = 0;
    while(num > 0)
    {
        count += num & mask;
        num >>= 1;
    }
    return count;
}