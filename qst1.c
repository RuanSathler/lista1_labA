#include <stdio.h>

int LerInt(){
  int numLido;
  scanf("%d", &numLido);

  return numLido;
}

int main(){

  int num1, num2, num3, soma;
  
  num1 = LerInt();
  num2 = LerInt();
  num3 = LerInt();

  soma = num1 + num2 + num3;

  printf("%d", soma);

  return 0;
}