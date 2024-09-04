#include <stdio.h>

int LerInt(){
  int tempValor;
  scanf("%d:", &tempValor);

  return tempValor;
}

int main(void){

  int hora, minuto, segundo, segundosPassados;

  segundosPassados = LerInt();

  segundo = segundosPassados % 60;
  minuto = (segundosPassados  / 60) % 60;
  hora = (segundosPassados  / 60) / 60;

  printf("%.2d:%.2d:%.2d", hora, minuto, segundo);
  
  return 0;  
}