#include<stdio.h>
int main(){

    int nivel, horas;
    float salario;

    printf("Coloque o seu nivel:\n");
    scanf("%d", &nivel);

    printf("Coloque as horas trabalhadas:\n");
    scanf("%d", &nivel);

    if (nivel == 1){
        salario = horas*56;
    }

    if (nivel == 2){
        salario = horas*66;
    }
}