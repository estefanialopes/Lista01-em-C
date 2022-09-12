#include<stdio.h>

int main(){

float x,z,iv;

printf("Digite o valor do seu investimento:\n");
scanf("%f",&x);

printf("Digite o valor do juros mensal:\n");
scanf("%f",&z);

iv=(x+((z*100)/100)*12);

printf("O valor montante final do investimento eh:%2.f",iv);

return 0;

}
