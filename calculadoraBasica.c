#include <stdio.h>

// Prototipos realizar suma, resta, multiplicación y división
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
void mostrar_menu();

int main()
{
    int opcion = 0, num1, num2, resultado;
    float resultado_div;

    while (opcion != 5)
    {
        mostrar_menu();
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            printf("Ingrese primer numero: ");
            scanf("%d", &num1);
            printf("Ingrese segundo numero: ");
            scanf("%d", &num2);
            break;

        case 2:
            printf("Ingrese primer numero: ");
            scanf("%d", &num1);
            printf("Ingrese segundo numero: ");
            scanf("%d", &num2);
            break;

        case 3:
            printf("Ingrese primer numero: ");
            scanf("%d", &num1);
            printf("Ingrese segundo numero: ");
            scanf("%d", &num2);
            break;

        case 4:
            printf("Ingrese primer numero: ");
            scanf("%d", &num1);
            printf("Ingrese segundo numero: ");
            scanf("%d", &num2);
            while (num2 == 0)
            {
                printf("Error: Division por cero no permitida. Ingrese un segundo numero diferente de cero: ");
                scanf("%d", &num2);
            }
            break;

        case 5:
            printf("================================\n");
            printf("Gracias por usar la calculadora.\n");
            printf("================================\n");
            printf("Saliendo...\n");
            break;

        default:
            printf("Opcion invalida. Intente nuevamente.\n");
            break;
        }
    }

    return 0;
}


// Función para mostrar el menú de operaciones
void mostrar_menu()
{
    printf("\n CALCULADORA \n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Salir\n");
    printf("Seleccione una opcion: ");
}

// Crear las demás funciones aquí

int multiplicar(int a, int b){
return (a*b);
}

