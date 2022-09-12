#include <stdio.h>

int main() {

  int A,B,C;

  printf("Digite tres numeros;\n");
  scanf("%d %d %d",&A,&B,&C);

  if(A>B+C){
    printf(" o valor %d é maior que a soma dos outros dois numeros",A);

  } else if(B>A+C){
    printf(" o valor %d é maior que a soma dos outros dois numeros",B);

  } else if(C>B+A){
    printf(" o valor %d é maior que a soma dos outros dois numeros",C);
  }else{
    printf(" Nenhum dos valores eh maior que a soma dos outros dois numeros.\n");
  }
  
  return 0;
}
