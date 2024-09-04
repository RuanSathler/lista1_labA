#include <stdio.h>

int LerInt(){
  int tempValor;
  scanf("%d:", &tempValor);

  return tempValor;
}

int main(void){

  int hora, minuto, segundo, segundosPassados;

  hora = LerInt();
  minuto = LerInt();
  segundo = LerInt(); 

  segundosPassados = ((hora * 60) * 60) + (minuto * 60) + segundo;
  printf("%d", segundosPassados);


  return 0;  
}