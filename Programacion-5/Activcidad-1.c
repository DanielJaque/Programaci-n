#include <stdio.h>
int main(){
int numero1, numero2, resultado;
printf("Buen día\n");
printf("Por favor ingrese el primer numero a sumar seguido de enter\n");
scanf("%d", &numero1 );
printf("Por favor ingrese el segundo numero a sumar seguido de enter\n");
scanf ("%d", &numero2);
resultado= numero1+numero2;
printf("el resultado de la suma entre %d y %d da como resultado %d\n",numero1, numero2, resultado );
return 0;
}
