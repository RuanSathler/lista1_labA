#include <stdio.h>

int LerInt(){
  int tempValor;
  scanf("%d", &tempValor);

  return tempValor;
}

int main(void){

  int num1, num2, num3, diferenca;

  num1 = LerInt();
  num2 = LerInt();
  num3 = LerInt();

  if((num1 <= num2)&&(num1 <= num3)){
    if(num2 >= num3){
      diferenca = num2 - num1;

      printf("%d", diferenca);
    }
    else{
      diferenca = num3 - num1;

      printf("%d", diferenca);
    }
  }

  if((num2 <= num1)&&(num2 <= num3)){
    if(num1 >= num3){
      diferenca = num1 - num2;

      printf("%d", diferenca);
    }
    else{
      diferenca = num3 - num2;

      printf("%d", diferenca);
    }
  }

  if((num3 <= num1)&&(num3 <= num2)){
    if(num1 >= num2){
      diferenca = num3 - num1;

      printf("%d", diferenca);
    }
    else{
      diferenca = num3 - num2;

      printf("%d", diferenca);
    }
  }
  
  return 0;  
}