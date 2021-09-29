#include <stdio.h>
int main (){

float nota1, nota2, notarea1, notarea2, notarea3, notalleres;
printf("Hola, calcularemos tu nota necesaria para poder aprobar la asignatura\n");
printf("Ingresa la nota que sacaste en la prueba 1\n");
scanf("%f",&nota1);
printf("Ingresa la nota que sacaste en la prueba 2\n");
scanf("%f",&nota2);
printf("Ingresa la nota que sacaste en la tarea 1\n");
scanf("%f",&notarea1);
printf("Ingresa la nota que sacaste en la tarea 2\n");
scanf("%f",&notarea2);
printf("Ingresa la nota que sacaste en la tarea 3\n");
scanf("%f",&notarea3);
printf("Ingresa el promedio que sacaste en los talleres\n");
scanf("%f",&notalleres);

notaa3 = (4.0 - 0.5 * (0.2 * notarea1 + 0.25 * notarea2 + 0.35 * notarea3 + 0.2 * notalleres) - 0.5 * (0.2 * nota1 + 0.35 * nota2)) / (0.5 * 0.45);

printf("La nota que necesitas para aprovar es %.1f, espero que apruebes")
return 0;
}
