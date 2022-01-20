#include<stdio.h>
int main(){
    
    float premio, premio_descontado;
    float premio1, premio2, premio3;

    printf("Qual o valor do premio?\n");
    scanf("%f", &premio);

    premio_descontado = premio - premio*0.07 ;
    premio1 = premio_descontado*0.46;
    premio2 = premio_descontado*0.32;
    premio3 = premio_descontado*0.22;

    printf("O premio descontado e %f \n", premio_descontado);
    printf("O primeiro ganhador fica com %f\n", premio1);
    printf("O segundo ganhador fica com %f\n", premio2);
    printf("O terceiro ganhador fica com %f\n", premio3);
}