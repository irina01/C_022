#include <stdio.h>

int a (char *pbin);
int main(void)
{
    char *pbin = "01001001";
    printf("%s is %d\r\n", pbin, a (pbin));
    return 0;
    
}

int a (char *pbin)

{
    int dec = 0;
    while(*pbin != '\0')
        dec = (dec << 1) + *pbin++ - '0';
    return dec;
}
