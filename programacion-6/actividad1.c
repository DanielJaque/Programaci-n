#include <stdio.h>

int main(){
    int numero, resto;
    printf("Por favor ingrese el numero a evaluar\n");
    scanf("%d",&numero);
    resto= numero % 2;
    if (resto==0)
        {
         printf("El numero ingresado es par\n");   
        }
        else
        {
        printf("El numero ingresado es impar\n");
        }
        
    return 0;
}
