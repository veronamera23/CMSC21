#include <stdio.h>

int main(void)
{
    int i;
    i = 1;
    while (i < 10) {
    printf("%d ", i);
    i *= 2;
    }
 
    return 0;
}

int main(void)
{
    int i;
    
    for (i = 1; i < 10; i++)
    {
    printf("%d ", i);
    i *= 2;
    }
 
    return 0;
}

int main(void)
{
    int i;
    i = 1;
    
    do 
    { 
    printf("%d ", i);
    i *= 2;
    }
    while (i < 10);
 
    return 0;
}