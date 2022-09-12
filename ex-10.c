#include <stdio.h>

int main() {
  
  float sal, prest,emp;

  printf("Informe o valor do salario:\n");
  scanf("%f",&sal);

  printf("Informe o valor da prestacao:\n");
  scanf("%f",&prest);

  if(prest>(sal*0.30)){
    printf("O emprestimo nao pode ser concedido\n");
    
  }else{
    printf("Ficaremos felizes em lhe fazer um emprestimo!\n");
  }

  return 0;
}
