#include <stdio.h>

int main(){
float pi = 3.14159265359;
float radio, area, perimetro;

printf("Saludos cordiales ingrese el radio del circulo con el que desea operar en centimetros\n");
scanf("%f",&radio);

radio = pi * radio * radio;
perimetro = 2 * pi * radio;

printf ("Su circulo de radio %f tiene un área y perimetro de %f y %f centimetros respectivamente\n", radio, area, perimetro);
    return 0;
}
