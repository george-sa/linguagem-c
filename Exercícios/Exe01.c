#include<stdio.h>
int main(){
    
    float salario;
    float salario_ajustado;
    float ajuste;
    
    printf("Qual o seu salario atual?\n");
    scanf("%f", &salario);
    printf("Digite o ajuste:\n");
    scanf("%f", &ajuste);

    salario_ajustado = ajuste*salario/100 + salario;

    printf("O salario ajustado e: %2f", salario_ajustado);
}