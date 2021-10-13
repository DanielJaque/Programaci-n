#include <stdio.h>
int main (){

  int numero;
  int resultado= 0;
  int bajo = 0;
  int alto = 1;
  printf("Ingrese un numero\n");
  scanf("%d",&numero);
  printf("0\n");
    for (int i = 0; i<=numero-2; i++)
        {
            bajo = alto;
            alto = resultado;
            resultado = bajo + alto;
            printf("%d\n", resultado);
        }
    return 0;
}