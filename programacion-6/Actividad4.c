#include <stdio.h>

int main(){
   int edad_usuario, destino_usuario, precio;
   printf ("Buen dia\n");
   printf("Ingrese su edad\n");
   scanf("%d", &edad_usuario);
   if (edad_usuario < 15){
   printf("¿A qué destino desea viajar?(1 , 2 o 3)\n");
   scanf("%d",destino_usuario);
      if(destino_usuario==1)
      {
        printf("El costo del pasaje es de $2500\n");}
      else if (destino_usuario==2){
        printf("El costo del pasaje es de $1200\n");}
      else 
      {  printf("El costo del pasaje es de $2500\n");}
      }
      else if (edad_usuario >= 15 && edad_usuario <=65)
      {
      printf("¿A qué destino desea viajar?(1 , 2 o 3)\n");
      scanf("%d",destino_usuario);
      if(destino_usuario==1){
        printf("El costo del pasaje es de $4200\n");}
      else if (destino_usuario==2){
          printf("El costo del pasaje es de $3000\n");}
      else if (destino_usuario==3){printf("El costo del pasaje es de $3800\n");
      }
   }
   else
   {printf("¿A qué destino desea viajar?(1 , 2 o 3)\n");
   scanf("%d",destino_usuario);
      if(destino_usuario==1){
          printf("El costo del pasaje es de $3000\n");}
      else if (destino_usuario==2){
          printf("El costo del pasaje es de $2000\n");}
      else if (destino_usuario==3)
      {printf("El costo del pasaje es de $2500\n");
      }
   }
   printf("Que tenga un buen viaje\n");
 return 0;
}
