#include <stdio.h>

 int main (){
  int numero;
  int resultado = 0;
   while (numero >=0)
   {
   printf("Por favor ingrese un numero\n");
   scanf("%d",&numero);
   resultado = resultado + numero;
   if (numero < 0){resultado = resultado - numero;}
   }
   printf("El resultado de la suma de los numeros es %d", resultado);
 
    return 0;
}