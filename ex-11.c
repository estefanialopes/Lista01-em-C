#include <stdio.h>

int main() {

  float sal, nsal;

  printf("Informe seu salario:\n");
  scanf("%f",&sal);

  if(sal<500){
  
    nsal=sal+sal*0.15;
    
    printf("Seu novo salario eh =%2.f",nsal);
    
  }else{
    printf("Voce nao tem direito ao reajuste salarial.\n");
  }

  return 0;
}
