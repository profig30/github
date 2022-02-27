#include <stdio.h>
#include "include/principal.h"
#include "include/modulo1.h"

/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char const *argv[])
{
    int i = NUM;
    printf("Número_ :");
    scanf("%d", &i);
    printf("i=%d\n",i);
    if (i>NUM2)
    {
        printf("Mayor de %d\n", NUM2);
    } else {
        printf("Menor de %d\n", NUM2);
    }
    printf ("n=%d\n", ff(i));
    return 0;
}