#include <stdio.h>

int main()
{
    int i, j, k, n = 3;

    for(i=1; i<=n; i++) {
        for(j=n-1; j>=i; j--)
            printf("  ");

        for (j=1; j<=2*i-1; j++)
            printf("# ");
        printf("\n");
    }
    for(i=n-1; i>=1; i--) {
        for(j=n-1; j>=i; j--)
            printf("  ");

        for (j=1; j<=2*i-1; j++)
            printf("# ");
        printf("\n");
    }
    return 0;
}
