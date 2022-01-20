#include<stdio.h>
int main(){

    int soma, i;
    soma = 0;

    for ( i = 1000; i < 2001; i++){
        
        if(i%11 == 5){
            soma = soma + i;
        }
    }
    printf("A soma e igual a :%d", soma);
}