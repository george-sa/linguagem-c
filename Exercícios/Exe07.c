#include<stdio.h>
int main(){

    int soma, i;
    soma = 0;

    for (i = 5; i < 11; i++)
    {
        soma = soma + i;
    }

    printf("A soma dos numeros e igual a: %d", soma);
}