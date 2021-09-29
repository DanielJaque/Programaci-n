#include <stdio.h>
int main(){
float numero1, numero2, resultado;

printf("Hola, en este programa se le solicitará que ingrrese dos número reales par asu posterior multiplicación,\n");
printf("estos deben ser escritos en formato X.X Y.Y (X e Y pueden tomar cualquier valor, es decir la parte entera y decimal separadas por un punto\n");
printf("Por favor ingrese e lprimer numero");
scanf("%f",&numero1);
printf("Por favor ingrese el segundo numero seguido de enter");
scanf("%f",&numero2);
resultado= numero1*numero2;

printf("el resultado de la multiplicacion entre ambos números es de:%f", resultado);
return 0;
}
