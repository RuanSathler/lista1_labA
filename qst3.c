#include <stdio.h>

int LerInt(){
  int tempValor;
  scanf("%d", &tempValor);

  return tempValor;
}

int main(void){

  int num1, num2, num3;

  num1 = LerInt();
  num2 = LerInt();
  num3 = LerInt(); 

  if((num1 <= num2)&&(num1 <= num3)){
    if(num2 <= num3){
      printf("%d %d %d", num1, num2, num3);
    }
    else{
      printf("%d %d %d", num1, num3, num2);
    }
  }

  if((num2 <= num1)&&(num2 <= num3)){
    if(num1 <= num3){
      printf("%d %d %d", num2, num1, num3);
    }
    else{
      printf("%d %d %d", num2, num3, num1);
    }
  }

  if((num3 <= num1)&&(num3 <= num2)){
    if(num1 <= num2){
      printf("%d %d %d", num3, num1, num2);
    }
    else{
      printf("%d %d %d", num3, num2, num1);
    }
  }


  return 0;  
}