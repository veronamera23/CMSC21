#include <stdio.h>

int main(void)
{
 int i;
 
    for (i=1; i <= 128; i)
    {
    printf("%d ", i);
    i *= 2;
    }
 
 return 0;
}