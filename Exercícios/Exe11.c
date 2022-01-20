#include<stdio.h>
int main(){

    float saldo;

    saldo = 1;

    while(saldo != -1){
        printf("Digite o saldo da conta:\n");
        scanf("%f", &saldo);

        if(saldo > 10000){
            saldo = saldo + saldo*0.001;
            printf("Seu novo saldo e: %f", saldo);
        }
        else{
            saldo = saldo + saldo*0.003;
            printf("Seu novo saldo e: %f", saldo);
        }
    }
}