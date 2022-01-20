#include<stdio.h>
int main(){

    int i, valor;
    valor = 1;

    

    while(valor > 0){
        printf("Digite um inteiro:\n");
        scanf("%d", &valor);

        if(valor%2 == 0){
            printf("%d", valor);
        }
    }
}