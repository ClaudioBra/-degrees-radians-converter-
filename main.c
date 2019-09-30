#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int menu;
double x, resultado;

do{
printf("\nMENU!\n\n");
printf("1- GRAUS PARA RAD");
printf("\n2- RAD PARA GRAUS");
printf("\n3- SAIR!");

printf("\n\nO que deseja: ");
scanf("%d", &menu);
system("cls || clear");

switch(menu){

case 1:{
printf("Valor em GRAUS: ");
scanf("%lf", &x);

resultado = (x*M_PI) /180;

printf("\nValor em RADIANOS: %lf\n", resultado);
break;
}

case 2:{
printf("Valor em RADIANOS: ");
scanf("%lf", &x);

resultado = (x*180) /M_PI;

printf("\nValor em GRAUS: %lf\n", resultado);
break;
}
case 3: {
exit(0);
break;

}
default:{
printf("ERRO!!!");
exit(0);
}
}
}while(menu);

    return 0;
}
