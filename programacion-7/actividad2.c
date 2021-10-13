#include <stdio.h>

int main(){
 int numero1 , numero2;
 int resultado = 0 ;
 printf("Ingrese el primer número entero a multiplicar\n");
 scanf("%d", &numero1);
 printf("Ingrese el segundo numero entero a multiplicar");
 scanf("%d",&numero2);

  for (int i = 0; i<numero2; i++ )
  {
      resultado = resultado + numero1;
  }
  printf("El resultado de la multiplicacion entre los numeros es %d", resultado);

    return 0;
}