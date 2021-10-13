#include <stdio.h>

int main(){

 int numero;
   printf("Ingrese el numero que desea evaluar\n");
   scanf("%d",&numero);
   printf("Los numeros primos entre 0 y %d son:\n", numero);
     for(int i = 1; i<=numero ; i++)
          for(int contador=2; contador <= numero; contador++)
              if (numero%i == 0){
                  if (numero == contador)
                  printf("%d",contador);
              }

    return 0;
}