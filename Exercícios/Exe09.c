#include<stdio.h>
int main(){

    int i;
    float valor,parcela;
    char pagamento;

    for (i=1; i<16; i++){

        printf("Coloque o valor da compra:\n");
        scanf("%f", &valor);
        printf("Coloque a forma de pagamento:\n");
        scanf("%c", &pagamento);

        if(pagamento == "P"){
            parcela = valor/3;

            printf("O valor da parcela fica de: %f", parcela);
        }

        if(pagamento == "V"){
            valor = valor - valor*0.05;
            printf("O novo valor da compra fica de: %f\n", valor);
        }
    }
}