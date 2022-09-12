#include <stdio.h>

int main() {

  int L,M,N,menor,maior,meio;

  printf("Digite tres numeros:\n");
  scanf("%d %d %d",&L,&M,&N);

 if (L<M && M<N){
   printf(" %d %d %d",L,M,N);

 }else if(M<N && N<L){
		printf(" %d %d %d",M,N,L);

 }else if(N<M && M<L){
		printf(" %d %d %d",N,M,L);

 }else if(N<L && L<M){
		printf(" %d %d %d",N,L,M);

 }else if(L<M && M<N){
		printf(" %d %d %d",L,N,M);

 }else if(M<L && L<N){
		printf(" %d %d %d",M,L,N);
 }
  return 0;
}
