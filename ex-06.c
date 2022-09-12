#include <stdio.h>

int main() {

  float avenida, motorista, aux;

  printf("Informe a velocidae permitida:\n");
  scanf("%f",&avenida);

  printf("Informe a velocidade do motorista:\n");
  scanf("%f",&motorista);

  aux=motorista-avenida;
  
  if(aux>=1 && aux<=10){
    printf("O valor da sua multa eh de 50,00 reais");
    
  }else if( aux>=11 && aux<=30){
    printf("O valor da sua multa eh de 100,00 reais");
    
  }else if(aux>30){
    printf("O valor da sua multa eh de 200,00 reais");
  }
  
  return 0;
}
