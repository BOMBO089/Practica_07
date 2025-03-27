/*

Gonzalez Huerta Alonso  27 / 03 / 25

*/

#include <stdio.h>

int main()
{
    int a, b;


    if (a > b)
    {
        printf("a: ");
        scanf("%d", &a);
        printf("b: ");
        scanf("%d", &b);
        printf("\n");
        printf("\ta (%d) es mayor a b (%d).\n",a,b);

    }
    printf("\tEl programa sigue su flujo.\n");
    
    return 0;
}
