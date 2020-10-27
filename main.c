#include <stdio.h>

int main(void) {
char unidadeTemperatura;
int temperatura;

printf("Tipos de temperatura:\n");
printf("C - Celsius        F - Fahrenheit\n");
printf("\n");
printf("Digite a temperatura");
scanf("%i",&temperatura);
printf("Digite a unidade de Temperatura\n");
scanf("%s", &unidadeTemperatura);
  switch ( unidadeTemperatura){
    case 'C':
      temperatura=temperatura * 1.8 + 32;
      printf("Calculando .... \n");
       printf("Temperatura convertira em Fahrenheit:%i", temperatura);
    break;
      case 'F':
        temperatura=(temperatura - 32 ) / 1.8;
        printf("Calculando .... \n");
        printf("Temperatura convertira em Celcius:%i", temperatura);
      break;
      default:
        printf("Opcao invalida");
  }
  return 0;
}