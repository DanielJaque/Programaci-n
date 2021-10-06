#include <stdio.h>

int main (){
    long clave_correcta = 24681012;
    long clave_ingresada ;
    int i=0;
    
    printf("Buen día\n");
    printf("Ingrese su clave de acceso\n");
    scanf("%lu",&clave_ingresada);
    if (clave_ingresada==clave_correcta){
        printf("Bienvenido\n");
    }else {
        printf("clave incorrecta\n");
        printf("le quedan 2 intentos\n");
        printf("Vuelva a ingresar su contraseña porfavor");
    scanf("%lu",&clave_ingresada);}
    if (clave_ingresada==clave_correcta){
        printf("Bienvenido\n");
    }else {
        printf("clave incorrecta\n");
        printf("le queda 1 intento\n");
        printf("Vuelva a ingresar su contraseña porfavor");
        scanf("%lu",&clave_ingresada);}
     if (clave_ingresada==clave_correcta){
    printf("Bienvenido\n");}
        
    else {printf("Usuario bloqueado\n");}
 return 0;
}
