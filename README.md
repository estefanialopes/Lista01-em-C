#include <stdio.h>

int main() {

  int A,B, div;
  
  printf("Digite dois numeros:\n");
  scanf("%d %d",&A, &B);

  div=A/B;

  if(div%2==0){
    printf(" %d eh divisivel por %d",A,B);
    
  }else{
     printf(" %d não eh divisivel por %d",A,B);
  }

 return 0;
}
