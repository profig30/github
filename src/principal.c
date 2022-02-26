#include <stdio.h>
#include "include/principal.h"

int main(int argc, char const *argv[])
{
    int i = NUM;
    printf("Número :");
    scanf("%d", &i);
    printf("i=%d\n",i);
    if (i>NUM2)
    {
        printf("Mayor de %d\n", NUM2);
    } else {
        printf("Menor de %d\n", NUM2);
    }
    
    return 0;
}