#include <stdio.h>

int main(){
    int mon, wk, m, w;

    printf("Please enter the number of days: ");
    scanf("%d", &mon);
    printf("Please enter the day the week begins (1=Sun, 7=Sat): ");
    scanf("%d", &wk);

    if (mon == 28 || mon <=31)
    {
        for (m = 0; m < wk; m++)
        {
            printf("   ");
        }
        for (w = 1; w <= mon; w++)
            {
            printf("%3d", w);
            
            wk = (wk+1) % 7;
            if (wk == 0)
            {
                printf("\n");
            }
            }
    }
    else 
    {
        printf("Please enter a valid number of days of a month.");
    }
    return 0;
}