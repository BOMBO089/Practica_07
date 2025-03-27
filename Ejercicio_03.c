/*

Gonzalez Huerta Alonso  27 / 03 / 25

*/

#include <stdio.h>
#include <math.h>

int main()
{
    int opc,a,b, res;
    res = 0;


    do
    {
        printf("-----------------------\n");
        printf("Calculadora\n");
        printf("\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Potenciacion\n");
        printf("6. Radicacion\n");
        printf("\n");
        printf("Ingrese 0 para finalizar\n");
        printf("Ingrese la opcion: ");
        scanf("%d", &opc);
        if (opc = 0)
        {
            printf("Finalizando");
            return 0;
        }
        printf("\n");
        printf("Ingrese los numeros a y b\n");
        printf("a: ");
        scanf("%d",&a);
        printf("b: ");
        scanf("%d",&b);

        switch (opc)
        {
        case 1:
            res = a + b;
            printf("Resultado: %d\n",res);
            break;
        case 2:
            res = a - b;
            printf("Resultado: %d\n",res);
            break;
        case 3:
            res = a * b;
            printf("Resultado: %d\n",res);
            break;
        case 4:
            if (b<0)
            {
                printf("No se puede dividir en 0");
            }else
            {
                res = (float)a/(float)b;
                printf("Resultado: %d\n",(float)res);
            }
            break;
        case 5:
            res = pow(a,b);
            printf("Resultado: %d\n",res);
            break;
        case 6:
            res = sqrt(a);
            printf("Resultado: %d\n",res);
            break;       

        default:
            printf("Opcion no valida");

            break;
        }
        
    } while (opc != 0);

    return 0;
}
