#include<stdio.h>
int main(){

    int qnt_macas;
    float valor_total;

    printf("Coloque a quantidade de macas compradas:\n");
    scanf("%d", &qnt_macas);

    if(qnt_macas < 12){
        valor_total = qnt_macas*0.30;
    }
    else{
        valor_total = qnt_macas*0.25;
    }

    printf("O valor total da compra e: %f", valor_total);
}