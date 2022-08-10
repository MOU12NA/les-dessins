#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , i, j;
    printf("donnez nombre de lignes :\n");
    scanf("%d", &x);
    for(i=1;i<=x;i++){
        for(j=1;j<=x-i;j++){
            printf("  ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
